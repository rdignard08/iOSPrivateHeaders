
@protocol NSCoding;
@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {

    {_psdGradientColor="red"d"green"d"blue"d"alpha"d} leadOutColor;
}
 + (void) initialize;
 + (id) doubleColorStopWithLocation:(d)aleadInColor:({_psdGradientColor=dddd})bleadOutColor:({_psdGradientColor=dddd})c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_psdGradientColor=dddd}) leadOutColor;
 - (BOOL) isDoubleStop;
 - (id) initWithLocation:(d)aleadInColor:({_psdGradientColor=dddd})bleadOutColor:({_psdGradientColor=dddd})c;
 - ({_psdGradientColor=dddd}) leadInColor;


@end
