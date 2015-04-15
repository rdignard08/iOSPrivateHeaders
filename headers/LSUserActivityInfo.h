
@protocol NSCopying, NSSecureCoding;
@interface LSUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {

    @"NSUUID" _uuid;
    unsigned long long _type;
    @"NSDictionary" _options;
    unsigned long long _changeCount;
    @"NSDate" _activityDate;
    @"NSString" _title;
    @"NSString" _typeIdentifier;
    @"NSURL" _webpageURL;
    @"NSData" _streamsData;
    @"NSData" _activityPayload;
    @"NSError" _error;
}
@property (atomic, copy, readwrite) NSUUID* uuid;
@property (atomic, assign, readwrite) NSNumber* type;
@property (atomic, copy, readwrite) NSDictionary* options;
@property (atomic, assign, readwrite) NSNumber* changeCount;
@property (atomic, copy, readwrite) NSDate* activityDate;
@property (atomic, copy, readwrite) NSString* title;
@property (atomic, copy, readwrite) NSString* typeIdentifier;
@property (atomic, copy, readwrite) NSURL* webpageURL;
@property (atomic, copy, readwrite) NSData* streamsData;
@property (atomic, copy, readwrite) NSData* activityPayload;
@property (atomic, copy, readwrite) NSError* error;
 + (BOOL) supportsSecureCoding;

 - (unsigned long long) changeCount;
 - (id) logString;
 - (id) statusString;
 - (void) setActivityDate:(id)a;
 - (void) setTypeIdentifier:(id)a;
 - (id) streamsData;
 - (void) setStreamsData:(id)a;
 - (id) activityPayload;
 - (void) setActivityPayload:(id)a;
 - (id) activityDate;
 - (void) setUuid:(id)a;
 - (id) typeIdentifier;
 - (id) title;
 - (void) setTitle:(id)a;
 - (id) webpageURL;
 - (void) setWebpageURL:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) setType:(unsigned long long)a;
 - (void) setChangeCount:(unsigned long long)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) error;
 - (void) setError:(id)a;
 - (unsigned long long) type;
 - (void) setOptions:(id)a;
 - (id) options;
 - (id) uuid;


@end
