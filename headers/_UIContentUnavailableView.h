
@interface _UIContentUnavailableView : UIView {

    Q _style;
    @"NSString" _title;
    @"_UIBackdropView" _backdrop;
    @"UIView" _containerView;
    @"UILabel" _titleLabel;
    @"UILabel" _messageLabel;
    @"UIButton" _actionButton;
    @"NSLayoutConstraint" titleToMessageConstraint;
    @"NSLayoutConstraint" messageToButtonConstraint;
    @"UIView" _fromSnapshot;
    @"UIView" _toSnapshot;
    {CGSize="width"d"height"d} _fromSnapshotSize;
    @"NSMutableArray" _containerViewContraints;
    @"NSString" _message;
    @"NSString" _buttonTitle;
    @? _buttonAction;
    Q _vibrantOptions;
}

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - (id) message;
 - (void) updateConstraints;
 - (void) setMessage:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atitle:(id)bstyle:(Q)c;
 - (void) setButtonAction:(@?)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atitle:(id)bstyle:(Q)cincludeBackdrop:(BOOL)d;
 - (BOOL) _hasVibrantButton;
 - (void) _updateViewHierarchy;
 - (BOOL) _hasVibrantText;
 - (id) _vibrantBaseColor;
 - (id) _flatTextColor;
 - (d) _labelAlpha;
 - (void) _actionButtonPressed:(id)a;
 - (id) _buttonBackgroundImageForStyle:(Q)acontrolState:(Q)b;
 - (@?) buttonAction;
 - (void) windowWillRotateNotification:(id)a;
 - (void) windowWillAnimateRotateNotification:(id)a;
 - (void) windowDidRotateNotification:(id)a;
 - (Q) vibrantOptions;
 - (void) setButtonTitle:(id)a;
 - (void) setVibrantOptions:(Q)a;
 - (id) buttonTitle;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
