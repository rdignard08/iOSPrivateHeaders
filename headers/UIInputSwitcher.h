
@interface UIInputSwitcher : NSObject {

    @"UIDelayedAction" m_switcherDelay;
    @"UIDelayedAction" m_hideSwitcherDelay;
    i m_state;
    @"UIInputSwitcherView" m_switcherView;
    @"NSString" _newMode;
}
 + (id) sharedInstance;
 + (id) activeInstance;

 - (void) dealloc;
 - (BOOL) switchMode:(id)awithDelay:(BOOL)b;
 - (BOOL) handleSwitchCommand:(BOOL)a;
 - (void) hideSwitcher;
 - (BOOL) handleModifiersChangedEvent:(id)a;
 - (void) clearSwitcherTimer;
 - (void) clearHideSwitcherTimer;
 - (void) cancelSwitcherTimer;
 - (void) touchHideSwitcherTimer;
 - (void) handleRotate:(id)a;
 - (void) showSwitcher;
 - (void) setNewMode:(id)a;
 - (id) newMode;
 - (void) touchSwitcherTimer;
 - (id) init;
 - (BOOL) isVisible;


@end
