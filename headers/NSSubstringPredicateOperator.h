
@interface NSSubstringPredicateOperator : NSStringPredicateOperator {

    unsigned long long _position;
}
 + (BOOL) supportsSecureCoding;

 - (BOOL) performPrimitiveOperationUsingObject:(id)a andObject:(id)b ;
 - (id) symbol;
 - (id) initWithOperatorType:(unsigned long long)a modifier:(unsigned long long)b variant:(unsigned long long)c position:(unsigned long long)d ;
 - (unsigned long long) position;
 - (SEL) selector;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
