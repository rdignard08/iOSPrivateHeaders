
@interface UIKeyboardSuggestedInputMode : UIKeyboardInputMode {

    BOOL enabled;
}

 - (id) description;
 - (BOOL) enabled;
 - (id) initWithIdentifier:(id)a enabled:(BOOL)b ;
 - (void) setEnabled:(BOOL)a ;


@end
