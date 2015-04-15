
@protocol UITextFieldDelegate;
@interface UIPasscodeField : UIView <UITextFieldDelegate> {

    @"NSMutableString" _value;
    @"NSMutableArray" _entryFields;
    @"NSMutableArray" _entryBackgrounds;
    @"UIButton" _okButton;
    BOOL _opaqueBackground;
    BOOL _centerHorizontally;
    q _keyboardType;
    q _keyboardAppearance;
    i _emptyContentReturnKeyType;
    id _delegate;
}
 + (d) defaultHeight;
 + (Class) textFieldClass;

 - (void) dealloc;
 - (void) appendString:(id)a;
 - (id) stringValue;
 - (void) setDelegate:(id)a;
 - (BOOL) canBecomeFirstResponder;
 - (BOOL) isFirstResponder;
 - (id) hitTest:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) setKeyboardType:(q)aappearance:(q)b;
 - (void) setKeyboardType:(q)aappearance:(q)bemptyContentReturnKeyType:(i)c;
 - (void) okButtonClicked:(id)a;
 - (void) setNumberOfEntryFields:(i)aopaqueBackground:(BOOL)b;
 - (void) _updateFields;
 - (void) setTextCentersHorizontally:(BOOL)a;
 - (void) _textDidChange;
 - (BOOL) showsOKButton;
 - (void) setShowsOKButton:(BOOL)a;
 - (void) setStringValue:(id)a;
 - (void) deleteLastCharacter;
 - (i) numberOfEntryFields;
 - (void) setNumberOfEntryFields:(i)a;
 - (BOOL) textField:(id)ashouldInsertText:(id)breplacingRange:({_NSRange=QQ})c;
 - (BOOL) textFieldShouldStartEditing:(id)a;
 - (void) textFieldDidResignFirstResponder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setKeyboardType:(q)a;
 - (BOOL) becomeFirstResponder;


@end
