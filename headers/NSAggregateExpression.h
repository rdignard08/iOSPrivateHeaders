
@interface NSAggregateExpression : NSExpression {

    id _collection;
}
 + (BOOL) supportsSecureCoding;

 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (id) constantValue;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (id) _expressionWithSubstitutionVariables:(id)a ;
 - (id) initWithCollection:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) expressionValueWithObject:(id)a context:(id)b ;
 - (id) collection;


@end
