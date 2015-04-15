
@protocol _UIBackdropViewGraphicsQualityChangeDelegate;
@interface _UINavigationPaletteBackground : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {

    UIColor _barTintColor;
    UIImageView _shadowView;
    _UINavigationControllerPalette _palette;
    UINavigationBar _bar;
    _UIBackdropView _adaptiveBackdrop;
    {?="barTranslucence"b3"barStyle"b3"paletteWantsAdaptiveBackdrop"b1} _navbarFlags;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) didMoveToSuperview;
 - (id) _shadowView;
 - (id) initWithNavigationBar:(id)aforPalette:(id)b;
 - (void) setBarStyle:(long long)a;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a;
 - (void) setBarTintColor:(id)a;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforceUpdateBackgroundImage:(BOOL)b;
 - (id) barTintColor;
 - (void) _setShadowView:(id)a;
 - (id) backdropView:(id)awillChangeToGraphicsQuality:(long long)b;
 - (void) backdropView:(id)adidChangeToGraphicsQuality:(long long)b;
 - (void) updateBackgroundView;
 - (void) _syncWithBarStyles;
 - (BOOL) paletteWantsAdaptiveBackdrop;
 - (void) setPaletteWantsAdaptiveBackdrop:(BOOL)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
