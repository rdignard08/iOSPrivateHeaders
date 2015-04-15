
@interface NSStringPredicateOperator : NSPredicateOperator {

    Q _flags;
}
 + (BOOL) supportsSecureCoding;

 - (Q) flags;
 - (void) _setOptions:(Q)a;
 - (id) initWithOperatorType:(Q)amodifier:(Q)bvariant:(Q)c;
 - (id) _modifierString;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) options;


@end
