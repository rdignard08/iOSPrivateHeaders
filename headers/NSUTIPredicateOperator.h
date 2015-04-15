
@interface NSUTIPredicateOperator : NSPredicateOperator {

}

 - (Q) variant;
 - (id) initForVariant:(Q)a;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;


@end
