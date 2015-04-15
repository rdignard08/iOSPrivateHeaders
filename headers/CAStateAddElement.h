
@interface CAStateAddElement : CAStateElement {

    NSString _keyPath;
    id _object;
    id _beforeObject;
}

 - (id) keyPath;
 - (BOOL) matches:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) object;
 - (void) setObject:(id)a;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) foreachLayer:(@?)a;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (void) apply:(id)a;
 - (void) setKeyPath:(id)a;
 - (void) setBeforeObject:(id)a;
 - (id) beforeObject;


@end
