
@interface UIViewHeartbeat : NSObject {

    UIView _view;
    SEL _selector;
    CADisplayLink _heartbeat;
}
 + (void) startHeartbeatWithView:(id)aselector:(SEL)binRunLoopMode:(id)c;
 + (void) stopHeartbeatWithView:(id)aselector:(SEL)b;

 - (void) dealloc;
 - (void) _updateDisplayLink:(id)a;


@end
