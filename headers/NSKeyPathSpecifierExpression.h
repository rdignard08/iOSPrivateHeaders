
@interface NSKeyPathSpecifierExpression : NSExpression {

    NSString* _value;
}
 + (BOOL) supportsSecureCoding;

 - (id) keyPath;
 - (id) predicateFormat;
 - (id) constantValue;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithObject:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) expressionValueWithObject:(id)a context:(id)b ;


@end
