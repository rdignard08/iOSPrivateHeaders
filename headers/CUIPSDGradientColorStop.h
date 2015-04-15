
@protocol NSCoding;
@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {

    {_psdGradientColor="red"d"green"d"blue"d"alpha"d} gradientColor;
}
 + (void) initialize;
 + (id) colorStopWithLocation:(d)agradientColor:({_psdGradientColor=dddd})b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) isColorStop;
 - (d) colorLocation;
 - ({_psdGradientColor=dddd}) gradientColor;
 - (id) initWithLocation:(d)agradientColor:({_psdGradientColor=dddd})b;


@end
