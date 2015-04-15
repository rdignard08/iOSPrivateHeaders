
@interface NSAggregateExpression : NSExpression {

    id _collection;
}
 + (BOOL) supportsSecureCoding;

 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (id) constantValue;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithCollection:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) expressionValueWithObject:(id)acontext:(id)b;
 - (id) collection;


@end
