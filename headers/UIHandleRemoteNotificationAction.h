
@interface UIHandleRemoteNotificationAction : BSAction {

}

 - (q) UIActionType;
 - (id) payload;
 - (void) sendResponse:(id)a;
 - (id) action;
 - (id) _initWithRemoteNotificationPayload:(id)aaction:(id)btype:(q)cwithHandler:(@?)d;
 - (id) initWithRemoteNotificationPayload:(id)awithHandler:(@?)b;
 - (id) initWithRemoteNotificationPayload:(id)aaction:(id)bwithHandler:(@?)c;
 - (id) initWithInfo:(id)atimeout:(d)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) keyDescriptionForSetting:(Q)a;


@end
