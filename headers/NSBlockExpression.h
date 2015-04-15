
@interface NSBlockExpression : NSExpression {

    @? _block;
    NSArray* _arguments;
}

 - (id) predicateFormat;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (id) _expressionWithSubstitutionVariables:(id)a ;
 - (id) initWithType:(unsigned long long)a block:(@?)b arguments:(id)c ;
 - (@?) expressionBlock;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) arguments;
 - (id) expressionValueWithObject:(id)a context:(id)b ;


@end
