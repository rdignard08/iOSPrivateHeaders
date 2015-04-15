
@interface BSDescriptionBuilder : NSObject {

    NSObject* _object;
    NSMutableString* _description;
}
 + (id) descriptionForObject:(id)awithObjectsAndNames:(id)b;
 + (id) builderWithObject:(id)a;
 + (id) componentSeparator;
 + (id) nameObjectSeparator;
 + (id) descriptionForObject:(id)a;

 - (void) dealloc;
 - (id) appendString:(id)a ;
 - (id) initWithObject:(id)a ;
 - (id) appendPointer:(^v)a withName:(id)b ;
 - (id) appendRect:({CGRect={CGPoint=dd}{CGSize=dd}})a withName:(id)b ;
 - (id) appendObjectsAndNames:(id)a args:([1{__va_list_tag=II^v^v}])b ;
 - (id) build;
 - (id) appendObject:(id)a withName:(id)b skipIfNil:(BOOL)c ;
 - (id) appendObject:(id)a withName:(id)b ;
 - (id) appendFloat:(double)a withName:(id)b decimalPrecision:(unsigned long long)c ;
 - (id) appendCString:(r*)a withName:(id)b ;
 - (void) tryAppendKey:(id)a ;
 - (id) appendBool:(BOOL)a withName:(id)b ;
 - (id) appendInteger:(long long)a withName:(id)b ;
 - (id) appendUnsignedInteger:(unsigned long long)a withName:(id)b ;
 - (id) appendInt:(int)a withName:(id)b ;
 - (id) appendFloat:(double)a withName:(id)b ;
 - (id) appendSelector:(SEL)a withName:(id)b ;
 - (id) appendQueue:(id)a withName:(id)b ;
 - (id) appendPoint:({CGPoint=dd})a withName:(id)b ;
 - (id) appendSize:({CGSize=dd})a withName:(id)b ;
 - (id) appendObjectsAndNames:(id)a ;
 - (id) appendKey:(id)a ;
 - (id) appendKeys:(id)a ;
 - (id) appendUnsignedInt:(int)a withName:(id)b ;


@end
