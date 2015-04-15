
@interface UIHandleLocalNotificationAction : BSAction {

    NSObject<OS_dispatch_semaphore>* _decodeSemaphore;
    UILocalNotification* _cachedNotification;
}

 - (void) dealloc;
 - (long long) UIActionType;
 - (id) notification;
 - (id) action;
 - (id) initWithNotification:(id)awithHandler:(@?)b;
 - (id) _initWithNotification:(id)aaction:(id)btype:(long long)cwithHandler:(@?)d;
 - (id) initWithNotification:(id)a;
 - (id) initWithNotification:(id)aaction:(id)bwithHandler:(@?)c;
 - (id) initWithXPCDictionary:(id)a;
 - (id) initWithInfo:(id)atimeout:(double)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
