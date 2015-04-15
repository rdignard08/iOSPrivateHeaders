
@interface NSFunctionExpression : NSExpression {

    @"NSExpression" _operand;
    SEL _selector;
    @"NSArray" _arguments;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)a;
 - (id) _mapKVCOperatorsToFunctionsInContext:(id)a;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithTarget:(id)aselectorName:(id)barguments:(id)c;
 - (id) initWithSelector:(SEL)aargumentArray:(id)b;
 - (BOOL) _shouldUseParensWithDescription;
 - (id) initWithExpressionType:(Q)aoperand:(id)bselector:(SEL)cargumentArray:(id)d;
 - (id) binaryOperatorForSelector;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (SEL) selector;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) function;
 - (id) arguments;
 - (id) expressionValueWithObject:(id)acontext:(id)b;
 - (id) operand;


@end
