LOCAL_PATH := $(call my-dir)

# =======================================================
include $(CLEAR_VARS)

LOCAL_MODULE := native-lib

LOCAL_SRC_FILES += \
	    ../../../MyApplication/app/src/main/cpp/native-lib.cpp

LOCAL_LDLIBS += -lm -llog -ldl -lz -ljnigraphics
LOCAL_CPPFLAGS += -fexceptions -frtti -std=c++11

# import dlib
LOCAL_STATIC_LIBRARIES += dlib

### import miniglog
ifeq ($(MINIGLOG_LIB_TYPE),SHARED)
    LOCAL_SHARED_LIBRARIES += miniglog
else
    LOCAL_STATIC_LIBRARIES += miniglog
endif

include $(BUILD_STATIC_LIBRARY)
#-----------------------------------------------------------------------------
