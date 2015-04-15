
@interface _UIContentUnavailableView : UIView {

    unsigned long long _style;
    NSString* _title;
    _UIBackdropView* _backdrop;
    UIView* _containerView;
    UILabel* _titleLabel;
    UILabel* _messageLabel;
    UIButton* _actionButton;
    NSLayoutConstraint* titleToMessageConstraint;
    NSLayoutConstraint* messageToButtonConstraint;
    UIView* _fromSnapshot;
    UIView* _toSnapshot;
    {CGSize="width"d"height"d} _fromSnapshotSize;
    NSMutableArray* _containerViewContraints;
    NSString* _message;
    NSString* _buttonTitle;
    @? _buttonAction;
    unsigned long long _vibrantOptions;
}

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - (id) message;
 - (void) updateConstraints;
 - (void) setMessage:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atitle:(id)bstyle:(unsigned long long)c;
 - (void) setButtonAction:(@?)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atitle:(id)bstyle:(unsigned long long)cincludeBackdrop:(BOOL)d;
 - (BOOL) _hasVibrantButton;
 - (void) _updateViewHierarchy;
 - (BOOL) _hasVibrantText;
 - (id) _vibrantBaseColor;
 - (id) _flatTextColor;
 - (double) _labelAlpha;
 - (void) _actionButtonPressed:(id)a;
 - (id) _buttonBackgroundImageForStyle:(unsigned long long)acontrolState:(unsigned long long)b;
 - (@?) buttonAction;
 - (void) windowWillRotateNotification:(id)a;
 - (void) windowWillAnimateRotateNotification:(id)a;
 - (void) windowDidRotateNotification:(id)a;
 - (unsigned long long) vibrantOptions;
 - (void) setButtonTitle:(id)a;
 - (void) setVibrantOptions:(unsigned long long)a;
 - (id) buttonTitle;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
