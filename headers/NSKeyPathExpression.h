
@interface NSKeyPathExpression : NSFunctionExpression {

}

 - (id) keyPath;
 - (id) predicateFormat;
 - (id) initWithKeyPath:(id)a ;
 - (id) pathExpression;
 - (id) initWithOperand:(id)a andKeyPath:(id)b ;
 - (void) dealloc;


@end
