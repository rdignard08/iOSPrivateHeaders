
@interface NSEqualityPredicateOperator : NSPredicateOperator {

    BOOL _negate;
    unsigned long long _options;
}
 + (BOOL) supportsSecureCoding;

 - (void) _setOptions:(unsigned long long)a;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)bnegate:(BOOL)c;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)bnegate:(BOOL)coptions:(unsigned long long)d;
 - (BOOL) isNegation;
 - (void) setNegation:(BOOL)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) options;


@end
