
@interface _UIAlertControllerTextFieldView : UIView {

    UIVisualEffectView* _borderContainerView;
    UIView* _borderView;
    UIView* _innerContentView;
    _UIAlertControllerTextField* _textField;
}

 - (void) dealloc;
 - (void) _addConstraints;
 - (id) textField;
 - (id) _textFieldFont;
 - (double) _borderWidth;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
