export THEOS=/Users/thenamk3/theos

ARCHS = arm64
#Add arm64e if it needed
DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = NemG_API
NemG_API_LDFLAGS += API/libnemg.a

NemG_API_LDFLAGS +=
NemG_API_FRAMEWORKS =  UIKit Foundation Security QuartzCore CoreTelephony AVFoundation AudioToolbox CoreGraphics CoreText Accelerate GLKit SystemConfiguration GameController


NemG_API_CCFLAGS = -std=c++11 -fno-rtti -fno-exceptions -DNDEBUG
NemG_API_CFLAGS = -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value
NemG_API_EXTRA_FRAMEWORKS +=
NemG_API_CCFLAGS = -std=c++11 -fno-rtti -fno-exceptions -DNDEBUG
NemG_API_CFLAGS = -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value
NemG_API_FILES = IGGMain.mm $(wildcard API/SupportFile/*.m)


include $(THEOS_MAKE_PATH)/tweak.mk




