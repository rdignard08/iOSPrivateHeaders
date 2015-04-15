
@interface NSTruePredicate : NSPredicate {

}
 + (BOOL) supportsSecureCoding;
 + (BOOL) _allowsEvaluation;
 + (id) defaultInstance;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) predicateFormat;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (BOOL) evaluateWithObject:(id)a substitutionVariables:(id)b ;
 - (void) _validateForMetadataQueryScopes:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
