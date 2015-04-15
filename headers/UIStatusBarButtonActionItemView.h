
@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {

    UIButton* _button;
    UIButton* _externalButton;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (void) layoutSubviews;
 - (long long) buttonType;
 - (double) updateContentsAndWidth;
 - (void) _pressButton:(id)a ;
 - (BOOL) usesAdvancedActions;
 - (void) _doubleTapButton:(id)a ;
 - (void) _pressAndHoldButton:(id)a ;
 - (id) _createButton;
 - (void) _triggerButtonWithAction:(long long)a ;


@end
