include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = dgbprefs
dgbprefs_FILES = DGBRootListController.m
dgbprefs_INSTALL_PATH = /Library/PreferenceBundles
dgbprefs_FRAMEWORKS = UIKit
dgbprefs_PRIVATE_FRAMEWORKS = Preferences

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/dgbprefs.plist$(ECHO_END)
