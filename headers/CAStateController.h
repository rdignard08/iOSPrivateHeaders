
@interface CAStateController : NSObject {

    ^{_CAStateControllerData=@^{__CFDictionary}@@} _data;
}
@property (atomic, assign, readonly) CALayer* layer;
@property (atomic, weak, readwrite) NSNumber* delegate;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (id) initWithLayer:(id)a;
 - (void) _applyTransition:(id)alayer:(id)bundo:(id)cspeed:(float)d;
 - (void) _nextStateTimer:(id)a;
 - (void) setState:(id)aofLayer:(id)btransitionSpeed:(float)c;
 - (void) setInitialStatesOfLayer:(id)atransitionSpeed:(float)b;
 - (void) _applyTransitionElement:(id)alayer:(id)bundo:(id)cspeed:(float)d;
 - (void) _addAnimation:(id)aforKey:(id)btarget:(id)cundo:(id)d;
 - (id) layer;
 - (id) stateOfLayer:(id)a;
 - (void) setState:(id)aofLayer:(id)b;
 - (void) setInitialStatesOfLayer:(id)a;
 - (id) removeAllStateChanges;
 - (void) restoreStateChanges:(id)a;
 - (void) cancelTimers;
 - (void) _removeTransition:(id)alayer:(id)b;


@end
