
@interface UIHandleRemoteNotificationAction : BSAction {

}

 - (long long) UIActionType;
 - (id) payload;
 - (void) sendResponse:(id)a ;
 - (id) action;
 - (id) _initWithRemoteNotificationPayload:(id)a action:(id)b type:(long long)c withHandler:(@?)d ;
 - (id) initWithRemoteNotificationPayload:(id)a withHandler:(@?)b ;
 - (id) initWithRemoteNotificationPayload:(id)a action:(id)b withHandler:(@?)c ;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;


@end
