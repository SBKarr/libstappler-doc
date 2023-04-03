# Copyright (c) 2023 Stappler LLC <admin@stappler.dev>
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.

STAPPLER_ROOT ?= ../xenolith/libstappler

LOCAL_OUTDIR := build
LOCAL_EXECUTABLE := libstappler-doc

LOCAL_TOOLKIT := $(abspath $(STAPPLER_ROOT)/common.mk)
LOCAL_TOOLKIT_OUTPUT := $(realpath .)/$(LOCAL_OUTDIR)

LOCAL_MODULES := \
	common_filesystem \
	common_data \
	common_brotli_lib

LOCAL_ROOT = .

LOCAL_SRCS_DIRS :=  src
LOCAL_SRCS_OBJS :=
LOCAL_INCLUDES_DIRS := src
LOCAL_INCLUDES_OBJS := \
	cppast/include \
	$(LOCAL_OUTDIR)/cppast/_deps/type_safe-src/include \
	$(LOCAL_OUTDIR)/cppast/_deps/type_safe-src/external/debug_assert

LOCAL_LIBS = $(LOCAL_OUTDIR)/cppast/src/libcppast.a $(LOCAL_OUTDIR)/cppast/external/tpl/libtiny-process-library.a
LDFLAGS += -L/usr/lib/llvm-14/lib -lclang

include $(STAPPLER_ROOT)/make/universal.mk

ifndef STAPPLER_TARGET

$(LOCAL_OUTDIR)/cppast/src/libcppast.a:
	mkdir -p $(LOCAL_OUTDIR)/cppast
	cd $(LOCAL_OUTDIR)/cppast; cmake -DCMAKE_BUILD_TYPE=Debug ../../cppast; cmake --build . --target cppast

prepare: $(LOCAL_OUTDIR)/cppast/src/libcppast.a

host-install: prepare
host-debug: prepare
host-release: prepare

endif
