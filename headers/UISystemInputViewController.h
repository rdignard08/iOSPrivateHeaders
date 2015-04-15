
@interface UISystemInputViewController : UIInputViewController {

    @"NSMutableDictionary" _accessoryViews;
    @"NSMutableDictionary" _accessoryConstraints;
    @"UIResponder<UITextInput>" _persistentDelegate;
    @"UIKeyboard" _keyboard;
    @"NSArray" _keyboardConstraits;
}
 + (BOOL) _requiresProxyInterface;

 - (void) dealloc;
 - (BOOL) _disableAutomaticKeyboardBehavior;
 - (void) viewWillLayoutSubviews;
 - (void) loadView;
 - (void) updateViewConstraints;
 - (id) keyboard;
 - (id) _keyboard;
 - (void) setKeyboard:(id)a;
 - (id) accessoryViewForEdge:(q)a;
 - (id) keyboardConstraits;
 - (id) constraintFromView:(id)aattribute:(q)btoView:(id)cattribute:(q)d;
 - (void) setKeyboardConstraits:(id)a;
 - (void) setConstraits:(id)aforEdge:(q)b;
 - (id) constraitsForEdge:(q)a;
 - (id) persistentDelegate;
 - (void) setAccessoryView:(id)aforEdge:(q)b;
 - (void) setPersistentDelegate:(id)a;
 - (id) init;


@end
