
@interface NSUTIPredicateOperator : NSPredicateOperator {

}

 - (unsigned long long) variant;
 - (id) initForVariant:(unsigned long long)a;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;


@end
