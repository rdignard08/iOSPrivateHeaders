
@protocol NSCopying, NSCoding;
@interface NSShadow : NSObject <NSCopying, NSCoding> {

    unsigned long long _shadowFlags;
    {CGSize="width"d"height"d} _shadowOffset;
    double _shadowBlurRadius;
    NSColor* _shadowColor;
}
@property (nonatomic, assign, readwrite) NSNumber* shadowOffset;
@property (nonatomic, assign, readwrite) NSNumber* shadowBlurRadius;
@property (nonatomic, retain, readwrite) NSNumber* shadowColor;
 + (void) initialize;
 + (id) defaultShadowColor;
 + (id) shadow;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setShadowOffset:({CGSize=dd})a;
 - (double) shadowBlurRadius;
 - (void) setShadowBlurRadius:(double)a;
 - (void) setShadowColor:(id)a;
 - (id) initWithShadow:(id)a;
 - ({CGSize=dd}) shadowOffset;
 - (id) shadowColor;


@end
