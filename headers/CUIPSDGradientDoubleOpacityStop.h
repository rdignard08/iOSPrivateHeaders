
@protocol NSCoding;
@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {

    d leadOutOpacity;
}
 + (void) initialize;
 + (id) doubleOpacityStopWithLocation:(d)aleadInOpacity:(d)bleadOutOpacity:(d)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (d) leadOutOpacity;
 - (BOOL) isDoubleStop;
 - (id) initWithLocation:(d)aleadInOpacity:(d)bleadOutOpacity:(d)c;
 - (d) leadInOpacity;


@end
