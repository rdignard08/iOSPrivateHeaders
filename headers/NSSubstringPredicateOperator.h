
@interface NSSubstringPredicateOperator : NSStringPredicateOperator {

    unsigned long long _position;
}
 + (BOOL) supportsSecureCoding;

 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) symbol;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)bvariant:(unsigned long long)cposition:(unsigned long long)d;
 - (unsigned long long) position;
 - (SEL) selector;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
