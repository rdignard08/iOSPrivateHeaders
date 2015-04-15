
@interface NSCompoundPredicateOperator : NSPredicateOperator {

}
 + (id) notPredicateOperator;
 + (id) andPredicateOperator;
 + (id) orPredicateOperator;

 - (id) minimalFormInContext:(id)aofPredicates:(id)b;
 - (id) predicateFormat;
 - (BOOL) evaluatePredicates:(id)awithObject:(id)bsubstitutionVariables:(id)c;
 - (id) symbol;
 - (BOOL) evaluatePredicates:(id)awithObject:(id)b;
 - (id) copyWithZone:(^{_NSZone=})a;


@end
