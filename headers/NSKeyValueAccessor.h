
@interface NSKeyValueAccessor : NSObject {

    id _containerClassID;
    @"NSString" _key;
    ^? _implementation;
    SEL _selector;
    unsigned long long _extraArgumentCount;
    ^v _extraArgument1;
    ^v _extraArgument2;
    ^v _extraArgument3;
}

 - (id) initWithContainerClassID:(id)akey:(id)bimplementation:(^?)cselector:(SEL)dextraArguments:([3^v])ecount:(unsigned long long)f;
 - (id) containerClassID;
 - (unsigned long long) extraArgumentCount;
 - (^v) extraArgument1;
 - (^v) extraArgument2;
 - (SEL) selector;
 - (void) dealloc;
 - (id) key;


@end
