Title: Основы

[Содержание](content.md)

# Stappler SDK

Stappler SDK - набор инструментов для разработки современных кроссплатформенных приложений:

* Высокопроизводительная графика и вычисления на Vulkan
* Доступ к базам данных на клиенте и сервере
* Приложение и вебсервер для него на одном языке с разделяемыми компонентами
* Скриптовая машина на WebAssembly (и любом языке, компилируемом в него)
* Только необходимый минимум зависимостей

## Поддержка платформ

* Linux - x86_64, arm64, e2k
* Android - все платформы, не требует Google Services
* Windows - x86_64
* MacOS - в разработке
* iOS - в разработке

## Графические приложения

SDK позволяет создавать полнофункциональные оконные приложения для всех систем. Графическая система основана на Vulkan.

* Графика с использованием векторных элементов и иконок - чёткая при любой плотности пикселей
* Полнофункциональная типографика с поддержкой Rich Text и отображения HTML
* Виджеты на основе Material Design
* Быстрая и отзывчивая система анимаций
* Экономия энергии устройств за счёт отрисовки по необходимости

## Доступ к базам данных

Работает поверх PostgreSQL или SQLite на клиенте и сервере

* Локальный firebase-подобный объектный интерфейс
* Вычислимые, автоматические, виртуальные поля, триггеры изменений
* Полнотекстовый поиск из коробки
* Принудительный контроль доступа

## Модуль веб-сервера

Построен поверх Apache HTTPD, в виде подключаемого модуля

* Автоматические интерфейсы для доступа к данным
* Поддержка WebSocket
* Асинхронные задачи, работа в фоновом режиме

## Интерфейс WebAssembly

Использует wit-bindgen для поддержки гостевых языков и интерпретатор WAMR.

* Поддержка любого языка из доступного для wit-bindgen или другого генератора биндингов на основе WIT
* Поддержка скомпилированных под платформу бинарных файлов (скрипты без потери в скорости)
* Возможность отладки WebAssembly кода
