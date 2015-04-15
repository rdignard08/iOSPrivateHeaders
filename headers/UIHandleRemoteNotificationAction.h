
@interface UIHandleRemoteNotificationAction : BSAction {

}

 - (long long) UIActionType;
 - (id) payload;
 - (void) sendResponse:(id)a;
 - (id) action;
 - (id) _initWithRemoteNotificationPayload:(id)aaction:(id)btype:(long long)cwithHandler:(@?)d;
 - (id) initWithRemoteNotificationPayload:(id)awithHandler:(@?)b;
 - (id) initWithRemoteNotificationPayload:(id)aaction:(id)bwithHandler:(@?)c;
 - (id) initWithInfo:(id)atimeout:(double)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) keyDescriptionForSetting:(unsigned long long)a;


@end
