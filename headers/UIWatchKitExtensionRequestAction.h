
@interface UIWatchKitExtensionRequestAction : BSAction {

}

 - (long long) UIActionType;
 - (void) sendResponse:(id)a;
 - (id) initWithRequest:(id)awithHandler:(@?)b;
 - (id) request;
 - (id) initWithInfo:(id)atimeout:(double)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) keyDescriptionForSetting:(unsigned long long)a;


@end
