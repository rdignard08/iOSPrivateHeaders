
@interface NSInPredicateOperator : NSPredicateOperator {

    Q _flags;
    @"NSSubstringPredicateOperator" _stringVersion;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)aofPredicate:(id)b;
 - (Q) flags;
 - (void) _setOptions:(Q)a;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) symbol;
 - (id) stringVersion;
 - (id) initWithOperatorType:(Q)amodifier:(Q)boptions:(Q)c;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) options;


@end
