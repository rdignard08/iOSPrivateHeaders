
@interface NSFunctionExpression : NSExpression {

    NSExpression* _operand;
    SEL _selector;
    NSArray* _arguments;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)a ;
 - (id) _mapKVCOperatorsToFunctionsInContext:(id)a ;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (id) _expressionWithSubstitutionVariables:(id)a ;
 - (id) initWithTarget:(id)a selectorName:(id)b arguments:(id)c ;
 - (id) initWithSelector:(SEL)a argumentArray:(id)b ;
 - (BOOL) _shouldUseParensWithDescription;
 - (id) initWithExpressionType:(unsigned long long)a operand:(id)b selector:(SEL)c argumentArray:(id)d ;
 - (id) binaryOperatorForSelector;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (SEL) selector;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) function;
 - (id) arguments;
 - (id) expressionValueWithObject:(id)a context:(id)b ;
 - (id) operand;


@end
