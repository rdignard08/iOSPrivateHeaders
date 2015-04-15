
@interface NSNotificationCenter : NSObject {

    ^v _impl;
    ^v _callback;
    [11^v] _pad;
}
 + (id) defaultCenter;

 - (void) postNotification:(id)a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) isEmpty;
 - (id) init;
 - (void) removeObserver:(id)a;
 - (void) postNotificationName:(id)aobject:(id)b;
 - (void) postNotificationName:(id)aobject:(id)buserInfo:(id)c;
 - (void) removeObserver:(id)aname:(id)bobject:(id)c;
 - (void) addObserver:(id)aselector:(SEL)bname:(id)cobject:(id)d;
 - (id) addObserverForName:(id)aobject:(id)bqueue:(id)cusingBlock:(@?)d;


@end
