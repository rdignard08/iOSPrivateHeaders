
@interface NSNotificationCenter : NSObject {

    ^v _impl;
    ^v _callback;
    [11^v] _pad;
}
 + (id) defaultCenter;

 - (void) postNotification:(id)a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) isEmpty;
 - (id) init;
 - (void) removeObserver:(id)a ;
 - (void) postNotificationName:(id)a object:(id)b ;
 - (void) postNotificationName:(id)a object:(id)b userInfo:(id)c ;
 - (void) removeObserver:(id)a name:(id)b object:(id)c ;
 - (void) addObserver:(id)a selector:(SEL)b name:(id)c object:(id)d ;
 - (id) addObserverForName:(id)a object:(id)b queue:(id)c usingBlock:(@?)d ;


@end
