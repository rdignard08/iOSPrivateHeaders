
@protocol NSSecureCoding, NSCopying;
@interface NSExpression : NSObject <NSSecureCoding, NSCopying> {

    {_expressionFlags="_evaluationBlocked"b1"_reservedExpressionFlags"b31} _expressionFlags;
    I reserved;
    Q _expressionType;
}
@property (atomic, assign, readonly) NSNumber* expressionType;
@property (atomic, retain, readonly) NSNumber* constantValue;
@property (atomic, copy, readonly) NSString* keyPath;
@property (atomic, copy, readonly) NSString* function;
@property (atomic, copy, readonly) NSString* variable;
@property (atomic, copy, readonly) NSExpression* operand;
@property (atomic, copy, readonly) NSArray* arguments;
@property (atomic, retain, readonly) NSNumber* collection;
@property (atomic, copy, readonly) NSPredicate* predicate;
@property (atomic, copy, readonly) NSExpression* leftExpression;
@property (atomic, copy, readonly) NSExpression* rightExpression;
@property (atomic, copy, readonly) NSNumber* expressionBlock;
 + (BOOL) supportsSecureCoding;
 + (id) _newKeyPathExpressionForString:(id)a;
 + (id) expressionWithFormat:(id)aarguments:([1{__va_list_tag=II^v^v}])b;
 + (id) expressionWithFormat:(id)aargumentArray:(id)b;
 + (id) expressionWithFormat:(id)a;
 + (id) expressionForConstantValue:(id)a;
 + (id) expressionForEvaluatedObject;
 + (id) expressionForVariable:(id)a;
 + (id) expressionForSymbolicString:(id)a;
 + (id) expressionForAggregate:(id)a;
 + (id) expressionForSubquery:(id)ausingIteratorVariable:(id)bpredicate:(id)c;
 + (id) expressionForFunction:(id)aselectorName:(id)barguments:(id)c;
 + (id) expressionForVariableNameAssignment:(id)aexpression:(id)b;
 + (id) expressionForTernaryWithPredicate:(id)atrueExpression:(id)bfalseExpression:(id)c;
 + (id) expressionForKeyPath:(id)a;
 + (id) expressionForFunction:(id)aarguments:(id)b;
 + (id) expressionForUnionSet:(id)awith:(id)b;
 + (id) expressionForIntersectSet:(id)awith:(id)b;
 + (id) expressionForMinusSet:(id)awith:(id)b;
 + (id) expressionForBlock:(@?)aarguments:(id)b;
 + (id) expressionForAnyKey;

 - (id) minimalFormInContext:(id)a;
 - (id) keyPath;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (id) constantValue;
 - (BOOL) _allowsEvaluation;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithExpressionType:(Q)a;
 - (@?) expressionBlock;
 - (id) subexpression;
 - (id) trueExpression;
 - (id) falseExpression;
 - (BOOL) _shouldUseParensWithDescription;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (SEL) selector;
 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) leftExpression;
 - (id) rightExpression;
 - (Q) expressionType;
 - (id) function;
 - (id) arguments;
 - (id) expressionValueWithObject:(id)acontext:(id)b;
 - (id) operand;
 - (id) collection;
 - (id) variable;
 - (id) predicate;


@end
