
@interface NSInPredicateOperator : NSPredicateOperator {

    unsigned long long _flags;
    NSSubstringPredicateOperator _stringVersion;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)aofPredicate:(id)b;
 - (unsigned long long) flags;
 - (void) _setOptions:(unsigned long long)a;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) symbol;
 - (id) stringVersion;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)boptions:(unsigned long long)c;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) options;


@end
