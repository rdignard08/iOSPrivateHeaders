
@interface UIDelayedAction : NSObject {

    id m_target;
    SEL m_action;
    id m_userInfo;
    double m_delay;
    NSTimer* m_timer;
    BOOL m_canceled;
    NSString* m_runLoopMode;
}

 - (id) target;
 - (void) dealloc;
 - (id) userInfo;
 - (void) setTarget:(id)a ;
 - (void) touchWithDelay:(double)a ;
 - (id) initWithTarget:(id)a action:(SEL)b userInfo:(id)c delay:(double)d mode:(id)e ;
 - (void) timerFired:(id)a ;
 - (void) unschedule;
 - (id) initWithTarget:(id)a action:(SEL)b userInfo:(id)c delay:(double)d ;
 - (void) touch;
 - (BOOL) scheduled;
 - (void) cancel;
 - (double) delay;


@end
