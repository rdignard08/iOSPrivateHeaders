
@interface CAStateRemoveAnimation : CAStateElement {

    NSString _key;
}

 - (id) keyPath;
 - (void) setKey:(id)a;
 - (BOOL) matches:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) key;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (void) apply:(id)a;


@end
