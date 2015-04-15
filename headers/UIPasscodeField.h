
@protocol UITextFieldDelegate;
@interface UIPasscodeField : UIView <UITextFieldDelegate> {

    NSMutableString* _value;
    NSMutableArray* _entryFields;
    NSMutableArray* _entryBackgrounds;
    UIButton* _okButton;
    BOOL _opaqueBackground;
    BOOL _centerHorizontally;
    long long _keyboardType;
    long long _keyboardAppearance;
    int _emptyContentReturnKeyType;
    id _delegate;
}
 + (double) defaultHeight;
 + (Class) textFieldClass;

 - (void) dealloc;
 - (void) appendString:(id)a ;
 - (id) stringValue;
 - (void) setDelegate:(id)a ;
 - (BOOL) canBecomeFirstResponder;
 - (BOOL) isFirstResponder;
 - (id) hitTest:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) setKeyboardType:(long long)a appearance:(long long)b ;
 - (void) setKeyboardType:(long long)a appearance:(long long)b emptyContentReturnKeyType:(int)c ;
 - (void) okButtonClicked:(id)a ;
 - (void) setNumberOfEntryFields:(int)a opaqueBackground:(BOOL)b ;
 - (void) _updateFields;
 - (void) setTextCentersHorizontally:(BOOL)a ;
 - (void) _textDidChange;
 - (BOOL) showsOKButton;
 - (void) setShowsOKButton:(BOOL)a ;
 - (void) setStringValue:(id)a ;
 - (void) deleteLastCharacter;
 - (int) numberOfEntryFields;
 - (void) setNumberOfEntryFields:(int)a ;
 - (BOOL) textField:(id)a shouldInsertText:(id)b replacingRange:({_NSRange=QQ})c ;
 - (BOOL) textFieldShouldStartEditing:(id)a ;
 - (void) textFieldDidResignFirstResponder:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setKeyboardType:(long long)a ;
 - (BOOL) becomeFirstResponder;


@end
