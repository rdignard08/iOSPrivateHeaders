
@interface UIKeyboardSuggestedInputMode : UIKeyboardInputMode {

    BOOL enabled;
}

 - (id) description;
 - (BOOL) enabled;
 - (id) initWithIdentifier:(id)aenabled:(BOOL)b;
 - (void) setEnabled:(BOOL)a;


@end
