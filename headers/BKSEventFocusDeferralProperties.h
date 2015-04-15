
@protocol NSSecureCoding;
@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {

    i _pid;
    I _contextID;
    @"NSString" _clientID;
    @"NSString" _displayUUID;
}
@property (nonatomic, assign, readonly) NSString* clientID;
@property (nonatomic, assign, readonly) NSNumber* pid;
@property (nonatomic, assign, readonly) NSString* displayUUID;
@property (nonatomic, assign, readonly) NSNumber* contextID;
 + (BOOL) supportsSecureCoding;
 + (id) propertiesWithMainDisplayAndClientID:(id)apid:(i)bcontextID:(I)c;
 + (id) propertiesWithClientID:(id)apid:(i)bdisplayUUID:(id)ccontextID:(I)d;
 + (id) propertiesWithMainDisplayAndClientID:(id)acontextID:(I)b;
 + (id) propertiesWithClientID:(id)adisplayUUID:(id)bcontextID:(I)c;

 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithClientID:(id)apid:(i)bdisplayUUID:(id)ccontextID:(I)d;
 - (id) clientID;
 - (i) pid;
 - (id) displayUUID;
 - (I) contextID;
 - (BOOL) isEqualNotIncludingClientIDAndPid:(id)a;
 - (void) setPid:(i)a;
 - (id) propertiesOneLevelMoreGeneric;


@end
