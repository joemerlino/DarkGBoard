include $(THEOS)/makefiles/common.mk

TWEAK_NAME = DarkGboard
DarkGboard_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"

SUBPROJECTS += dgbprefs
include $(THEOS_MAKE_PATH)/aggregate.mk
