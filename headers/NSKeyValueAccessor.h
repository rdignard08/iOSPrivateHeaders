
@interface NSKeyValueAccessor : NSObject {

    id _containerClassID;
    @"NSString" _key;
    ^? _implementation;
    SEL _selector;
    Q _extraArgumentCount;
    ^v _extraArgument1;
    ^v _extraArgument2;
    ^v _extraArgument3;
}

 - (id) initWithContainerClassID:(id)akey:(id)bimplementation:(^?)cselector:(SEL)dextraArguments:([3^v])ecount:(Q)f;
 - (id) containerClassID;
 - (Q) extraArgumentCount;
 - (^v) extraArgument1;
 - (^v) extraArgument2;
 - (SEL) selector;
 - (void) dealloc;
 - (id) key;


@end
