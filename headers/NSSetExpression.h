
@interface NSSetExpression : NSExpression {

    NSExpression* _left;
    NSExpression* _right;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)a ;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (id) _expressionWithSubstitutionVariables:(id)a ;
 - (id) initWithType:(unsigned long long)a leftExpression:(id)b rightExpression:(id)c ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) leftExpression;
 - (id) rightExpression;
 - (id) expressionValueWithObject:(id)a context:(id)b ;


@end
