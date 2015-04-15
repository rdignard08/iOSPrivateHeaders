
@interface _UIAccessDeniedView : UIView {

    UIImageView* _lockView;
    UILabel* _titleLabel;
    UILabel* _messageLabel;
    NSString* _title;
    NSString* _message;
}

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) _textColor;
 - (id) message;
 - (void) setMessage:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
