
@interface NSBlockPredicate : NSPredicate {

    @? _block;
}

 - (BOOL) supportsSecureCoding;
 - (id) predicateFormat;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (BOOL) evaluateWithObject:(id)asubstitutionVariables:(id)b;
 - (@?) _predicateBlock;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithBlock:(@?)a;
 - (id) predicateWithSubstitutionVariables:(id)a;


@end
