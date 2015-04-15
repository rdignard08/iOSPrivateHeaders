
@interface NSBlockExpression : NSExpression {

    @? _block;
    @"NSArray" _arguments;
}

 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (id) _expressionWithSubstitutionVariables:(id)a;
 - (id) initWithType:(Q)ablock:(@?)barguments:(id)c;
 - (@?) expressionBlock;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) arguments;
 - (id) expressionValueWithObject:(id)acontext:(id)b;


@end
