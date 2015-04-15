
@interface UIKeyboardLayoutDictation : UIKeyboardLayout {

    @"UIKBBackgroundView" _backgroundView;
    @"UIKBTree" _keyplane;
}
 + (id) activeInstance;
 + (d) landscapeHeight;
 + (d) portraitHeight;

 - (void) layoutSubviews;
 - (void) setRenderConfig:(id)a;
 - (i) _clipCornersOfView:(id)a;
 - ({CGSize=dd}) dragGestureSize;
 - (id) currentKeyplane;
 - (void) showKeyboardWithInputTraits:(id)ascreenTraits:(id)bsplitTraits:(id)c;
 - (BOOL) shouldFadeFromLayout;
 - (BOOL) shouldFadeToLayout;
 - (BOOL) usesAutoShift;
 - (void) setupBackgroundViewForNewSplitTraits:(id)a;
 - ({CGSize=dd}) splitLeftSize;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) visible;


@end
