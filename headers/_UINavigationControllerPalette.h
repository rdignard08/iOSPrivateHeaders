
@interface _UINavigationControllerPalette : UIView {

    {?="isAttached"b1"attachmentIsChanging"b1"restartPaletteTransitionIfNecessary"b1"pinned"b1"pinningBarShadowIsHidden"b1"paletteShadowIsHidden"b1} _paletteFlags;
    BOOL __paletteOverridesPinningBar;
    BOOL _paletteIsAboveBar;
    BOOL _visibleWhenPinningBarIsHidden;
    BOOL __palettePinningBarHidden;
    UIView* __backgroundView;
    UINavigationController* _navController;
    unsigned long long _boundaryEdge;
    UIViewController* __unpinnedController;
    id __pinningBar;
    NSArray* __constraints;
    NSArray* __backgroundConstraints;
    {CGSize="width"d"height"d} __size;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _preferredContentInsets;
}

 - (void) dealloc;
 - (id) _backgroundView;
 - (void) _setVisualAltitude:(double)a ;
 - (void) _setVisualAltitudeBias:({CGSize=dd})a ;
 - (void) didMoveToSuperview;
 - (void) _setBackgroundView:(id)a ;
 - ({CGSize=dd}) _size;
 - (BOOL) _paletteOverridesPinningBar;
 - (BOOL) paletteShadowIsHidden;
 - (void) _updateBackgroundView;
 - (BOOL) isAttached;
 - (BOOL) isVisibleWhenPinningBarIsHidden;
 - (BOOL) _isPalettePinningBarHidden;
 - (unsigned long long) boundaryEdge;
 - (BOOL) paletteIsHidden;
 - (void) _setTopConstraintConstant:(double)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a isAnimating:(BOOL)b ;
 - (void) _setLeftConstraintConstant:(double)a ;
 - (void) _setPalettePinningBarHidden:(BOOL)a ;
 - (BOOL) isPinned;
 - (void) _resetConstraintConstants:(double)a ;
 - (BOOL) _restartPaletteTransitionIfNecessary;
 - (id) _constraints;
 - (void) _configurePaletteConstraintsForBoundary;
 - ({UIEdgeInsets=dddd}) preferredContentInsets;
 - (id) _initWithNavigationController:(id)a forEdge:(unsigned long long)b ;
 - (void) _setSize:({CGSize=dd})a ;
 - (void) _setPinningBar:(id)a ;
 - (void) _setAttached:(BOOL)a didComplete:(BOOL)b ;
 - (BOOL) pinningBarShadowIsHidden;
 - (id) _pinningBar;
 - (void) _setRestartPaletteTransitionIfNecessary:(BOOL)a ;
 - (BOOL) _attachmentIsChanging;
 - (id) navController;
 - (void) setVisibleWhenPinningBarIsHidden:(BOOL)a ;
 - (void) setPinningBarShadowIsHidden:(BOOL)a ;
 - (void) _setBackgroundConstraints:(id)a ;
 - (void) _setConstraints:(id)a ;
 - (void) _disableConstraints;
 - (void) _enableConstraints;
 - (void) _resetHeightConstraintConstant;
 - (void) _configureConstraintsForBackground:(id)a ;
 - (void) _setupBackgroundViewIfNecessary;
 - (void) _setAttachmentIsChanging:(BOOL)a ;
 - (void) setPaletteShadowIsHidden:(BOOL)a ;
 - (void) _setPaletteOverridesPinningBar:(BOOL)a ;
 - (BOOL) paletteIsAboveBar;
 - (void) setPaletteIsAboveBar:(BOOL)a ;
 - (void) setPreferredContentInsets:({UIEdgeInsets=dddd})a ;
 - (id) _unpinnedController;
 - (void) set_unpinnedController:(id)a ;
 - (id) _backgroundConstraints;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setPinned:(BOOL)a ;


@end
