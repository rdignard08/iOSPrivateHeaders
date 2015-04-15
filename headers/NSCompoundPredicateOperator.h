
@interface NSCompoundPredicateOperator : NSPredicateOperator {

}
 + (id) notPredicateOperator;
 + (id) andPredicateOperator;
 + (id) orPredicateOperator;

 - (id) minimalFormInContext:(id)a ofPredicates:(id)b ;
 - (id) predicateFormat;
 - (BOOL) evaluatePredicates:(id)a withObject:(id)b substitutionVariables:(id)c ;
 - (id) symbol;
 - (BOOL) evaluatePredicates:(id)a withObject:(id)b ;
 - (id) copyWithZone:(^{_NSZone=})a ;


@end
