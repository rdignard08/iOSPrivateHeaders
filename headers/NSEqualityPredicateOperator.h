
@interface NSEqualityPredicateOperator : NSPredicateOperator {

    BOOL _negate;
    Q _options;
}
 + (BOOL) supportsSecureCoding;

 - (void) _setOptions:(Q)a;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) initWithOperatorType:(Q)amodifier:(Q)bnegate:(BOOL)c;
 - (id) initWithOperatorType:(Q)amodifier:(Q)bnegate:(BOOL)coptions:(Q)d;
 - (BOOL) isNegation;
 - (void) setNegation:(BOOL)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) options;


@end
