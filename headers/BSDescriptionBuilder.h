
@interface BSDescriptionBuilder : NSObject {

    NSObject _object;
    NSMutableString _description;
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
 - (id) appendFloat:(double)awithName:(id)bdecimalPrecision:(unsigned long long)c;
 - (id) appendCString:(r*)awithName:(id)b;
 - (void) tryAppendKey:(id)a;
 - (id) appendBool:(BOOL)awithName:(id)b;
 - (id) appendInteger:(long long)awithName:(id)b;
 - (id) appendUnsignedInteger:(unsigned long long)awithName:(id)b;
 - (id) appendInt:(int)awithName:(id)b;
 - (id) appendFloat:(double)awithName:(id)b;
 - (id) appendSelector:(SEL)awithName:(id)b;
 - (id) appendQueue:(id)awithName:(id)b;
 - (id) appendPoint:({CGPoint=dd})awithName:(id)b;
 - (id) appendSize:({CGSize=dd})awithName:(id)b;
 - (id) appendObjectsAndNames:(id)a;
 - (id) appendKey:(id)a;
 - (id) appendKeys:(id)a;
 - (id) appendUnsignedInt:(int)awithName:(id)b;


@end
