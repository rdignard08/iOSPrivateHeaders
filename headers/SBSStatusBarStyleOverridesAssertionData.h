
@protocol NSSecureCoding;
@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding> {

    BOOL _exclusive;
    BOOL _isExclusive;
    i _statusBarStyleOverrides;
    i _pid;
    @"NSString" _uniqueIdentifier;
}
@property (nonatomic, assign, readwrite) NSNumber* statusBarStyleOverrides;
@property (nonatomic, assign, readwrite) NSNumber* pid;
@property (nonatomic, assign, readonly) NSNumber* isExclusive;
@property (nonatomic, copy, readwrite) NSString* uniqueIdentifier;
@property (nonatomic, assign, readwrite, isExclusive) NSNumber* exclusive;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setUniqueIdentifier:(id)a;
 - (id) uniqueIdentifier;
 - (i) pid;
 - (void) setPid:(i)a;
 - (id) initWithStatusBarStyleOverrides:(i)aforPID:(i)bexclusive:(BOOL)c;
 - (i) statusBarStyleOverrides;
 - (BOOL) isExclusive;
 - (BOOL) isExclusive;
 - (id) initWithStatusBarStyleOverrides:(i)aforPID:(i)bexclusive:(BOOL)cuniqueIdentifier:(id)d;
 - (void) setStatusBarStyleOverrides:(i)a;
 - (void) setExclusive:(BOOL)a;


@end
