
@interface CAStateController : NSObject {

    ^{_CAStateControllerData=@^{__CFDictionary}@@} _data;
}
@property (atomic, assign, readonly) CALayer* layer;
@property (atomic, weak, readwrite) NSNumber* delegate;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) delegate;
 - (id) initWithLayer:(id)a ;
 - (void) _applyTransition:(id)a layer:(id)b undo:(id)c speed:(float)d ;
 - (void) _nextStateTimer:(id)a ;
 - (void) setState:(id)a ofLayer:(id)b transitionSpeed:(float)c ;
 - (void) setInitialStatesOfLayer:(id)a transitionSpeed:(float)b ;
 - (void) _applyTransitionElement:(id)a layer:(id)b undo:(id)c speed:(float)d ;
 - (void) _addAnimation:(id)a forKey:(id)b target:(id)c undo:(id)d ;
 - (id) layer;
 - (id) stateOfLayer:(id)a ;
 - (void) setState:(id)a ofLayer:(id)b ;
 - (void) setInitialStatesOfLayer:(id)a ;
 - (id) removeAllStateChanges;
 - (void) restoreStateChanges:(id)a ;
 - (void) cancelTimers;
 - (void) _removeTransition:(id)a layer:(id)b ;


@end
