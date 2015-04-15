
@protocol _UIResponderForwardable;
@interface _UIPhysicalButton : NSObject <_UIResponderForwardable> {

    NSMutableArray* _gestureRecognizers;
    NSMutableArray* _forwardingRecord;
    BOOL _abandonForwardingRecord;
    double _timestamp;
    long long _phase;
    long long _type;
    UIWindow* _window;
    UIResponder* _responder;
}
@property (nonatomic, assign, readwrite) NSNumber* timestamp;
@property (nonatomic, assign, readwrite) NSNumber* phase;
@property (nonatomic, assign, readwrite) NSNumber* type;
@property (nonatomic, retain, readwrite) UIWindow* window;
@property (nonatomic, retain, readwrite) UIResponder* responder;
@property (nonatomic, copy, readwrite) NSArray* gestureRecognizers;
@property (nonatomic, assign, readwrite, setter=_setForwardablePhase:) NSNumber* _forwardablePhase;
@property (nonatomic, retain, readwrite, setter=_setResponder:) UIResponder* _responder;

 - (void) dealloc;
 - (void) setType:(long long)a;
 - (void) setWindow:(id)a;
 - (long long) phase;
 - (void) setPhase:(long long)a;
 - (id) gestureRecognizers;
 - (void) setResponder:(id)a;
 - (void) setGestureRecognizers:(id)a;
 - (void) _setForwardablePhase:(long long)a;
 - (id) _responder;
 - (void) _setResponder:(id)a;
 - (id) responder;
 - (id) _forwardingRecord;
 - (SEL) _responderSelectorForPhase:(long long)a;
 - (BOOL) _wantsForwardingFromResponder:(id)atoNextResponder:(id)bwithEvent:(id)c;
 - (void) _removeGestureRecognizer:(id)a;
 - (long long) _forwardablePhase;
 - (BOOL) _isAbandoningForwardingRecord;
 - (id) _mutableForwardingRecord;
 - (void) _abandonForwardingRecord;
 - (long long) type;
 - (id) window;
 - (double) timestamp;
 - (void) setTimestamp:(double)a;


@end
