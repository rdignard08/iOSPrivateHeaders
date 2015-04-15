
@interface CAStateAddAnimation : CAStateElement {

    NSString* _key;
    CAAnimation* _animation;
}

 - (id) keyPath;
 - (void) setKey:(id)a ;
 - (BOOL) matches:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) key;
 - (id) animation;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLTypeForKey:(id)a ;
 - (void) setAnimation:(id)a ;
 - (void) apply:(id)a ;


@end
