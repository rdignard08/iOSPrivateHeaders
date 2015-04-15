
@interface BSDescriptionBuilder : NSObject {

    @"NSObject" _object;
    @"NSMutableString" _description;
}
 + (id) descriptionForObject:(id)awithObjectsAndNames:(id)b;
 + (id) builderWithObject:(id)a;
 + (id) componentSeparator;
 + (id) nameObjectSeparator;
 + (id) descriptionForObject:(id)a;

 - (void) dealloc;
 - (id) appendString:(id)a;
 - (id) initWithObject:(id)a;
 - (id) appendPointer:(^v)awithName:(id)b;
 - (id) appendRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithName:(id)b;
 - (id) appendObjectsAndNames:(id)aargs:([1{__va_list_tag=II^v^v}])b;
 - (id) build;
 - (id) appendObject:(id)awithName:(id)bskipIfNil:(BOOL)c;
 - (id) appendObject:(id)awithName:(id)b;
 - (id) appendFloat:(d)awithName:(id)bdecimalPrecision:(Q)c;
 - (id) appendCString:(r*)awithName:(id)b;
 - (void) tryAppendKey:(id)a;
 - (id) appendBool:(BOOL)awithName:(id)b;
 - (id) appendInteger:(q)awithName:(id)b;
 - (id) appendUnsignedInteger:(Q)awithName:(id)b;
 - (id) appendInt:(i)awithName:(id)b;
 - (id) appendFloat:(d)awithName:(id)b;
 - (id) appendSelector:(SEL)awithName:(id)b;
 - (id) appendQueue:(id)awithName:(id)b;
 - (id) appendPoint:({CGPoint=dd})awithName:(id)b;
 - (id) appendSize:({CGSize=dd})awithName:(id)b;
 - (id) appendObjectsAndNames:(id)a;
 - (id) appendKey:(id)a;
 - (id) appendKeys:(id)a;
 - (id) appendUnsignedInt:(i)awithName:(id)b;


@end
