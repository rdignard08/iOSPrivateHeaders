
@protocol NSSecureCoding;
@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {

    int _pid;
    unsigned int _contextID;
    @"NSString" _clientID;
    @"NSString" _displayUUID;
}
@property (nonatomic, assign, readonly) NSString* clientID;
@property (nonatomic, assign, readonly) NSNumber* pid;
@property (nonatomic, assign, readonly) NSString* displayUUID;
@property (nonatomic, assign, readonly) NSNumber* contextID;
 + (BOOL) supportsSecureCoding;
 + (id) propertiesWithMainDisplayAndClientID:(id)apid:(int)bcontextID:(unsigned int)c;
 + (id) propertiesWithClientID:(id)apid:(int)bdisplayUUID:(id)ccontextID:(unsigned int)d;
 + (id) propertiesWithMainDisplayAndClientID:(id)acontextID:(unsigned int)b;
 + (id) propertiesWithClientID:(id)adisplayUUID:(id)bcontextID:(unsigned int)c;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithClientID:(id)apid:(int)bdisplayUUID:(id)ccontextID:(unsigned int)d;
 - (id) clientID;
 - (int) pid;
 - (id) displayUUID;
 - (unsigned int) contextID;
 - (BOOL) isEqualNotIncludingClientIDAndPid:(id)a;
 - (void) setPid:(int)a;
 - (id) propertiesOneLevelMoreGeneric;


@end
