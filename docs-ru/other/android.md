Title: Поддержка Android

# Поддержка Android

Для сборки зависимостей зависимостей используется инструмент [NDK](https://developer.android.com/ndk/). Для предварительно собранных зависимостей используется версия 26d.

Базовая версия платформы, поддерживаемая SDK - android-24 (Android 7.0).

Необходимо обратить внимание, что многие проекты используют системные вызовы, требующие android-28: необходимо следить, чтобы флаги целевой платформы были выставлены так, чтобы эти вызовы были заблокированы, если необходимо поддерживать более ранние версии.

При сборке путь к NDK указывается с помощью переменной `NDK=<путь>` при запуске `make`.

Для работы с [WebAssembly](webassembly.md) и [Vulkan](vulkan.md) необходимо, чтобы средства сборки были установлены на вашем текухем хосте.

## Юникод

До версии android-32 *пользовтельского* устройства функции онвертации регистра и сравнения с использованием юникода используют Java-прослойку, что достаточно медленно. Доступность функций версии android-32 определяются динамически.

С версии android-32 используется предоставляемая NDK версия libicuc.

## Activity и другие функции Java

SDK предоставляет вспомогательную Java-библиотеку [appsupport](https://github.com/libstappler/libstappler-xenolith/tree/master/platform/android/appsupport), раскрывающую для кода SDK больше необходимых функций, чем предоставляет NativeActivity.

Для корректного использования необходимо использовать в качестве базового класса предоставляемый библиотекой класс `AppSupportActivity` вместо `NativeActivity`. Однако, SDK автоматически определяет доступность функци и может работать с чистой `NativeActivity`, это ограничит возможности текстового ввода с экранной клавиатурой и отслеживание статуса сети.

## Функции Google Play Services и Firebase

Для функций Google Play Services и Firebase создана вспомогательная библиотека [firebase](https://github.com/libstappler/libstappler-xenolith/tree/master/platform/android/firebase). Она служит, в первую очередь, для получения соотвествующих push-уведомлений.

# Создание приложения на Android

## Application.mk и Android.mk

Для сборки прикладных средств для Android используется ndk-build. Для его работы нужно ознакомиться с двумя ключевыми концепциями: [Android.mk](https://developer.android.com/ndk/guides/android_mk) и [Application.mk](https://developer.android.com/ndk/guides/application_mk).

Для работы необходимо создать Application.mk и Android.mk уровня приложения, после чего указать их для сборки проекта Stappler SDK (в Makefile проекта):

```
LOCAL_ANDROID_MK := proj.android/app/Android.mk # path to root Android.mk
LOCAL_APPLICATION_MK := proj.android/app/Application.mk # path to Application.mk
```


Пример Application.mk

```
# Используем статическую версию libc++ из NDK
APP_STL := c++_static

# Минимальная версия платформы для приложения (24 - минимум, поддерживаемый SDK)
APP_PLATFORM := android-24

# SDK требует минимум -std=gnu++20 и -frtti для работы
# исключения не используются в SDK, потому их отключение выгодно
# -Wno-gnu-string-literal-operator-template  -Wno-unqualified-std-cast-call - ошибки кодового стиля clang, не являющиеся ошибками для SDK
APP_CPPFLAGS :=  -frtti -fno-exceptions -std=gnu++20 -Wno-extern-c-compat -Wno-gnu-string-literal-operator-template
```


Пример Android.mk

```
# Стандартный вариант Android.mk
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# Имя собираемого модуля для включения в Android-приложение
LOCAL_MODULE := application

# Подключение модуля, собираемого SDK
LOCAL_WHOLE_STATIC_LIBRARIES := stappler_application_generic

include $(BUILD_SHARED_LIBRARY)

# Добавляем корень проекта в качестве пути для поиска модулей ndk-build
$(call import-add-path,$(LOCAL_PATH)/../..)

# Подключаем создаваемый SDK модуль
$(call import-module,stappler-build/android)
```

## Сборка модуля SDK для ndk-build

Сборка файла модуля (экспорт проекта в ndk-build) выполняется командой:

```
make NDK=<путь к NDK> android export
```

Это создаёт файл stappler-build/android/Android.mk, который отражает проект из `Makefile`. Запуск [ndk-build](https://developer.android.com/ndk/guides/ndk-build) для этого проекта соберёт целевой проект для Android.

Цель `android-export` и файл stappler-build/android/Android.mk организованы таким образом, что запуск make по цели обновляет файл только тогда, это обновление реально необходимо. Это позволяет устанавливать файл stappler-build/android/Android.mk в качестве целевого предусловия, и не страдать от постоянной полной перестройки проекта.

Также, системы сборки Stappler SDK может собирать полностью готовую разделяемую библиотеку, самостоятельно оперируя ndk-build. Для этого служат цели `android-debug`, `android-debug-clean`, `android-release`, `android-release-clean`.

После сборки, готовую динамическую библиотеку (библиотеки под конкретные архитекутры) можно добавлять в сборку Android-приложения.

## Интеграция с gradle

Gradle - стандартная система сборки для Android на текущий момент. Для интеграции просто используйте проект ndk-build из Android.mk и Application.mk. Например, так:

```
plugins {
    id 'com.android.application'
}
// пре-инициализация
...

// Базовое правило для вызова экспорта проекта из Stappler SDK
tasks.register('prepareAndroidMk', Exec) {
    workingDir "${buildDir}/../../.."
    commandLine 'make', 'android-export'
}

// Устанавливаем правило перед сборкой
preBuild.dependsOn prepareAndroidMk

android {
	// конфигурация проекта здесь
    ...

    defaultConfig {
	    // стандартные параметры сборки здесь
        ...
        // связываем с Application.mk
	    externalNativeBuild {
			ndkBuild {
				arguments "NDK_APPLICATION_MK:=Application.mk"
			}
	    }
    }
    ...
    // связываем с Android.mk
    externalNativeBuild {
		ndkBuild {
			path "Android.mk"
		}
    }
    ...
}
```

С таким подходом Gradle успешно захватывает весь C++ проект для Android, и может компилировать его инкрементально при изменении. Также, при использовании Android Studio это позволяет увидеть весь C++ проект в редакторе кода и отлаживать его визуально.

## NativeActivity

Stappler SDK может использоваться для вспомогательных средств, таких, как ГОСТ-криптография или работа с БД, однако, основная ценность в возможности создавать графические приложения. Для этого необходимо использовать NativeActivity, которая будет загружать код, предоставляемый Stappler SDK.

Для этого в C++ приложении необходимо предоставить функцию `ANativeActivity_onCreate`. Обычно мы делаем это дополнительным файлом со стандартным именем `native_activity.cpp`. Пример реализации:

```cpp
// Условная компиляция только для Android
#if ANDROID

// Базовые заголовки
#include <jni.h>
#include <android/native_activity.h>

#include "android/XLPlatformAndroidActivity.h"
#include "android/XLPlatformAndroidMessageInterface.h"

// Ваш заголовок приложения (наследника xenolith::Application)
#include "ExampleApplication.h"

namespace stappler::xenolith::myapp {

// Экспортируем функцию под её основным именем и делаем доступной для JNI
SP_EXTERN_C JNIEXPORT


void ANativeActivity_onCreate(ANativeActivity* activity, void* savedState, size_t savedStateSize) {

	// Создаём С++ адаптер для NativeActivity
	auto a = Rc<platform::Activity>::create(activity, platform::ActivityFlags::CaptureInput);
	
	// Читаем предоставляемую системой информацию
	auto info = a->getActivityInfo();

	// Запускаем NativeActivity
	a->run([info = move(info)] (platform::Activity *a, Function<void()> &&initCb) {
		// Эта функция будет вызвана при успешном запуске
		
		// Устанавливаем параметры приложения из системной информации Activity
		ViewCommandLineData appInfo({
			.bundleName = move(info.bundleName),
			.applicationName = move(info.applicationName),
			.applicationVersion = move(info.applicationVersion),
			.userLanguage = move(info.locale),
			.userAgent = move(info.systemAgent),
			.density = info.density
		});

		// Создаём и запускаем наше приложение
		auto app = Rc<ExampleApplication>::create(move(appInfo), a);
		
		// Передаём функцию пост-инициализации Activity в запуск приложения
		app->run(move(initCb));
	});
}

}

#endif
```

### Дополнительная Java-библиотека AppSupportActivity

AppSupportActivity, предоставляемая xenolith, расширяет возможности NativeActivity по общению между Java и C++. Это упрощает процесс создания приложения.

Для подключения этой библиотеки:

* В settings.gradle добавить в конец файла:

```
include ':appsupport'

project(':appsupport').projectDir = new File('<путь к установке Stappler SDK (libstappler-root)>/xenolith/platform/android/appsupport')
```

* В build.gradle проекта:

```
// добавляем в блок dependencies
dependencies {
	// после других зависимостей
    implementation project(path: ":appsupport")
}
```

После добавления можно наследоваться от AppSupportActivity в своей реализации, или напрямую загружать её в AndroidManifest.xml.

Пример AndroidManifest.xml:

```xml
<?xml version="1.0" encoding="utf-8"?>
<!-- BEGIN_INCLUDE(manifest) -->
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
    android:versionCode="1"
          android:versionName="1.0">

  <application
      android:icon="@mipmap/ic_launcher"
      android:label="@string/app_name">

    <activity android:name="org.stappler.xenolith.appsupport.AppSupportActivity"
          android:configChanges="orientation|screenSize|keyboardHidden"
          android:screenOrientation="fullSensor"
        android:exported="true">
      <!-- Tell NativeActivity the name of our .so -->
      <meta-data android:name="android.app.lib_name"
                 android:value="application" />
      <intent-filter>
        <action android:name="android.intent.action.MAIN" />
        <category android:name="android.intent.category.LAUNCHER" />
      </intent-filter>
    </activity>
  </application>

</manifest>
<!-- END_INCLUDE(manifest) -->
```
