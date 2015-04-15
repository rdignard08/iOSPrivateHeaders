
@interface UIHandleLocalNotificationAction : BSAction {

    @"NSObject<OS_dispatch_semaphore>" _decodeSemaphore;
    @"UILocalNotification" _cachedNotification;
}

 - (void) dealloc;
 - (q) UIActionType;
 - (id) notification;
 - (id) action;
 - (id) initWithNotification:(id)awithHandler:(@?)b;
 - (id) _initWithNotification:(id)aaction:(id)btype:(q)cwithHandler:(@?)d;
 - (id) initWithNotification:(id)a;
 - (id) initWithNotification:(id)aaction:(id)bwithHandler:(@?)c;
 - (id) initWithXPCDictionary:(id)a;
 - (id) initWithInfo:(id)atimeout:(d)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;


@end
