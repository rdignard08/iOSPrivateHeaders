
@protocol _UIResponderForwardable;
@interface _UIPhysicalButton : NSObject <_UIResponderForwardable> {

    @"NSMutableArray" _gestureRecognizers;
    @"NSMutableArray" _forwardingRecord;
    BOOL _abandonForwardingRecord;
    d _timestamp;
    q _phase;
    q _type;
    @"UIWindow" _window;
    @"UIResponder" _responder;
}
@property (nonatomic, assign, readwrite) NSNumber* timestamp;
@property (nonatomic, assign, readwrite) NSNumber* phase;
@property (nonatomic, assign, readwrite) NSNumber* type;
@property (nonatomic, retain, readwrite) UIWindow* window;
@property (nonatomic, retain, readwrite) UIResponder* responder;
@property (nonatomic, copy, readwrite) NSArray* gestureRecognizers;
@property (nonatomic, assign, readwrite, _setForwardablePhase:) NSNumber* _forwardablePhase;
@property (nonatomic, retain, readwrite, _setResponder:) UIResponder* _responder;

 - (void) dealloc;
 - (void) setType:(q)a;
 - (void) setWindow:(id)a;
 - (q) phase;
 - (void) setPhase:(q)a;
 - (id) gestureRecognizers;
 - (void) setResponder:(id)a;
 - (void) setGestureRecognizers:(id)a;
 - (void) _setForwardablePhase:(q)a;
 - (id) _responder;
 - (void) _setResponder:(id)a;
 - (id) responder;
 - (id) _forwardingRecord;
 - (SEL) _responderSelectorForPhase:(q)a;
 - (BOOL) _wantsForwardingFromResponder:(id)atoNextResponder:(id)bwithEvent:(id)c;
 - (void) _removeGestureRecognizer:(id)a;
 - (q) _forwardablePhase;
 - (BOOL) _isAbandoningForwardingRecord;
 - (id) _mutableForwardingRecord;
 - (void) _abandonForwardingRecord;
 - (q) type;
 - (id) window;
 - (d) timestamp;
 - (void) setTimestamp:(d)a;


@end
