
@interface NSComparisonPredicateOperator : NSPredicateOperator {

    unsigned long long _variant;
    unsigned long long _options;
}
 + (BOOL) supportsSecureCoding;

 - (id) minimalFormInContext:(id)a ofPredicate:(id)b ;
 - (unsigned long long) variant;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)a andObject:(id)b ;
 - (id) initWithOperatorType:(unsigned long long)a modifier:(unsigned long long)b variant:(unsigned long long)c ;
 - (id) initWithOperatorType:(unsigned long long)a modifier:(unsigned long long)b variant:(unsigned long long)c options:(unsigned long long)d ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) options;


@end
