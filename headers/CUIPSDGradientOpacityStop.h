
@protocol NSCoding;
@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {

    d opacity;
}
 + (void) initialize;
 + (id) opacityStopWithLocation:(d)aopacity:(d)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) isOpacityStop;
 - (d) opacityLocation;
 - (id) initWithLocation:(d)aopacity:(d)b;
 - (d) opacity;


@end
