
@interface UIScrubberTimeView : UIView {

    NSString* _time;
    UIColor* _timeColor;
    UIColor* _timeShadowColor;
    b2 _align;
}

 - (void) dealloc;
 - (void) setTimeColor:(id)a ;
 - (void) setTimeShadowColor:(id)a ;
 - (void) setTime:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) time;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
