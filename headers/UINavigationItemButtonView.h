
@protocol UIGestureRecognizerDelegate;
@interface UINavigationItemButtonView : UINavigationItemView <UIGestureRecognizerDelegate> {

    q _style;
    BOOL _pressed;
    @"_UIBarButtonItemAppearanceStorage" _appearanceStorage;
    BOOL _customBackgroundImageChangedToOrFromNil;
    @"UIImageView" _backgroundImageView;
    @"UIImageView" _imageView;
    BOOL _wantsBlendModeForAccessibilityBackgrounds;
    Q _abbreviatedTitleIndex;
}

 - (id) title;
 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (void) _focusedViewDidChange:(id)a;
 - (BOOL) _canDrawContent;
 - (void) traitCollectionDidChange:(id)a;
 - (BOOL) canBecomeFocused;
 - (Class) _appearanceGuideClass;
 - (void) tintColorDidChange;
 - (void) _focusedViewWillChange:(id)a;
 - (void) _didChangeFromIdiom:(q)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (id) _scriptingInfo;
 - (Q) _abbreviatedTitleIndex;
 - (void) _setAbbreviatedTitleIndex:(Q)a;
 - (void) setPressed:(BOOL)a;
 - (id) _appearanceStorage;
 - (void) _applyBarButtonAppearanceStorage:(id)awithTaggedSelectors:(id)b;
 - (BOOL) _wantsAccessibilityButtonShapes;
 - (id) _backButtonBackgroundImageForState:(Q)abarMetrics:(q)b;
 - (void) _accessibilityButtonShapesDidChangeNotification:(id)a;
 - (BOOL) customBackgroundImageChangedToOrFromNil;
 - (BOOL) _suppressesBackIndicatorView;
 - (void) setPressed:(BOOL)ainitialPress:(BOOL)b;
 - (BOOL) pressed;
 - (void) _UIAppearance_setTintColor:(id)a;
 - (void) _setTintColor:(id)a;
 - (BOOL) _showsAccessibilityBackgroundWhenEnabled;
 - (void) _setWantsBlendModeForAccessibilityBackgrounds:(BOOL)a;
 - (void) _accessibilityButtonShapesParametersDidChange;
 - (void) backIndicatorViewHasRespondedToCustomBackgroundImageChange;
 - (void) setStyle:(q)aanimated:(BOOL)b;
 - (BOOL) hasCustomBackgroundImage;
 - (id) backgroundImageView;
 - (id) _defaultFont;
 - (d) _backgroundVerticalPositionAdjustmentForBarMetrics:(q)a;
 - (BOOL) _wantsBlendModeForAccessibilityBackgrounds;
 - (id) _tintColor;
 - (void) _setBackgroundImage:(id)aforState:(Q)bstyle:(q)cbarMetrics:(q)d;
 - (void) _UIAppearance_setBackgroundImage:(id)aforState:(Q)bstyle:(q)cbarMetrics:(q)d;
 - (void) _UIAppearance_setBackgroundImage:(id)aforState:(Q)bbarMetrics:(q)c;
 - (void) _UIAppearance_setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _UIAppearance_setBackgroundVerticalPositionAdjustment:(d)aforBarMetrics:(q)b;
 - (void) _UIAppearance_setTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(q)b;
 - (void) _setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _setTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(q)b;
 - (void) _setBackgroundVerticalPositionAdjustment:(d)aforBarMetrics:(q)b;
 - (void) _setBackgroundImage:(id)aforState:(Q)bbarMetrics:(q)c;
 - (id) _titleTextAttributesForState:(Q)a;
 - (void) _UIAppearance_setBackButtonBackgroundImage:(id)aforState:(Q)bbarMetrics:(q)c;
 - (void) _setBackButtonBackgroundImage:(id)aforState:(Q)bbarMetrics:(q)c;
 - (void) _UIAppearance_setBackButtonTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(q)b;
 - (void) _setBackButtonTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(q)b;
 - (void) _UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(d)aforBarMetrics:(q)b;
 - (void) _setBackButtonBackgroundVerticalPositionAdjustment:(d)aforBarMetrics:(q)b;
 - (BOOL) _useSilverLookForBarStyle:(q)a;
 - (id) _currentTextColorForBarStyle:(q)a;
 - ({CGSize=dd}) _currentTextShadowOffsetForBarStyle:(q)a;
 - (id) _currentTextShadowColorForBarStyle:(q)a;
 - (d) _titleYAdjustmentCustomization;
 - (id) _currentCustomBackgroundNeedsDarkening:(^B)a;
 - (void) _drawBackground_legacy;
 - (void) _styleAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (d) _backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(q)a;
 - (void) _installBackSelectGestureRecognizer;
 - (void) _uninstallBackSelectGestureRecognizer;
 - (void) _backSelectGestureChanged:(id)a;
 - ({UIOffset=dd}) _backButtonTitlePositionAdjustmentForBarMetrics:(q)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) imageSize;
 - (id) image;
 - (void) setStyle:(q)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end