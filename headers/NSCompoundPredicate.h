
@interface NSCompoundPredicate : NSPredicate {

    ^v _reserved2;
    unsigned long long _type;
    NSArray* _subpredicates;
}
 + (BOOL) supportsSecureCoding;
 + (id) _operatorForType:(unsigned long long)a;
 + (id) notPredicateWithSubpredicate:(id)a;
 + (id) orPredicateWithSubpredicates:(id)a;
 + (id) andPredicateWithSubpredicates:(id)a;

 - (id) minimalFormInContext:(id)a;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (id) predicateOperator;
 - (void) acceptVisitor:(id)aflags:(unsigned long long)b;
 - (BOOL) evaluateWithObject:(id)asubstitutionVariables:(id)b;
 - (id) _predicateOperator;
 - (id) initWithType:(unsigned long long)asubpredicates:(id)b;
 - (unsigned long long) compoundPredicateType;
 - (id) _subpredicateDescription:(id)a;
 - (void) _acceptSubpredicates:(id)aflags:(unsigned long long)b;
 - (id) generateMetadataDescription;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) subpredicates;
 - (id) predicateWithSubstitutionVariables:(id)a;


@end
