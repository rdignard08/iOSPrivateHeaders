
@interface LSBestAppSuggestion : NSObject {

    unsigned long long _type;
    NSUUID* _uniqueIdentifier;
    NSDictionary* _options;
    NSString* _bundleIdentifier;
    NSString* _activityType;
    NSDate* _lastUpdateTime;
    double _confidence;
    NSString* _originatingDeviceIdentifier;
    NSString* _originatingDeviceName;
    NSString* _originatingDeviceType;
}
@property (atomic, copy, readonly) NSString* userActivityTypeIdentifier;
@property (atomic, assign, readonly) NSNumber* type;
@property (atomic, copy, readwrite) NSUUID* uniqueIdentifier;
@property (atomic, copy, readonly) NSString* bundleIdentifier;
@property (atomic, copy, readwrite) NSString* activityType;
@property (atomic, copy, readonly) NSDate* lastUpdateTime;
@property (atomic, copy, readonly) NSDate* when;
@property (atomic, copy, readonly) NSDictionary* options;
@property (atomic, assign, readonly) NSNumber* confidence;
@property (atomic, copy, readonly) NSString* originatingDeviceIdentifier;
@property (atomic, copy, readonly) NSString* originatingDeviceName;
@property (atomic, copy, readonly) NSString* originatingDeviceType;
 + (BOOL) supportsSecureCoding;

 - (id) lastUpdateTime;
 - (id) initWithBundleIdentifier:(id)auuid:(id)bactivityType:(id)clastUpdateTime:(id)dtype:(unsigned long long)edeviceName:(id)fdeviceIdentifier:(id)gdeviceType:(id)hoptions:(id)i;
 - (id) when;
 - (void) setActivityType:(id)a;
 - (id) originatingDeviceIdentifier;
 - (id) originatingDeviceName;
 - (id) originatingDeviceType;
 - (id) userActivityTypeIdentifier;
 - (id) activityType;
 - (double) confidence;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) debugDescription;
 - (unsigned long long) type;
 - (void) setUniqueIdentifier:(id)a;
 - (id) uniqueIdentifier;
 - (id) options;
 - (id) bundleIdentifier;


@end
