
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
 - (void) setTitle:(id)a ;
 - (void) dealloc;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a ;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (BOOL) _canHandleStatusBarTouchAtLocation:({CGPoint=dd})a ;
 - (BOOL) canBecomeFocused;
 - (Class) _appearanceGuideClass;
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - (void) _didChangeFromIdiom:(long long)a onScreen:(id)b traverseHierarchy:(BOOL)c ;
 - (id) _scriptingInfo;
 - (void) _setFontScaleAdjustment:(double)a ;
 - (void) _updateStyle;
 - (id) initWithTitle:(id)a ;
 - (id) _appearanceStorage;
 - (void) _applyBarButtonAppearanceStorage:(id)a withTaggedSelectors:(id)b ;
 - (void) _prepareToAppearInNavigationItem:(id)a onLeft:(BOOL)b ;
 - (double) _fontScaleAdjustment;
 - (BOOL) _wantsAccessibilityButtonShapes;
 - (void) _accessibilityButtonShapesDidChangeNotification:(id)a ;
 - (void) setHighlighted:(BOOL)a ;
 - (void) setControlSize:(int)a ;
 - (void) setBarStyle:(long long)a ;
 - (void) setNavigationBarTintColor:(id)a ;
 - (void) _UIAppearance_setTintColor:(id)a ;
 - (long long) barStyle;
 - (BOOL) contentsEqualTo:(id)a withStyle:(int)b ;
 - (void) _setTintColor:(id)a ;
 - (BOOL) _showsAccessibilityBackgroundWhenEnabled;
 - (void) _setWantsBlendModeForAccessibilityBackgrounds:(BOOL)a ;
 - (void) _accessibilityButtonShapesParametersDidChange;
 - (BOOL) _hasBaselineAlignedAbsoluteVerticalPosition:(o^d)a withinNavBar:(id)b forSize:({CGSize=dd})c ;
 - (double) _backgroundVerticalPositionAdjustmentForBarMetrics:(long long)a ;
 - (BOOL) _wantsBlendModeForAccessibilityBackgrounds;
 - (id) _defaultTitleColorForState:(unsigned long long)a ;
 - ({CGSize=dd}) _defaultTitleShadowOffsetForState:(unsigned long long)a ;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a deferLayout:(BOOL)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectedIndicatorBounds;
 - (void) _updateTitleForLetterpress;
 - (id) _defaultTitleShadowColorForState:(unsigned long long)a ;
 - (void) _updateShadowOffsetWithAttributes:(id)a forState:(unsigned long long)b ;
 - (long long) _barButtonItemStyle;
 - (id) _tintColor;
 - (id) _customOrAccessibilityBackgroundImageForState:(unsigned long long)a style:(long long)b isMini:(BOOL)c ;
 - ({UIEdgeInsets=dddd}) _buttonTitleEdgeInsets;
 - (void) _updateContentInsets;
 - (id) _adjustedDefaultTitleFont;
 - (void) _updateTitleColorsForState:(unsigned long long)a ;
 - (void) _setTitleFrozen:(BOOL)a ;
 - (id) initWithValue:(id)a width:(double)b style:(int)c barStyle:(long long)d possibleTitles:(id)e possibleSystemItems:(id)f tintColor:(id)g applyBezel:(BOOL)h forButtonItemStyle:(long long)i ;
 - (id) initWithValue:(id)a width:(double)b style:(int)c barStyle:(long long)d possibleTitles:(id)e tintColor:(id)f ;
 - (id) originatingNavigationItem;
 - (id) originatingButtonItem;
 - (void) _adjustBounds;
 - (int) controlSize;
 - (void) _setBackgroundImage:(id)a forState:(unsigned long long)b style:(long long)c barMetrics:(long long)d ;
 - (void) _UIAppearance_setBackgroundImage:(id)a forState:(unsigned long long)b style:(long long)c barMetrics:(long long)d ;
 - (void) _UIAppearance_setBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (void) _UIAppearance_setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _UIAppearance_setBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) _UIAppearance_setTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - (void) _setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _setTitlePositionAdjustment:({UIOffset=dd})a forBarMetrics:(long long)b ;
 - (void) _setBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) setMinimumWidth:(double)a ;
 - (void) setMaximumWidth:(double)a ;
 - (void) _setWantsLetterpressContent;
 - (void) _sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
 - ({UIEdgeInsets=dddd}) _pathTitleEdgeInsets;
 - ({UIEdgeInsets=dddd}) _pathImageEdgeInsets;
 - (id) initWithTitle:(id)a style:(int)b ;
 - (id) initWithTitle:(id)a possibleTitles:(id)b style:(int)c ;
 - (id) initWithImage:(id)a width:(double)b style:(int)c applyBezel:(BOOL)d forBarStyle:(long long)e buttonItemStyle:(long long)f ;
 - (id) initWithImage:(id)a width:(double)b style:(int)c ;
 - (id) initWithImage:(id)a style:(int)b ;
 - (void) setOriginatingButtonItem:(id)a ;
 - (void) setOriginatingNavigationItem:(id)a ;
 - (BOOL) _isModernButton;
 - (void) _setBoundsAdjustment:({CGSize=dd})a ;
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
 - (BOOL) _isExternalRoundedRectButton;
 - (id) _externalUnfocusedBorderColor;
 - (double) minimumWidth;
 - (double) maximumWidth;
 - (long long) _buttonItemStyle;
 - (void) _setButtonItemStyle:(long long)a ;
 - (id) _stylesForSizingTitles;
 - (void) _setStylesForSizingTitles:(id)a ;
 - (BOOL) _createdByBarButtonItem;
 - (void) _setCreatedByBarButtonItem:(BOOL)a ;
 - (BOOL) _isFontScaleInvalid;
 - (void) _setFontScaleInvalid:(BOOL)a ;
 - (void) _setAppearanceGuideClass:(Class)a ;
 - ({UIEdgeInsets=dddd}) _additionalSelectionInsets;
 - (void) _setAdditionalSelectionInsets:({UIEdgeInsets=dddd})a ;
 - (BOOL) _barItemHidden;
 - (void) _setBarItemHidden:(BOOL)a ;
 - (void) setImage:(id)a ;
 - (id) initWithImage:(id)a ;
 - (int) style;
 - (id) image;
 - (void) setStyle:(int)a ;
 - (void) setEnabled:(BOOL)a ;


@end
