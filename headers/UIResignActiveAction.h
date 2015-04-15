
@interface UIResignActiveAction : BSAction {

}

 - (long long) reason;
 - (long long) UIActionType;
 - (id) initWithReason:(long long)a ;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;
 - (id) valueDescriptionForFlag:(long long)a object:(id)b ofSetting:(unsigned long long)c ;


@end
