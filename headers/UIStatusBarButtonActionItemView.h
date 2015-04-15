
@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {

    @"UIButton" _button;
    @"UIButton" _externalButton;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (q) buttonType;
 - (d) updateContentsAndWidth;
 - (void) _pressButton:(id)a;
 - (BOOL) usesAdvancedActions;
 - (void) _doubleTapButton:(id)a;
 - (void) _pressAndHoldButton:(id)a;
 - (id) _createButton;
 - (void) _triggerButtonWithAction:(q)a;


@end
