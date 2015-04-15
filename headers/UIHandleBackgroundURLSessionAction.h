
@interface UIHandleBackgroundURLSessionAction : BSAction {

}

 - (long long) UIActionType;
 - (id) sessionIdentifier;
 - (id) initWithSessionIdentifier:(id)a ;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;


@end
