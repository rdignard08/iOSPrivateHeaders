
@interface NSBlockPredicate : NSPredicate {

    @? _block;
}

 - (BOOL) supportsSecureCoding;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (BOOL) evaluateWithObject:(id)a substitutionVariables:(id)b ;
 - (@?) _predicateBlock;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithBlock:(@?)a ;
 - (id) predicateWithSubstitutionVariables:(id)a ;


@end
