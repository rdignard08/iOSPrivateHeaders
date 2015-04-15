
@interface UIDevice : NSObject {

    q _numDeviceOrientationObservers;
    f _batteryLevel;
    {?="batteryMonitoringEnabled"b1"proximityMonitoringEnabled"b1"expectsFaceContactInLandscape"b1"orientation"b3"batteryState"b2"proximityState"b1} _deviceFlags;
}
@property (nonatomic, assign, readwrite) NSNumber* orientation;
@property (nonatomic, retain, readonly) NSString* buildVersion;
@property (nonatomic, retain, readonly) NSString* name;
@property (nonatomic, retain, readonly) NSString* model;
@property (nonatomic, retain, readonly) NSString* localizedModel;
@property (nonatomic, retain, readonly) NSString* systemName;
@property (nonatomic, retain, readonly) NSString* systemVersion;
@property (nonatomic, assign, readonly) NSNumber* orientation;
@property (nonatomic, retain, readonly) NSUUID* identifierForVendor;
@property (nonatomic, assign, readonly, isGeneratingDeviceOrientationNotifications) NSNumber* generatesDeviceOrientationNotifications;
@property (nonatomic, assign, readwrite, isBatteryMonitoringEnabled) NSNumber* batteryMonitoringEnabled;
@property (nonatomic, assign, readonly) NSNumber* batteryState;
@property (nonatomic, assign, readonly) NSNumber* batteryLevel;
@property (nonatomic, assign, readwrite, isProximityMonitoringEnabled) NSNumber* proximityMonitoringEnabled;
@property (nonatomic, assign, readonly) NSNumber* proximityState;
@property (nonatomic, assign, readonly, isMultitaskingSupported) NSNumber* multitaskingSupported;
@property (nonatomic, assign, readonly) NSNumber* userInterfaceIdiom;
@property (nonatomic, assign, readwrite, _setBacklightLevel:) NSNumber* _backlightLevel;
 + (q) currentDeviceOrientationAllowingAmbiguous:(BOOL)a;
 + (BOOL) _isWatchCompanion;
 + (BOOL) _isWatch;
 + (id) modelSpecificLocalizedStringKeyForKey:(id)a;
 + (id) currentDevice;

 - (id) name;
 - (q) userInterfaceIdiom;
 - (void) _unregisterForSystemSounds:(id)a;
 - (void) _registerForSystemSounds:(id)a;
 - (BOOL) isGeneratingDeviceOrientationNotifications;
 - (void) setOrientation:(q)aanimated:(BOOL)b;
 - (void) _setActiveUserInterfaceIdiom:(q)a;
 - (void) _setBacklightLevel:(f)a;
 - (f) _backlightLevel;
 - (void) _setProximityState:(BOOL)a;
 - (id) systemVersion;
 - (void) setProximityMonitoringEnabled:(BOOL)a;
 - (BOOL) isProximityMonitoringEnabled;
 - (q) _graphicsQuality;
 - (void) beginGeneratingDeviceOrientationNotifications;
 - (void) endGeneratingDeviceOrientationNotifications;
 - (id) model;
 - (void) _playSystemSound:(I)a;
 - (void) _enableDeviceOrientationEvents:(BOOL)a;
 - (id) _deviceInfoForKey:(^{__CFString=})a;
 - (void) _updateSystemSoundActiveStatus:(id)a;
 - (id) systemName;
 - (id) buildVersion;
 - (id) identifierForVendor;
 - (BOOL) isBatteryMonitoringEnabled;
 - (void) setBatteryMonitoringEnabled:(BOOL)a;
 - (q) batteryState;
 - (f) batteryLevel;
 - (void) _setExpectsFaceContactInLandscape:(BOOL)a;
 - (BOOL) proximityState;
 - (BOOL) isMultitaskingSupported;
 - (void) playInputClick;
 - (f) _softwareDimmingAlpha;
 - (void) _setBatteryState:(q)a;
 - (void) _setBatteryLevel:(f)a;
 - (BOOL) _isTTYEnabled;
 - (void) _setGraphicsQualityOverride:(q)a;
 - (BOOL) _hasGraphicsQualityOverride;
 - (void) _clearGraphicsQualityOverride;
 - (q) _keyboardGraphicsQuality;
 - (q) _predictionGraphicsQuality;
 - (q) orientation;
 - (void) setOrientation:(q)a;
 - (id) localizedModel;


@end
