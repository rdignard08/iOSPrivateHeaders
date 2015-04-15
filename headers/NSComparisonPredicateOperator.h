
@interface NSComparisonPredicateOperator : NSPredicateOperator {

    unsigned long long _variant;
    unsigned long long _options;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)aofPredicate:(id)b;
 - (unsigned long long) variant;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)bvariant:(unsigned long long)c;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)bvariant:(unsigned long long)coptions:(unsigned long long)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) options;


@end
