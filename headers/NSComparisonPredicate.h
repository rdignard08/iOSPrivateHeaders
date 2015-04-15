
@interface NSComparisonPredicate : NSPredicate {

    ^v _reserved2;
    NSPredicateOperator* _predicateOperator;
    NSExpression* _lhs;
    NSExpression* _rhs;
}
 + (BOOL) supportsSecureCoding;
 + (id) predicateWithLeftExpression:(id)arightExpression:(id)bmodifier:(unsigned long long)ctype:(unsigned long long)doptions:(unsigned long long)e;
 + (id) predicateWithLeftExpression:(id)arightExpression:(id)bcustomSelector:(SEL)c;
 + (id) predicateWithPredicateOperator:(id)aleftKeyPath:(id)brightValue:(id)c;
 + (id) predicateWithPredicateOperator:(id)aleftKeyPath:(id)brightKeyPath:(id)c;
 + (id) predicateWithPredicateOperator:(id)aleftExpression:(id)brightExpression:(id)c;

 - (id) minimalFormInContext:(id)a ;
 - (BOOL) _isForeignObjectExpression:(id)a givenContext:(id)b ;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (id) initWithLeftExpression:(id)a rightExpression:(id)b modifier:(unsigned long long)c type:(unsigned long long)d options:(unsigned long long)e ;
 - (id) initWithLeftExpression:(id)a rightExpression:(id)b customSelector:(SEL)c ;
 - (id) initWithPredicateOperator:(id)a leftExpression:(id)b rightExpression:(id)c ;
 - (id) initWithPredicateOperator:(id)a leftKeyPath:(id)b rightValue:(id)c ;
 - (id) initWithPredicateOperator:(id)a leftKeyPath:(id)b rightKeyPath:(id)c ;
 - (id) predicateOperator;
 - (id) keyPathExpressionForString:(id)a ;
 - (unsigned long long) comparisonPredicateModifier;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (void) _acceptOperator:(id)a flags:(unsigned long long)b ;
 - (void) _acceptExpressions:(id)a flags:(unsigned long long)b ;
 - (SEL) customSelector;
 - (void) setPredicateOperator:(id)a ;
 - (BOOL) evaluateWithObject:(id)a substitutionVariables:(id)b ;
 - (id) generateMetadataDescription;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) options;
 - (unsigned long long) predicateOperatorType;
 - (id) leftExpression;
 - (id) rightExpression;
 - (id) predicateWithSubstitutionVariables:(id)a ;


@end
