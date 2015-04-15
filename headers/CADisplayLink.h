
@interface CADisplayLink : NSObject {

    ^v _impl;
}
@property (nonatomic, assign, readonly) CADisplay* display;
@property (nonatomic, retain, readwrite) NSNumber* userInfo;
@property (nonatomic, assign, readonly) NSNumber* timestamp;
@property (nonatomic, assign, readonly) NSNumber* duration;
@property (nonatomic, assign, readwrite, isPaused) NSNumber* paused;
@property (nonatomic, assign, readwrite) NSNumber* frameInterval;
 + (id) displayLinkWithDisplay:(id)atarget:(id)bselector:(SEL)c;
 + (id) displayLinkWithTarget:(id)aselector:(SEL)b;

 - (BOOL) isPaused;
 - (d) duration;
 - (void) dealloc;
 - (id) userInfo;
 - (void) invalidate;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (void) setFrameInterval:(q)a;
 - (void) setPaused:(BOOL)a;
 - (void) setUserInfo:(id)a;
 - (q) frameInterval;
 - (id) display;
 - (id) _initWithDisplayLinkItem:(^{DisplayLinkItem=^{Display}^v:^vi{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Condition={_opaque_pthread_cond_t=q[40c]}}^{_opaque_pthread_t}@{Ref<CA::Display::DisplayLink>=^{DisplayLink}}^{List<const __CFString *>}QQQb1b1b1})a;
 - (d) timestamp;
 - (void) addToRunLoop:(id)aforMode:(id)b;


@end
