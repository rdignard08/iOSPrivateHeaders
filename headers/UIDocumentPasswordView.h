
@protocol UITextFieldDelegate;
@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {

    UIImageView* _iconView;
    UIDocumentPasswordField* _passwordTextField;
    UILabel* _label;
    NSObject<UIDocumentPasswordViewDelegate>* passwordDelegate;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) _canDrawContent;
 - (void) textFieldDidBeginEditing:(id)a;
 - (void) textFieldDidEndEditing:(id)a;
 - (id) passwordField;
 - (id) initWithDocumentName:(id)a;
 - (void) setPasswordDelegate:(id)a;
 - (id) _labelFont;
 - (id) _labelTextColor;
 - (void) _passwordEntered:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _iconRectForContainerRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (double) _labelHorizontalOffset;
 - (double) _textFieldWidth;
 - (id) passwordDelegate;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
