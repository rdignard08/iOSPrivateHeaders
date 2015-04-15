
@interface UIHandleLocalNotificationAction : BSAction {

    NSObject<OS_dispatch_semaphore>* _decodeSemaphore;
    UILocalNotification* _cachedNotification;
}

 - (void) dealloc;
 - (long long) UIActionType;
 - (id) notification;
 - (id) action;
 - (id) initWithNotification:(id)a withHandler:(@?)b ;
 - (id) _initWithNotification:(id)a action:(id)b type:(long long)c withHandler:(@?)d ;
 - (id) initWithNotification:(id)a ;
 - (id) initWithNotification:(id)a action:(id)b withHandler:(@?)c ;
 - (id) initWithXPCDictionary:(id)a ;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;
 - (id) valueDescriptionForFlag:(long long)a object:(id)b ofSetting:(unsigned long long)c ;


@end
