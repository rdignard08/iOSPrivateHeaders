
@interface _NSXPCConnectionClassCache : NSObject {

    int _lock;
    NSMutableSet _cache;
}

 - (void) clear;
 - (BOOL) containsClass:(Class)a;
 - (void) addClass:(Class)a;
 - (void) dealloc;
 - (id) init;


@end
