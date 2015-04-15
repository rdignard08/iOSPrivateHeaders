
@protocol NSMutableCopying, NSCopying;
@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {

    long long _style;
    BOOL _legacy;
    long long _legibilityStyle;
    UIColor* _foregroundColor;
    NSNumber* _overrideHeight;
}
@property (nonatomic, assign, readonly) NSNumber* style;
@property (nonatomic, assign, readonly, getter=isLegacy) NSNumber* legacy;
@property (nonatomic, assign, readonly) NSNumber* legibilityStyle;
@property (nonatomic, retain, readonly) UIColor* foregroundColor;
@property (nonatomic, retain, readonly) NSNumber* overrideHeight;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (BOOL) isTranslucent;
 - (BOOL) isDoubleHeight;
 - (long long) legibilityStyle;
 - (id) overrideHeight;
 - (BOOL) isLegacy;
 - (id) initWithStyle:(long long)a legacy:(BOOL)b legibilityStyle:(long long)c foregroundColor:(id)d overrideHeight:(id)e ;
 - (id) initWithStyle:(long long)a legacy:(BOOL)b legibilityStyle:(long long)c foregroundColor:(id)d ;
 - (id) _copyWithZone:(^{_NSZone=})a class:(Class)b ;
 - (id) init;
 - (long long) style;
 - (id) foregroundColor;


@end
