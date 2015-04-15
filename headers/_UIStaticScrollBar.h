
@interface _UIStaticScrollBar : UIView {

    @"UIButton" _upButton;
    @"UIButton" _downButton;
    @"UIView" _dividerLine;
    @"NSInvocation" _invocation;
    @"NSArray" _buttonConstraints;
    @"NSArray" _dividerConstraints;
    BOOL _shouldInsetButtons;
    BOOL _isOnLeftSide;
}

 - (void) dealloc;
 - (void) buttonTapped:(id)a;
 - (void) _updateButtonConstraints;
 - (void) _updateDividerConstraints;
 - (BOOL) shouldInsetButtons;
 - (BOOL) isOnLeftSide;
 - (void) setTarget:(id)aforAction:(SEL)b;
 - (void) setShouldInsetButtons:(BOOL)a;
 - (void) setIsOnLeftSide:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) centeringBounds;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
