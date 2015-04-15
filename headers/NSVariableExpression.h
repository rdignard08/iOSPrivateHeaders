
@interface NSVariableExpression : NSExpression {

    @"NSString" _variable;
}
 + (BOOL) supportsSecureCoding;

 - (id) predicateFormat;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithObject:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) expressionValueWithObject:(id)acontext:(id)b;
 - (id) variable;


@end
