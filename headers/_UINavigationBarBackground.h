
@protocol _UIBackdropViewGraphicsQualityChangeDelegate;
@interface _UINavigationBarBackground : _UIBarBackgroundImageView <_UIBackdropViewGraphicsQualityChangeDelegate> {

    UIColor* _barTintColor;
    _UINavigationBarAppearanceStorage* _appearanceStorage;
    UIImageView* _shadowView;
    _UIBackdropView* _adaptiveBackdrop;
    {?="barTranslucence"b3"barStyle"b3"isContainedInPopover"b1"barWantsAdaptiveBackdrop"b1} _navbarBackgroundFlags;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) didMoveToSuperview;
 - (id) _shadowView;
 - (void) setAppearanceStorage:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})abarStyle:(long long)bbarTintColor:(id)cappearance:(id)dbarTranslucence:(long long)e;
 - (id) appearanceStorage;
 - (void) updateBackgroundImage;
 - (void) setBarStyle:(long long)a;
 - (void) setBarWantsAdaptiveBackdrop:(BOOL)a;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a;
 - (void) setBarTintColor:(id)a;
 - (void) _setIsContainedInPopover:(BOOL)a;
 - (id) _currentCustomBackground;
 - (id) _currentCustomBackgroundRespectOversize_legacy:(^B)a;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforceUpdateBackgroundImage:(BOOL)b;
 - (id) barTintColor;
 - (id) _currentCustomBackgroundDedicatedToBarMetrics:(^q)abarPosition:(^q)b;
 - (BOOL) barWantsAdaptiveBackdrop;
 - (void) _setShadowView:(id)a;
 - (id) backdropView:(id)awillChangeToGraphicsQuality:(long long)b;
 - (void) backdropView:(id)adidChangeToGraphicsQuality:(long long)b;
 - (id) _adaptiveBackdrop;
 - (id) _customShadowImageForSearchBar;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
