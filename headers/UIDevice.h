
@interface UIDevice : NSObject {

    long long _numDeviceOrientationObservers;
    float _batteryLevel;
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
@property (nonatomic, assign, readonly, getter=isGeneratingDeviceOrientationNotifications) NSNumber* generatesDeviceOrientationNotifications;
@property (nonatomic, assign, readwrite, getter=isBatteryMonitoringEnabled) NSNumber* batteryMonitoringEnabled;
@property (nonatomic, assign, readonly) NSNumber* batteryState;
@property (nonatomic, assign, readonly) NSNumber* batteryLevel;
@property (nonatomic, assign, readwrite, getter=isProximityMonitoringEnabled) NSNumber* proximityMonitoringEnabled;
@property (nonatomic, assign, readonly) NSNumber* proximityState;
@property (nonatomic, assign, readonly, getter=isMultitaskingSupported) NSNumber* multitaskingSupported;
@property (nonatomic, assign, readonly) NSNumber* userInterfaceIdiom;
@property (nonatomic, assign, readwrite, setter=_setBacklightLevel:) NSNumber* _backlightLevel;
 + (long long) currentDeviceOrientationAllowingAmbiguous:(BOOL)a;
 + (BOOL) _isWatchCompanion;
 + (BOOL) _isWatch;
 + (id) modelSpecificLocalizedStringKeyForKey:(id)a;
 + (id) currentDevice;

 - (id) name;
 - (long long) userInterfaceIdiom;
 - (void) _unregisterForSystemSounds:(id)a;
 - (void) _registerForSystemSounds:(id)a;
 - (BOOL) isGeneratingDeviceOrientationNotifications;
 - (void) setOrientation:(long long)aanimated:(BOOL)b;
 - (void) _setActiveUserInterfaceIdiom:(long long)a;
 - (void) _setBacklightLevel:(float)a;
 - (float) _backlightLevel;
 - (void) _setProximityState:(BOOL)a;
 - (id) systemVersion;
 - (void) setProximityMonitoringEnabled:(BOOL)a;
 - (BOOL) isProximityMonitoringEnabled;
 - (long long) _graphicsQuality;
 - (void) beginGeneratingDeviceOrientationNotifications;
 - (void) endGeneratingDeviceOrientationNotifications;
 - (id) model;
 - (void) _playSystemSound:(unsigned int)a;
 - (void) _enableDeviceOrientationEvents:(BOOL)a;
 - (id) _deviceInfoForKey:(^{__CFString=})a;
 - (void) _updateSystemSoundActiveStatus:(id)a;
 - (id) systemName;
 - (id) buildVersion;
 - (id) identifierForVendor;
 - (BOOL) isBatteryMonitoringEnabled;
 - (void) setBatteryMonitoringEnabled:(BOOL)a;
 - (long long) batteryState;
 - (float) batteryLevel;
 - (void) _setExpectsFaceContactInLandscape:(BOOL)a;
 - (BOOL) proximityState;
 - (BOOL) isMultitaskingSupported;
 - (void) playInputClick;
 - (float) _softwareDimmingAlpha;
 - (void) _setBatteryState:(long long)a;
 - (void) _setBatteryLevel:(float)a;
 - (BOOL) _isTTYEnabled;
 - (void) _setGraphicsQualityOverride:(long long)a;
 - (BOOL) _hasGraphicsQualityOverride;
 - (void) _clearGraphicsQualityOverride;
 - (long long) _keyboardGraphicsQuality;
 - (long long) _predictionGraphicsQuality;
 - (long long) orientation;
 - (void) setOrientation:(long long)a;
 - (id) localizedModel;


@end
