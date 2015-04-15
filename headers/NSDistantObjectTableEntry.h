
@interface NSDistantObjectTableEntry : NSObject {

    @"NSConnection" _conn;
    @"NSDistantObject" _proxy;
    id _localObject;
    I _wireID;
}

 - (id) description;
 - (void) dealloc;


@end
