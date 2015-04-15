
@interface NSSubqueryExpression : NSExpression {

    @"NSExpression" _collection;
    @"NSExpression" _variableExpression;
    @"NSPredicate" _subpredicate;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)a;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithExpression:(id)ausingIteratorVariable:(id)bpredicate:(id)c;
 - (BOOL) _shouldUseParensWithDescription;
 - (id) initWithExpression:(id)ausingIteratorExpression:(id)bpredicate:(id)c;
 - (id) variableExpression;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) expressionValueWithObject:(id)acontext:(id)b;
 - (id) collection;
 - (id) variable;
 - (id) predicate;


@end
