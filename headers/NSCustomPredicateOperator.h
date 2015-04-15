
@interface NSCustomPredicateOperator : NSPredicateOperator {

    SEL _selector;
}
 + (BOOL) supportsSecureCoding;

 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) initWithCustomSelector:(SEL)amodifier:(Q)b;
 - (id) symbol;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (SEL) selector;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
