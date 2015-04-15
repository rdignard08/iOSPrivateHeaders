
@interface NSCompoundPredicate : NSPredicate {

    ^v _reserved2;
    Q _type;
    @"NSArray" _subpredicates;
}
 + (BOOL) supportsSecureCoding;
 + (id) _operatorForType:(Q)a;
 + (id) notPredicateWithSubpredicate:(id)a;
 + (id) orPredicateWithSubpredicates:(id)a;
 + (id) andPredicateWithSubpredicates:(id)a;

 - (id) minimalFormInContext:(id)a;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (id) predicateOperator;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (BOOL) evaluateWithObject:(id)asubstitutionVariables:(id)b;
 - (id) _predicateOperator;
 - (id) initWithType:(Q)asubpredicates:(id)b;
 - (Q) compoundPredicateType;
 - (id) _subpredicateDescription:(id)a;
 - (void) _acceptSubpredicates:(id)aflags:(Q)b;
 - (id) generateMetadataDescription;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) subpredicates;
 - (id) predicateWithSubstitutionVariables:(id)a;


@end
