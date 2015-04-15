
@interface NSFalsePredicate : NSPredicate {

}
 + (BOOL) supportsSecureCoding;
 + (BOOL) _allowsEvaluation;
 + (id) defaultInstance;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (BOOL) evaluateWithObject:(id)asubstitutionVariables:(id)b;
 - (void) _validateForMetadataQueryScopes:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
