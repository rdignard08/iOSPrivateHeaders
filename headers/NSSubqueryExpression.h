
@interface NSSubqueryExpression : NSExpression {

    NSExpression* _collection;
    NSExpression* _variableExpression;
    NSPredicate* _subpredicate;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)a ;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (id) _expressionWithSubstitutionVariables:(id)a ;
 - (id) initWithExpression:(id)a usingIteratorVariable:(id)b predicate:(id)c ;
 - (BOOL) _shouldUseParensWithDescription;
 - (id) initWithExpression:(id)a usingIteratorExpression:(id)b predicate:(id)c ;
 - (id) variableExpression;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) expressionValueWithObject:(id)a context:(id)b ;
 - (id) collection;
 - (id) variable;
 - (id) predicate;


@end
