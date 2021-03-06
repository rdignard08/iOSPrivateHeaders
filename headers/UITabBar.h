
@protocol _UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView;
@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView> {

    UIView* _customizeView;
    _UITabBarBackgroundView* _backgroundView;
    _UIBackdropView* _adaptiveBackdrop;
    UIView* _shadowView;
    <UITabBarDelegate>* _delegate;
    NSArray* _items;
    UITabBarItem* _selectedItem;
    NSArray* _customizationItems;
    long long _barOrientation;
    {?="alertShown"b1"wasEnabled"b1"customized"b1"downButtonSentAction"b1"isLocked"b1"backgroundIsPattern"b1"hasCustomBackgroundView"b1"barStyle"b3"barTranslucence"b3"backgroundNeedsUpdate"b1} _tabBarFlags;
    NSArray* _buttonItems;
    ^{__CFArray=} _hiddenItems;
    _UITabBarAppearanceStorage* _appearanceStorage;
    BOOL _dividerImagesChangeWithSelection;
    BOOL _dividerImagesAreInvalid;
    BOOL _hidesShadow;
    BOOL _showsHighlightedState;
    double _nextSelectionSlideDuration;
    NSMutableArray* _dividerImageViews;
    long long _itemPositioning;
    double _itemDimension;
    double _itemSpacing;
    long long _barMetrics;
    long long _imageStyle;
    long long _tabBarSizing;
    UIView* _accessoryView;
    NSString* _backdropViewLayerGroupName;
}
 + (void) _initializeForIdiom:(long long)a;
 + (id) _unselectedTabTintColorForView:(id)a;
 + (float) _buttonGap;
 + (id) _tabBarForView:(id)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) _populateArchivedSubviews:(id)a ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a ;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (id) _backgroundView;
 - (void) setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) _setVisualAltitude:(double)a ;
 - (void) _setVisualAltitudeBias:({CGSize=dd})a ;
 - (BOOL) isTranslucent;
 - (BOOL) isLocked;
 - (id) preferredFocusedItem;
 - (BOOL) _canDrawContent;
 - (void) setTintColor:(id)a ;
 - (BOOL) canBecomeFocused;
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - (id) hitTest:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) _didChangeFromIdiom:(long long)a onScreen:(id)b traverseHierarchy:(BOOL)c ;
 - (BOOL) _subclassImplementsDrawRect;
 - (id) backgroundImage;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a ;
 - (id) _appearanceStorage;
 - (id) _shadowView;
 - (void) _setBackgroundView:(id)a ;
 - (id) _effectiveBarTintColor;
 - (void) _updateBackgroundImage;
 - (void) setItems:(id)a animated:(BOOL)b ;
 - (id) items;
 - (void) setLocked:(BOOL)a ;
 - (void) addConstraint:(id)a ;
 - (void) removeConstraint:(id)a ;
 - (void) setBarStyle:(long long)a ;
 - (BOOL) _wantsAdaptiveBackdrop;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a ;
 - (void) setBarTintColor:(id)a ;
 - (void) _accessibilityButtonShapesParametersDidChange;
 - (void) _setBackdropViewLayerGroupName:(id)a ;
 - (BOOL) _hidesShadow;
 - (void) _setHidesShadow:(BOOL)a ;
 - (id) barTintColor;
 - (id) _backdropViewLayerGroupName;
 - (id) _accessoryView;
 - (id) backdropView:(id)a willChangeToGraphicsQuality:(long long)b ;
 - (void) backdropView:(id)a didChangeToGraphicsQuality:(long long)b ;
 - (void) _setAccessoryView:(id)a ;
 - (BOOL) _isTranslucent;
 - (void) _setBarOrientation:(long long)a ;
 - (void) setSelectedItem:(id)a ;
 - (void) beginCustomizingItems:(id)a ;
 - (BOOL) isCustomizing;
 - (void) setBackgroundImage:(id)a ;
 - (void) _sendAction:(id)a withEvent:(id)b ;
 - (void) setBadgeValue:(id)a forButton:(int)b ;
 - (void) setBadgeGlyph:(id)a forButton:(int)b ;
 - (void) setBadgeAnimated:(BOOL)a forButton:(int)b ;
 - (id) buttonItems;
 - (void) setButtonItems:(id)a ;
 - (void) _cleanupAdaptiveBackdrop;
 - (void) _buttonDownDelayed:(id)a ;
 - (void) _buttonDown:(id)a ;
 - (void) _buttonUp:(id)a ;
 - (void) _buttonCancel:(id)a ;
 - (void) _setDividerImage:(id)a forLeftButtonState:(unsigned long long)b rightButtonState:(unsigned long long)c ;
 - (id) _dividerImageForLeftButtonState:(unsigned long long)a rightButtonState:(unsigned long long)b ;
 - (id) selectionIndicatorImage;
 - (void) setSelectionIndicatorImage:(id)a ;
 - (id) selectedImageTintColor;
 - (void) setSelectedImageTintColor:(id)a ;
 - (long long) _tabBarSizing;
 - (BOOL) _showsHighlightedState;
 - (long long) _barMetrics;
 - (void) _setShowsHighlightedState:(BOOL)a ;
 - (void) _configureTabBarReplacingItem:(id)a withNewItem:(id)b dragging:(BOOL)c swapping:(BOOL)d ;
 - (void) _positionTabBarButtons:(id)a ignoringItem:(id)b ;
 - (void) _setBackgroundImage:(id)a ;
 - (void) _setSelectionIndicatorImage:(id)a ;
 - (void) _setLabelFont:(id)a ;
 - (void) _setLabelTextColor:(id)a selectedTextColor:(id)b ;
 - (void) _setLabelShadowColor:(id)a ;
 - (void) _setLabelShadowOffset:({CGSize=dd})a ;
 - (void) _setBackgroundNeedsUpdate:(BOOL)a ;
 - (void) setItemWidth:(double)a ;
 - (double) itemWidth;
 - (void) setItemSpacing:(double)a ;
 - (double) itemSpacing;
 - (void) _setBarMetrics:(long long)a ;
 - (void) _setImageStyle:(long long)a ;
 - (void) _accessibilityButtonShapesEnabledDidChangeNotification:(id)a ;
 - (void) _doCommonTabBarInit;
 - (id) _topmostDividerImageView;
 - (void) _invalidateDividerImages;
 - (void) _updateDividerImagesIfNecessary;
 - (void) _animateSelectionChangeFromView:(id)a toView:(id)b duration:(double)c ;
 - (void) _showItemsAnimated:(BOOL)a ;
 - (long long) _imageStyle;
 - (void) _finishSetItems:(id)a finished:(id)b context:(id)c ;
 - (void) _hideItemsAnimated:(BOOL)a ;
 - (long long) _effectiveBarOrientation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _tabAreaLayoutBounds;
 - (BOOL) _backgroundNeedsUpdate;
 - (void) _customizeWithAvailableItems:(id)a ;
 - (void) _dismissCustomizeSheet:(BOOL)a ;
 - (id) selectedItem;
 - (void) _updateTintedImages:(id)a selected:(BOOL)b ;
 - (void) _effectiveBarTintColorDidChange;
 - (void) _setTabBarSizing:(long long)a ;
 - (void) _setTabButtonWidth:(double)a ;
 - (double) _tabButtonWidth;
 - (void) _setInterTabButtonSpacing:(double)a ;
 - (double) _interTabButtonSpacing;
 - (long long) _barOrientation;
 - (BOOL) endCustomizingAnimated:(BOOL)a ;
 - (void) _makeCurrentButtonFirstResponder;
 - (double) _nextSelectionSlideDuration;
 - (void) _setNextSelectionSlideDuration:(double)a ;
 - (BOOL) _dividerImagesChangeWithSelection;
 - (void) _setDividerImagesChangeWithSelection:(BOOL)a ;
 - (BOOL) _dividerImagesAreInvalid;
 - (void) _setDividerImagesAreInvalid:(BOOL)a ;
 - (id) _dividerImageViews;
 - (void) _setDividerImageViews:(id)a ;
 - (long long) itemPositioning;
 - (void) setItemPositioning:(long long)a ;
 - (void) _tabBarFinishedAnimating;
 - (void) dismissCustomizeSheet:(BOOL)a ;
 - (void) _alertWillShow:(BOOL)a duration:(float)b ;
 - (void) _alertDidHide;
 - (void) _adjustButtonSelection:(id)a ;
 - (void) _finishCustomizeAnimation:(id)a ;
 - (void) _customizeDoneButtonAction:(id)a ;
 - (void) _updateAppearanceCustomizationIfNecessaryForItem:(id)a ;
 - (void) _configureItems:(id)a ;
 - (BOOL) _isHidden:(id)a ;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (double) _autolayoutSpacingAtEdge:(int)a inContainer:(id)b ;
 - (double) _autolayoutSpacingAtEdge:(int)a nextToNeighbor:(id)b ;
 - (BOOL) _hasCustomAutolayoutNeighborSpacing;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setAutoresizingMask:(unsigned long long)a ;
 - (void) setItems:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
