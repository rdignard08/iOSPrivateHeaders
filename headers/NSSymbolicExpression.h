
@interface NSSymbolicExpression : NSExpression {

    @"NSString" _token;
}
 + (BOOL) supportsSecureCoding;

 - (id) predicateFormat;
 - (id) constantValue;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithString:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) expressionValueWithObject:(id)acontext:(id)b;


@end
