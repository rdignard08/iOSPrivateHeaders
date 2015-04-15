
@protocol NSMutableCopying, NSCopying;
@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {

    q _style;
    BOOL _legacy;
    q _legibilityStyle;
    @"UIColor" _foregroundColor;
    @"NSNumber" _overrideHeight;
}
@property (nonatomic, assign, readonly) NSNumber* style;
@property (nonatomic, assign, readonly, isLegacy) NSNumber* legacy;
@property (nonatomic, assign, readonly) NSNumber* legibilityStyle;
@property (nonatomic, retain, readonly) UIColor* foregroundColor;
@property (nonatomic, retain, readonly) NSNumber* overrideHeight;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) isTranslucent;
 - (BOOL) isDoubleHeight;
 - (q) legibilityStyle;
 - (id) overrideHeight;
 - (BOOL) isLegacy;
 - (id) initWithStyle:(q)alegacy:(BOOL)blegibilityStyle:(q)cforegroundColor:(id)doverrideHeight:(id)e;
 - (id) initWithStyle:(q)alegacy:(BOOL)blegibilityStyle:(q)cforegroundColor:(id)d;
 - (id) _copyWithZone:(^{_NSZone=})aclass:(Class)b;
 - (id) init;
 - (q) style;
 - (id) foregroundColor;


@end
