
@protocol NSCopying;
@interface UIKBGradient : NSObject <NSCopying> {

    @"NSString" _gradientName;
    @"NSString" _flatColorName;
    @"NSString" _startColorName;
    @"NSString" _endColorName;
    @"NSArray" _colors;
    d _middleLocation;
    d _opacity;
    BOOL _horizontal;
    BOOL _usesRGBColors;
    BOOL _didQueryRGBColors;
}
@property (nonatomic, assign, readwrite) NSNumber* opacity;
@property (nonatomic, assign, readwrite) NSNumber* horizontal;
@property (nonatomic, assign, readonly) NSNumber* usesRGBColors;
 + (id) gradientWithFlatColor:(id)a;
 + (id) gradientWith3Colors:(id)amiddleLocation:(d)b;
 + (id) gradientWithStartColor:(id)aendColor:(id)b;
 + (id) gradientWithName:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) initWithName:(id)a;
 - (void) setHorizontal:(BOOL)a;
 - (BOOL) horizontal;
 - (^{CGGradient=}) CGGradient;
 - (id) initWithFlatColor:(id)a;
 - (id) initWithStartColor:(id)aendColor:(id)b;
 - (id) initWith3Colors:(id)amiddleLocation:(d)b;
 - (BOOL) usesRGBColors;
 - (d) opacity;
 - (void) setOpacity:(d)a;


@end
