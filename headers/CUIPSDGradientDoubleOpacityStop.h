
@protocol NSCoding;
@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {

    double leadOutOpacity;
}
 + (void) initialize;
 + (id) doubleOpacityStopWithLocation:(double)aleadInOpacity:(double)bleadOutOpacity:(double)c;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (double) leadOutOpacity;
 - (BOOL) isDoubleStop;
 - (id) initWithLocation:(double)a leadInOpacity:(double)b leadOutOpacity:(double)c ;
 - (double) leadInOpacity;


@end
