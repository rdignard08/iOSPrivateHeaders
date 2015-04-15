
@protocol WebPolicyDecisionListener;
@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {

    WebPolicyDecisionListenerPrivate* _private;
}

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - (void) dealloc;
 - (void) download;
 - (void) _invalidate;
 - (void) use;
 - (void) ignore;
 - (id) _initWithTarget:(id)a action:(SEL)b ;
 - (void) _usePolicy:(int)a ;


@end
