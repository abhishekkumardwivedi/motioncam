NDK_TOOLCHAIN_VERSION := clang
#APP_ABI := armeabi-v7a arm64-v8a x86 x86_64
APP_ABI := armeabi-v7a arm64-v8a x86_64
APP_CPPFLAGS := -std=c++11 -frtti -fexceptions -DDLIB_JPEG_SUPPORT
APP_PLATFORM := android-14
APP_STL := gnustl_static
#APP_CFLAGS+=-DDLIB_NO_GUI_SUPPORT=on
#APP_CFLAGS+=-DDLIB_PNG_SUPPORT=off
APP_CFLAGS+=-DDLIB_JPEG_SUPPORT=on
APP_CPPFLAGS+=-DDLIB_JPEG_SUPPORT=on
APP_CFLAGS+=-DDLIB_JPEG_STATIC=on
