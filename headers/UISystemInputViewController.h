
@interface UISystemInputViewController : UIInputViewController {

    NSMutableDictionary _accessoryViews;
    NSMutableDictionary _accessoryConstraints;
    UIResponder<UITextInput> _persistentDelegate;
    UIKeyboard _keyboard;
    NSArray _keyboardConstraits;
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
 - (id) accessoryViewForEdge:(long long)a;
 - (id) keyboardConstraits;
 - (id) constraintFromView:(id)aattribute:(long long)btoView:(id)cattribute:(long long)d;
 - (void) setKeyboardConstraits:(id)a;
 - (void) setConstraits:(id)aforEdge:(long long)b;
 - (id) constraitsForEdge:(long long)a;
 - (id) persistentDelegate;
 - (void) setAccessoryView:(id)aforEdge:(long long)b;
 - (void) setPersistentDelegate:(id)a;
 - (id) init;


@end
