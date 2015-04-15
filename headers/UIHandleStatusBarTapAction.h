
@interface UIHandleStatusBarTapAction : BSAction {

}

 - (long long) UIActionType;
 - (long long) statusBarStyle;
 - (id) initWithStatusBarStyle:(long long)a ;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;


@end
