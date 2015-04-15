
@interface UIPeripheralHostView : UIView {

    i _explicitLayoutCount;
    @"UIKeyboardCornerView" _cornerViewLeft;
    @"UIKeyboardCornerView" _cornerViewRight;
    @"UIKBInputBackdropView" _inputBackdropView;
    @"UIKBInputBackdropView" _inputAccessoryBackdropView;
    @"UIKBRenderConfig" _renderConfig;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (void) didAddSubview:(id)a;
 - (void) _setRenderConfig:(id)a;
 - (i) textEffectsVisibilityLevel;
 - (id) _inheritedRenderConfig;
 - (i) _clipCornersOfView:(id)a;
 - (void) _resizeForKeyplaneSize:({CGSize=dd})asplitWidthsChanged:(BOOL)b;
 - (void) updateBackdropViewForInputAccessoryView:(BOOL)a;
 - (id) cornerViewLeft;
 - (id) cornerViewRight;
 - (void) syncInputViewBackdropToFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) inputBackdropView;
 - (void) syncInputAccessoryViewBackdropToFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) inputAccessoryBackdropView;
 - (void) beginExplicitLayout;
 - (void) endExplicitLayout;
 - (void) _setRenderConfig:(id)aupdateKeyboard:(BOOL)b;
 - (void) _setBaseRenderConfig:(id)a;
 - (BOOL) explicitLayout;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
