
@interface NSSelfExpression : NSExpression {

}
 + (BOOL) supportsSecureCoding;
 + (BOOL) _allowsEvaluation;
 + (id) defaultInstance;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) predicateFormat;
 - (id) _initPrivate;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) expressionValueWithObject:(id)a context:(id)b ;


@end
