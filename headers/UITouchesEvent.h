
@interface UITouchesEvent : UIInternalEvent {

    NSMutableSet* _touches;
    ^{__CFDictionary=} _keyedTouches;
    ^{__CFDictionary=} _keyedTouchesByWindow;
    ^{__CFDictionary=} _gestureRecognizersByWindow;
    NSMapTable* _latentSystemGestureWindows;
}

 - (id) _init;
 - (id) description;
 - (void) dealloc;
 - (void) _addTouch:(id)a forDelayedDelivery:(BOOL)b ;
 - (id) touchesForGestureRecognizer:(id)a ;
 - (void) _clearViewForTouch:(id)a ;
 - (void) _removeTouch:(id)a ;
 - (id) allTouches;
 - (id) _windows;
 - (id) _windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)a ;
 - (id) _allTouches;
 - (void) _clearTouches;
 - (void) _dismissSharedCalloutBarIfNeeded;
 - (BOOL) _addGestureRecognizersForView:(id)a toTouch:(id)b currentTouchMap:(^{__CFDictionary=})c newTouchMap:(^{__CFDictionary=})d ;
 - (id) _touchesForKey:(id)a ;
 - ({CGPoint=dd}) _digitizerLocation;
 - (id) _gestureRecognizersForWindow:(id)a ;
 - (void) _touchesForGesture:(id)a withPhase:(long long)b intoSet:(id)c ;
 - (id) _viewsForWindow:(id)a ;
 - (id) _touchesForView:(id)a withPhase:(long long)b ;
 - (void) _invalidateGestureRecognizerForWindowCache;
 - (id) _firstTouchForView:(id)a ;
 - (id) _cloneEvent;
 - (id) touchesForWindow:(id)a ;
 - (id) touchesForView:(id)a ;
 - (id) _initWithEvent:(^{__GSEvent=})a touches:(id)b ;
 - (id) _touchesForGestureRecognizer:(id)a ;
 - (id) _touchesForWindow:(id)a ;
 - (void) _removeTouchesForKey:(id)a ;
 - (void) _removeTouchesForWindow:(id)a ;
 - (void) _removeTouch:(id)a fromGestureRecognizer:(id)b ;
 - (id) _touchesForGesture:(id)a withPhase:(long long)b ;
 - (void) _moveTouchesFromView:(id)a toView:(id)b ;
 - (double) _initialTouchTimestamp;
 - (unsigned int) _windowServerHitTestContextId;
 - (void) _addWindowAwaitingLatentSystemGestureNotification:(id)a deliveredToEventWindow:(id)b ;
 - (void) _windowNoLongerAwaitingSystemGestureNotification:(id)a ;
 - (long long) type;


@end
