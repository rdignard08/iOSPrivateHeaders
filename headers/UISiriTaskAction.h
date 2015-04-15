
@interface UISiriTaskAction : BSAction {

}

 - (long long) UIActionType;
 - (id) payload;
 - (id) initWithPayload:(id)a ;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;


@end
