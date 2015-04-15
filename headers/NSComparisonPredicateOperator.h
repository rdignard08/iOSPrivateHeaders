
@interface NSComparisonPredicateOperator : NSPredicateOperator {

    Q _variant;
    Q _options;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)aofPredicate:(id)b;
 - (Q) variant;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) initWithOperatorType:(Q)amodifier:(Q)bvariant:(Q)c;
 - (id) initWithOperatorType:(Q)amodifier:(Q)bvariant:(Q)coptions:(Q)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) options;


@end
