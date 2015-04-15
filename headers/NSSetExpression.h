
@interface NSSetExpression : NSExpression {

    @"NSExpression" _left;
    @"NSExpression" _right;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)a;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithType:(Q)aleftExpression:(id)brightExpression:(id)c;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) leftExpression;
 - (id) rightExpression;
 - (id) expressionValueWithObject:(id)acontext:(id)b;


@end