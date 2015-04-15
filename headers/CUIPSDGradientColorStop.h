
@protocol NSCoding;
@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {

    {_psdGradientColor="red"d"green"d"blue"d"alpha"d} gradientColor;
}
 + (void) initialize;
 + (id) colorStopWithLocation:(double)agradientColor:({_psdGradientColor=dddd})b;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (BOOL) isColorStop;
 - (double) colorLocation;
 - ({_psdGradientColor=dddd}) gradientColor;
 - (id) initWithLocation:(double)a gradientColor:({_psdGradientColor=dddd})b ;


@end
