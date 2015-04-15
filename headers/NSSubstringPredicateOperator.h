
@interface NSSubstringPredicateOperator : NSStringPredicateOperator {

    Q _position;
}
 + (BOOL) supportsSecureCoding;

 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) symbol;
 - (id) initWithOperatorType:(Q)amodifier:(Q)bvariant:(Q)cposition:(Q)d;
 - (Q) position;
 - (SEL) selector;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
