
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

 - (id) minimalFormInContext:(id)a;
 - (BOOL) _isForeignObjectExpression:(id)agivenContext:(id)b;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (id) initWithLeftExpression:(id)arightExpression:(id)bmodifier:(unsigned long long)ctype:(unsigned long long)doptions:(unsigned long long)e;
 - (id) initWithLeftExpression:(id)arightExpression:(id)bcustomSelector:(SEL)c;
 - (id) initWithPredicateOperator:(id)aleftExpression:(id)brightExpression:(id)c;
 - (id) initWithPredicateOperator:(id)aleftKeyPath:(id)brightValue:(id)c;
 - (id) initWithPredicateOperator:(id)aleftKeyPath:(id)brightKeyPath:(id)c;
 - (id) predicateOperator;
 - (id) keyPathExpressionForString:(id)a;
 - (unsigned long long) comparisonPredicateModifier;
 - (void) acceptVisitor:(id)aflags:(unsigned long long)b;
 - (void) _acceptOperator:(id)aflags:(unsigned long long)b;
 - (void) _acceptExpressions:(id)aflags:(unsigned long long)b;
 - (SEL) customSelector;
 - (void) setPredicateOperator:(id)a;
 - (BOOL) evaluateWithObject:(id)asubstitutionVariables:(id)b;
 - (id) generateMetadataDescription;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) options;
 - (unsigned long long) predicateOperatorType;
 - (id) leftExpression;
 - (id) rightExpression;
 - (id) predicateWithSubstitutionVariables:(id)a;


@end
