
@interface NSCustomPredicateOperator : NSPredicateOperator {

    SEL _selector;
}
 + (BOOL) supportsSecureCoding;

 - (BOOL) performPrimitiveOperationUsingObject:(id)a andObject:(id)b ;
 - (id) initWithCustomSelector:(SEL)a modifier:(unsigned long long)b ;
 - (id) symbol;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (SEL) selector;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
