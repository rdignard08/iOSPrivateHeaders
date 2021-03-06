
@protocol NSSecureCoding;
@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding> {

    BOOL _exclusive;
    BOOL _isExclusive;
    int _statusBarStyleOverrides;
    int _pid;
    NSString* _uniqueIdentifier;
}
@property (nonatomic, assign, readwrite) NSNumber* statusBarStyleOverrides;
@property (nonatomic, assign, readwrite) NSNumber* pid;
@property (nonatomic, assign, readonly) NSNumber* isExclusive;
@property (nonatomic, copy, readwrite) NSString* uniqueIdentifier;
@property (nonatomic, assign, readwrite, getter=isExclusive) NSNumber* exclusive;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) setUniqueIdentifier:(id)a ;
 - (id) uniqueIdentifier;
 - (int) pid;
 - (void) setPid:(int)a ;
 - (id) initWithStatusBarStyleOverrides:(int)a forPID:(int)b exclusive:(BOOL)c ;
 - (int) statusBarStyleOverrides;
 - (BOOL) isExclusive;
 - (BOOL) isExclusive;
 - (id) initWithStatusBarStyleOverrides:(int)a forPID:(int)b exclusive:(BOOL)c uniqueIdentifier:(id)d ;
 - (void) setStatusBarStyleOverrides:(int)a ;
 - (void) setExclusive:(BOOL)a ;


@end
