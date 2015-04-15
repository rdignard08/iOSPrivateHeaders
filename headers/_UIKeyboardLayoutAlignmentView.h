
@interface _UIKeyboardLayoutAlignmentView : UIView {

    NSNotification* _keyboardChangeNotificationForUpdateConstraints;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} lastKnownKeyboardRect;
    NSLayoutConstraint* bottomConstraint;
    NSLayoutConstraint* widthConstraint;
    NSLayoutConstraint* heightConstraint;
}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) willMoveToWindow:(id)a;
 - (void) updateConstraints;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameInBoundsForKeyboardFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _updateConstraintsToMatchKeyboardFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _keyboardChanged:(id)a;
 - (void) _removeConstraints;
 - (void) _addConstraints;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
