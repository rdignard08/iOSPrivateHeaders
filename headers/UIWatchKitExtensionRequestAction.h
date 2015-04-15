
@interface UIWatchKitExtensionRequestAction : BSAction {

}

 - (long long) UIActionType;
 - (void) sendResponse:(id)a ;
 - (id) initWithRequest:(id)a withHandler:(@?)b ;
 - (id) request;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;


@end
