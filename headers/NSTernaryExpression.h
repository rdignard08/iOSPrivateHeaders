
@interface NSTernaryExpression : NSExpression {

    @"NSPredicate" _predicate;
    @"NSExpression" _trueExpression;
    @"NSExpression" _falseExpression;
}
 + (BOOL) supportsSecureCoding;

 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(unsigned long long)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithPredicate:(id)atrueExpression:(id)bfalseExpression:(id)c;
 - (id) trueExpression;
 - (id) falseExpression;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) expressionValueWithObject:(id)acontext:(id)b;
 - (id) predicate;


@end
