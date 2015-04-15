
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
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - (void) didMoveToSuperview;
 - (id) _shadowView;
 - (void) setAppearanceStorage:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a barStyle:(long long)b barTintColor:(id)c appearance:(id)d barTranslucence:(long long)e ;
 - (id) appearanceStorage;
 - (void) updateBackgroundImage;
 - (void) setBarStyle:(long long)a ;
 - (void) setBarWantsAdaptiveBackdrop:(BOOL)a ;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a ;
 - (void) setBarTintColor:(id)a ;
 - (void) _setIsContainedInPopover:(BOOL)a ;
 - (id) _currentCustomBackground;
 - (id) _currentCustomBackgroundRespectOversize_legacy:(^B)a ;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a forceUpdateBackgroundImage:(BOOL)b ;
 - (id) barTintColor;
 - (id) _currentCustomBackgroundDedicatedToBarMetrics:(^q)a barPosition:(^q)b ;
 - (BOOL) barWantsAdaptiveBackdrop;
 - (void) _setShadowView:(id)a ;
 - (id) backdropView:(id)a willChangeToGraphicsQuality:(long long)b ;
 - (void) backdropView:(id)a didChangeToGraphicsQuality:(long long)b ;
 - (id) _adaptiveBackdrop;
 - (id) _customShadowImageForSearchBar;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
