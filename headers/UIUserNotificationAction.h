
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

    BOOL _authenticationRequired;
    BOOL _destructive;
    @"NSString" _activationModeString;
    @"NSString" _identifier;
    @"NSString" _title;
    Q _activationMode;
}
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, assign, readwrite) NSNumber* activationMode;
@property (nonatomic, assign, readwrite, isAuthenticationRequired) NSNumber* authenticationRequired;
@property (nonatomic, assign, readwrite, isDestructive) NSNumber* destructive;
@property (nonatomic, assign, readonly) NSString* activationModeString;
 + (BOOL) supportsSecureCoding;
 + (id) actionWithIdentifier:(id)atitle:(id)bactivationMode:(Q)cisAuthenticationRequired:(BOOL)d;

 - (id) title;
 - (void) setTitle:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) validatedAction;
 - (id) initWithIdentifier:(id)atitle:(id)bactivationMode:(Q)cisAuthenticationRequired:(BOOL)disDestructive:(BOOL)e;
 - (Q) activationMode;
 - (BOOL) isAuthenticationRequired;
 - (BOOL) isDestructive;
 - (id) activationModeString;
 - (void) setActivationMode:(Q)a;
 - (void) setAuthenticationRequired:(BOOL)a;
 - (void) setDestructive:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;


@end
