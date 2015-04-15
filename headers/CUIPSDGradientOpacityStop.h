
@protocol NSCoding;
@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {

    double opacity;
}
 + (void) initialize;
 + (id) opacityStopWithLocation:(double)aopacity:(double)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) isOpacityStop;
 - (double) opacityLocation;
 - (id) initWithLocation:(double)aopacity:(double)b;
 - (double) opacity;


@end
