
@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator {

    NSDictionary* _keyplaneCache;
    NSEnumerator* _nameEnum;
}

 - (void) dealloc;
 - (id) nextObject;
 - (id) initWithKeyplaneCache:(id)a ;


@end
