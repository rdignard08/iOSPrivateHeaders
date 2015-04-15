
@interface CAStateSetValue : CAStateElement {

    NSString* _keyPath;
    id _value;
}

 - (id) keyPath;
 - (BOOL) matches:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setValue:(id)a;
 - (id) value;
 - (void) foreachLayer:(@?)a;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (void) apply:(id)a;
 - (void) setKeyPath:(id)a;


@end
