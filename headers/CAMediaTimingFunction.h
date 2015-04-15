
@protocol NSCoding;
@interface CAMediaTimingFunction : NSObject <NSCoding> {

    ^{CAMediaTimingFunctionPrivate=[2f][2f]} _priv;
}
 + (id) _kbTimingFunction;
 + (id) uiFunctionWithControlPoints:(r^{CGPoint=dd})a;
 + (id) functionWithControlPoints:(float)a;
 + (id) functionWithName:(id)a;
 + (void) CAMLParserEndElement:(id)acontent:(id)b;

 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) getControlPointAtIndex:(unsigned long long)a values:([2f])b ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (void) _getPoints:(^d)a ;
 - (float) _solveForInput:(float)a ;
 - (id) initWithControlPoints:(float)a ;
 - (id) CAMLType;


@end
