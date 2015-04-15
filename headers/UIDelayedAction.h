
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
 - (void) setTarget:(id)a;
 - (void) touchWithDelay:(double)a;
 - (id) initWithTarget:(id)aaction:(SEL)buserInfo:(id)cdelay:(double)dmode:(id)e;
 - (void) timerFired:(id)a;
 - (void) unschedule;
 - (id) initWithTarget:(id)aaction:(SEL)buserInfo:(id)cdelay:(double)d;
 - (void) touch;
 - (BOOL) scheduled;
 - (void) cancel;
 - (double) delay;


@end
