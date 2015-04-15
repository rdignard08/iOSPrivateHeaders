
@interface UIToolbarButton : UIControl {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _hitRect;
    UIView* _info;
    UILabel* _label;
    UIToolbarButtonBadge* _badge;
    _UIPressedIndicatorView* _pressedIndicator;
    long long _barStyle;
    long long _style;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _glowAdjust;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    BOOL _bezel;
    double _minimumWidth;
    double _maximumWidth;
    float _labelHeight;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _infoInsets;
    UIColor* _toolbarTintColor;
    BOOL _isAnimatedTrashButton;
    id _appearanceStorage;
    BOOL _isInTopBar;
    Class _appearanceGuideClass;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} __additionalSelectionInsets;
}
 + (id) _defaultLabelFont;
 + (id) _defaultLabelColor;

 - (id) _info;
 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (BOOL) gestureRecognizerShouldBegin:(id)a ;
 - (BOOL) pointInside:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (BOOL) _canHandleStatusBarTouchAtLocation:({CGPoint=dd})a ;
 - (Class) _appearanceGuideClass;
 - (id) hitTest:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) _applyBarButtonAppearanceStorage:(id)a withTaggedSelectors:(id)b ;
 - (BOOL) _wantsAccessibilityButtonShapes;
 - (void) setHighlighted:(BOOL)a ;
 - (void) setBarStyle:(long long)a ;
 - (void) _UIAppearance_setTintColor:(id)a ;
 - (void) _setTintColor:(id)a ;
 - (BOOL) _showsAccessibilityBackgroundWhenEnabled;
 - (void) _setWantsBlendModeForAccessibilityBackgrounds:(BOOL)a ;
 - (double) _backgroundVerticalPositionAdjustmentForBarMetrics:(long long)a ;
 - (id) _defaultTitleColorForState:(unsigned long long)a ;
 - ({CGSize=dd}) _defaultTitleShadowOffsetForState:(unsigned long long)a ;
 - (id) _defaultTitleShadowColorForState:(unsigned long long)a ;
 - (void) _updateShadowOffsetWithAttributes:(id)a forState:(unsigned long long)b ;
 - (id) _tintColor;
 - (id) _customOrAccessibilityBackgroundImageForState:(unsigned long long)a style:(long long)b isMini:(BOOL)c ;
 - (void) _setBackgroundImage:(id)a forState:(unsigned long long)b style:(long long)c barMetrics:(long long)d ;
 - (void) _UIAppearance_setBackgroundImage:(id)a forState:(unsigned long long)b style:(long long)c barMetrics:(long long)d ;
 - (void) _UIAppearance_setBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (void) _UIAppearance_setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _UIAppearance_setBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) _UIAppearance_setTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - (void) _setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _setTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - (void) _setBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) _setWantsLetterpressContent;
 - (void) _setBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (id) _backgroundImageForState:(unsigned long long)a barMetrics:(long long)b ;
 - (id) _titleTextAttributesForState:(unsigned long long)a ;
 - (void) _UIAppearance_setBackButtonBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (void) _setBackButtonBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - ({UIOffset=dd}) _titlePositionAdjustmentForBarMetrics:(long long)a ;
 - (void) _UIAppearance_setBackButtonTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - (void) _setBackButtonTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - (void) _UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) _setBackButtonBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (BOOL) _createdByBarButtonItem;
 - (void) _setCreatedByBarButtonItem:(BOOL)a ;
 - (void) _setAppearanceGuideClass:(Class)a ;
 - ({UIEdgeInsets=dddd}) _additionalSelectionInsets;
 - (void) _setAdditionalSelectionInsets:({UIEdgeInsets=dddd})a ;
 - (void) _setLastHighlightSuccessful:(BOOL)a ;
 - (BOOL) pointMostlyInside:({CGPoint=dd})a withEvent:(id)b ;
 - (void) _setTouchHasHighlighted:(BOOL)a ;
 - (void) _sizeView:(id)a toPossibleTitles:(id)b pressedTitle:(id)c ;
 - (id) _newButton;
 - (void) _adjustPushButtonForMiniBar:(BOOL)a isChangingBarHeight:(BOOL)b ;
 - (BOOL) _isBordered;
 - (void) _setPressed:(BOOL)a ;
 - (BOOL) _infoIsButton;
 - (void) _positionBadge;
 - (void) _badgeAnimationDidStop:(id)a finished:(id)b ;
 - (void) _adjustToolbarButtonInfo;
 - (BOOL) isAnimatedTrashButton;
 - (BOOL) _isBorderedOtherThanAccessibility;
 - (BOOL) _shouldApplyPadding;
 - (void) _animateImage:(float)a withButtonBar:(id)b target:(id)c didFinishSelector:(SEL)d ;
 - (BOOL) _useSilverLook;
 - (void) _adjustToolbarButtonInfoTintColorHasChanged:(BOOL)a ;
 - (void) _updateInfoTextColorsForState:(unsigned long long)a ;
 - (void) _setInTopBar:(BOOL)a ;
 - (id) initWithImage:(id)a pressedImage:(id)b label:(id)c labelHeight:(float)d withBarStyle:(long long)e withStyle:(long long)f withInsets:({UIEdgeInsets=dddd})g possibleTitles:(id)h possibleSystemItems:(id)i withToolbarTintColor:(id)j bezel:(BOOL)k imageInsets:({UIEdgeInsets=dddd})l glowInsets:({UIEdgeInsets=dddd})m landscape:(BOOL)n ;
 - (void) setSizesToFitImage:(BOOL)a ;
 - (void) _setButtonBarHitRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _buttonBarHitRect;
 - (void) _showPressedIndicator:(BOOL)a ;
 - (void) setUseSelectedImage:(BOOL)a ;
 - (void) _setBadgeValue:(id)a ;
 - (void) _setBadgeAnimated:(BOOL)a ;
 - (void) _setInfoWidth:(float)a ;
 - (void) _setInfoExtremityWidth:(float)a isMin:(BOOL)b ;
 - (void) _setInfoFlexibleWidth:(BOOL)a ;
 - (BOOL) _canGetPadding;
 - (double) _paddingForLeft:(BOOL)a ;
 - (void) _setOn:(BOOL)a ;
 - (BOOL) _isOn;
 - (void) _animateImage:(float)a withButtonBar:(id)b ;
 - (void) _setBarHeight:(float)a ;
 - (BOOL) _useBarHeight;
 - (void) setToolbarTintColor:(id)a ;
 - (void) setAnimatedTrashButton:(BOOL)a ;
 - (void) setImage:(id)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setEnabled:(BOOL)a ;


@end
