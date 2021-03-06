
@interface UIPhysicalButtonsEvent : UIInternalEvent {

    NSMutableSet* _allPhysicalButtons;
    _UIPhysicalButton* _triggeringPhysicalButton;
}

 - (id) _init;
 - (void) dealloc;
 - (void) _addPhysicalButton:(id)a ;
 - (id) _allPhysicalButtons;
 - (void) set_triggeringPhysicalButton:(id)a ;
 - (void) _removePhysicalButton:(id)a ;
 - (id) _windows;
 - (id) _triggeringPhysicalButton;
 - (id) _gestureRecognizersForWindow:(id)a ;
 - (id) _physicalButtonsForGestureRecognizer:(id)a withPhase:(long long)b ;
 - (id) _respondersForWindow:(id)a ;
 - (id) _physicalButtonsForResponder:(id)a withPhase:(long long)b ;
 - (id) _physicalButtonsForWindow:(id)a ;
 - (id) _physicalButtonsForResponder:(id)a ;
 - (id) _physicalButtonsForGestureRecognizer:(id)a ;
 - (long long) type;


@end
