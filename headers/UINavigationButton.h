
@interface UINavigationButton : UIButton {

    NSSet* _possibleTitles;
    int _style;
    long long _barStyle;
    UIColor* _navigationBarTintColor;
    {CGSize="width"d"height"d} _boundsAdjustment;
    id _appearanceStorage;
    NSSet* _possibleSystemItems;
    b2 _size;
    b1 _wantsLetterpressContent;
    UIBarButtonItem* _originatingButtonItem;
    UINavigationItem* _originatingNavigationItem;
    BOOL _createdByBarButtonItem;
    BOOL _isFontScaleInvalid;
    BOOL _wantsBlendModeForAccessibilityBackgrounds;
    BOOL __barItemHidden;
    double _minimumWidth;
    double _maximumWidth;
    long long _buttonItemStyle;
    NSDictionary* _stylesForSizingTitles;
    double _fontScaleAdjustment;
    Class _appearanceGuideClass;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} __additionalSelectionInsets;
}
 + (id) defaultFont;
 + (void) _resetRenderingModesForBackgroundImageView:(id)ainBarStyle:(long long)bisEnabled:(BOOL)cwithAccessibilityBackground:(BOOL)dwantsBlendModeForAccessibilityBackgrounds:(BOOL)e;

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (BOOL) _canHandleStatusBarTouchAtLocation:({CGPoint=dd})a;
 - (BOOL) canBecomeFocused;
 - (Class) _appearanceGuideClass;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) _didChangeFromIdiom:(long long)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (id) _scriptingInfo;
 - (void) _setFontScaleAdjustment:(double)a;
 - (void) _updateStyle;
 - (id) initWithTitle:(id)a;
 - (id) _appearanceStorage;
 - (void) _applyBarButtonAppearanceStorage:(id)awithTaggedSelectors:(id)b;
 - (void) _prepareToAppearInNavigationItem:(id)aonLeft:(BOOL)b;
 - (double) _fontScaleAdjustment;
 - (BOOL) _wantsAccessibilityButtonShapes;
 - (void) _accessibilityButtonShapesDidChangeNotification:(id)a;
 - (void) setHighlighted:(BOOL)a;
 - (void) setControlSize:(int)a;
 - (void) setBarStyle:(long long)a;
 - (void) setNavigationBarTintColor:(id)a;
 - (void) _UIAppearance_setTintColor:(id)a;
 - (long long) barStyle;
 - (BOOL) contentsEqualTo:(id)awithStyle:(int)b;
 - (void) _setTintColor:(id)a;
 - (BOOL) _showsAccessibilityBackgroundWhenEnabled;
 - (void) _setWantsBlendModeForAccessibilityBackgrounds:(BOOL)a;
 - (void) _accessibilityButtonShapesParametersDidChange;
 - (BOOL) _hasBaselineAlignedAbsoluteVerticalPosition:(o^d)awithinNavBar:(id)bforSize:({CGSize=dd})c;
 - (double) _backgroundVerticalPositionAdjustmentForBarMetrics:(long long)a;
 - (BOOL) _wantsBlendModeForAccessibilityBackgrounds;
 - (id) _defaultTitleColorForState:(unsigned long long)a;
 - ({CGSize=dd}) _defaultTitleShadowOffsetForState:(unsigned long long)a;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})adeferLayout:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectedIndicatorBounds;
 - (void) _updateTitleForLetterpress;
 - (id) _defaultTitleShadowColorForState:(unsigned long long)a;
 - (void) _updateShadowOffsetWithAttributes:(id)aforState:(unsigned long long)b;
 - (long long) _barButtonItemStyle;
 - (id) _tintColor;
 - (id) _customOrAccessibilityBackgroundImageForState:(unsigned long long)astyle:(long long)bisMini:(BOOL)c;
 - ({UIEdgeInsets=dddd}) _buttonTitleEdgeInsets;
 - (void) _updateContentInsets;
 - (id) _adjustedDefaultTitleFont;
 - (void) _updateTitleColorsForState:(unsigned long long)a;
 - (void) _setTitleFrozen:(BOOL)a;
 - (id) initWithValue:(id)awidth:(double)bstyle:(int)cbarStyle:(long long)dpossibleTitles:(id)epossibleSystemItems:(id)ftintColor:(id)gapplyBezel:(BOOL)hforButtonItemStyle:(long long)i;
 - (id) initWithValue:(id)awidth:(double)bstyle:(int)cbarStyle:(long long)dpossibleTitles:(id)etintColor:(id)f;
 - (id) originatingNavigationItem;
 - (id) originatingButtonItem;
 - (void) _adjustBounds;
 - (int) controlSize;
 - (void) _setBackgroundImage:(id)aforState:(unsigned long long)bstyle:(long long)cbarMetrics:(long long)d;
 - (void) _UIAppearance_setBackgroundImage:(id)aforState:(unsigned long long)bstyle:(long long)cbarMetrics:(long long)d;
 - (void) _UIAppearance_setBackgroundImage:(id)aforState:(unsigned long long)bbarMetrics:(long long)c;
 - (void) _UIAppearance_setTitleTextAttributes:(id)aforState:(unsigned long long)b;
 - (void) _UIAppearance_setBackgroundVerticalPositionAdjustment:(double)aforBarMetrics:(long long)b;
 - (void) _UIAppearance_setTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(long long)b;
 - (void) _setTitleTextAttributes:(id)aforState:(unsigned long long)b;
 - (void) _setTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(long long)b;
 - (void) _setBackgroundVerticalPositionAdjustment:(double)aforBarMetrics:(long long)b;
 - (void) setMinimumWidth:(double)a;
 - (void) setMaximumWidth:(double)a;
 - (void) _setWantsLetterpressContent;
 - (void) _sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
 - ({UIEdgeInsets=dddd}) _pathTitleEdgeInsets;
 - ({UIEdgeInsets=dddd}) _pathImageEdgeInsets;
 - (id) initWithTitle:(id)astyle:(int)b;
 - (id) initWithTitle:(id)apossibleTitles:(id)bstyle:(int)c;
 - (id) initWithImage:(id)awidth:(double)bstyle:(int)capplyBezel:(BOOL)dforBarStyle:(long long)ebuttonItemStyle:(long long)f;
 - (id) initWithImage:(id)awidth:(double)bstyle:(int)c;
 - (id) initWithImage:(id)astyle:(int)b;
 - (void) setOriginatingButtonItem:(id)a;
 - (void) setOriginatingNavigationItem:(id)a;
 - (BOOL) _isModernButton;
 - (void) _setBoundsAdjustment:({CGSize=dd})a;
 - (void) _setBackgroundImage:(id)aforState:(unsigned long long)bbarMetrics:(long long)c;
 - (id) _backgroundImageForState:(unsigned long long)abarMetrics:(long long)b;
 - (id) _titleTextAttributesForState:(unsigned long long)a;
 - (void) _UIAppearance_setBackButtonBackgroundImage:(id)aforState:(unsigned long long)bbarMetrics:(long long)c;
 - (void) _setBackButtonBackgroundImage:(id)aforState:(unsigned long long)bbarMetrics:(long long)c;
 - ({UIOffset=dd}) _titlePositionAdjustmentForBarMetrics:(long long)a;
 - (void) _UIAppearance_setBackButtonTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(long long)b;
 - (void) _setBackButtonTitlePositionAdjustment:({UIOffset=dd})aforBarMetrics:(long long)b;
 - (void) _UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)aforBarMetrics:(long long)b;
 - (void) _setBackButtonBackgroundVerticalPositionAdjustment:(double)aforBarMetrics:(long long)b;
 - (BOOL) _isExternalRoundedRectButton;
 - (id) _externalUnfocusedBorderColor;
 - (double) minimumWidth;
 - (double) maximumWidth;
 - (long long) _buttonItemStyle;
 - (void) _setButtonItemStyle:(long long)a;
 - (id) _stylesForSizingTitles;
 - (void) _setStylesForSizingTitles:(id)a;
 - (BOOL) _createdByBarButtonItem;
 - (void) _setCreatedByBarButtonItem:(BOOL)a;
 - (BOOL) _isFontScaleInvalid;
 - (void) _setFontScaleInvalid:(BOOL)a;
 - (void) _setAppearanceGuideClass:(Class)a;
 - ({UIEdgeInsets=dddd}) _additionalSelectionInsets;
 - (void) _setAdditionalSelectionInsets:({UIEdgeInsets=dddd})a;
 - (BOOL) _barItemHidden;
 - (void) _setBarItemHidden:(BOOL)a;
 - (void) setImage:(id)a;
 - (id) initWithImage:(id)a;
 - (int) style;
 - (id) image;
 - (void) setStyle:(int)a;
 - (void) setEnabled:(BOOL)a;


@end
