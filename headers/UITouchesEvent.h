
@interface UITouchesEvent : UIInternalEvent {

    @"NSMutableSet" _touches;
    ^{__CFDictionary=} _keyedTouches;
    ^{__CFDictionary=} _keyedTouchesByWindow;
    ^{__CFDictionary=} _gestureRecognizersByWindow;
    @"NSMapTable" _latentSystemGestureWindows;
}

 - (id) _init;
 - (id) description;
 - (void) dealloc;
 - (void) _addTouch:(id)aforDelayedDelivery:(BOOL)b;
 - (id) touchesForGestureRecognizer:(id)a;
 - (void) _clearViewForTouch:(id)a;
 - (void) _removeTouch:(id)a;
 - (id) allTouches;
 - (id) _windows;
 - (id) _windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)a;
 - (id) _allTouches;
 - (void) _clearTouches;
 - (void) _dismissSharedCalloutBarIfNeeded;
 - (BOOL) _addGestureRecognizersForView:(id)atoTouch:(id)bcurrentTouchMap:(^{__CFDictionary=})cnewTouchMap:(^{__CFDictionary=})d;
 - (id) _touchesForKey:(id)a;
 - ({CGPoint=dd}) _digitizerLocation;
 - (id) _gestureRecognizersForWindow:(id)a;
 - (void) _touchesForGesture:(id)awithPhase:(long long)bintoSet:(id)c;
 - (id) _viewsForWindow:(id)a;
 - (id) _touchesForView:(id)awithPhase:(long long)b;
 - (void) _invalidateGestureRecognizerForWindowCache;
 - (id) _firstTouchForView:(id)a;
 - (id) _cloneEvent;
 - (id) touchesForWindow:(id)a;
 - (id) touchesForView:(id)a;
 - (id) _initWithEvent:(^{__GSEvent=})atouches:(id)b;
 - (id) _touchesForGestureRecognizer:(id)a;
 - (id) _touchesForWindow:(id)a;
 - (void) _removeTouchesForKey:(id)a;
 - (void) _removeTouchesForWindow:(id)a;
 - (void) _removeTouch:(id)afromGestureRecognizer:(id)b;
 - (id) _touchesForGesture:(id)awithPhase:(long long)b;
 - (void) _moveTouchesFromView:(id)atoView:(id)b;
 - (double) _initialTouchTimestamp;
 - (unsigned int) _windowServerHitTestContextId;
 - (void) _addWindowAwaitingLatentSystemGestureNotification:(id)adeliveredToEventWindow:(id)b;
 - (void) _windowNoLongerAwaitingSystemGestureNotification:(id)a;
 - (long long) type;


@end
