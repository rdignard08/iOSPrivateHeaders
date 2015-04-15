
@interface NSStringPredicateOperator : NSPredicateOperator {

    unsigned long long _flags;
}
 + (BOOL) supportsSecureCoding;

 - (unsigned long long) flags;
 - (void) _setOptions:(unsigned long long)a;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)bvariant:(unsigned long long)c;
 - (id) _modifierString;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) options;


@end
