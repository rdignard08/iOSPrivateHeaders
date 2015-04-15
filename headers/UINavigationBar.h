
@protocol UIGestureRecognizerDelegate, _UIShadowedView, _UIBasicAnimationFactory, UIStatusBarTinting, _UIBarPositioningInternal, NSCoding, UIBarPositioning;
@interface UINavigationBar : UIView <UIGestureRecognizerDelegate, _UIShadowedView, _UIBasicAnimationFactory, UIStatusBarTinting, _UIBarPositioningInternal, NSCoding, UIBarPositioning> {

    NSMutableArray _itemStack;
    double _rightMargin;
    unsigned int _state;
    id _delegate;
    UIView _backgroundView;
    UIView _titleView;
    NSArray _leftViews;
    NSArray _rightViews;
    UIView _prompt;
    UIView _accessoryView;
    UIColor _barTintColor;
    id _appearanceStorage;
    id _currentAlert;
    {?="animate"b1"animationDisabledCount"b10"transitioningBarStyle"b1"newBarStyle"b3"transitioningToTranslucent"b1"barStyle"b3"barTranslucence"b3"disableLayout"b1"backPressed"b1"animatePromptChange"b1"pendingHideBackButton"b1"titleAutosizesToFit"b1"usingNewAPI"b1"forceFullHeightInLandscape"b1"isLocked"b1"shouldUpdatePromptAfterTransition"b1"crossfadeItems"b1"autoAdjustTitle"b1"isContainedInPopover"b1"needsDrawRect"b1"animationCleanupCancelled"b1"layoutInProgress"b1"dynamicDuration"b1"isInteractive"b1"cancelledTransition"b1"animationCount"b4"backgroundLayoutNeedsUpdate"b1} _navbarFlags;
    UISwipeGestureRecognizer _popSwipeGestureRecognizer;
    UIImageView _backIndicatorView;
    NSMutableArray _slideTransitionClippingViews;
    _UIViewControllerTransitionContext _navControllerAnimatingContext;
    BOOL _needsUpdateBackIndicatorImage;
    BOOL _wantsLetterpressContent;
    BOOL __condensed;
    long long _barPosition;
    double _requestedMaxBackButtonWidth;
    NSString _backdropViewLayerGroupName;
    NSMutableArray __animationIds;
}
 + ({CGSize=dd}) defaultSize;
 + (void) _initializeForIdiom:(long long)a;
 + (id) _bottomColorForBackgroundImage:(id)aviewSize:({CGSize=dd})b;
 + (id) _statusBarBaseTintColorForStyle:(long long)atranslucent:(BOOL)btintColor:(id)cbackgroundImage:(id)dviewSize:({CGSize=dd})e;
 + (id) _statusBarBaseTintColorForStyle:(long long)atranslucent:(BOOL)btintColor:(id)c;
 + ({CGSize=dd}) defaultSizeWithPromptForOrientation:(long long)a;
 + ({CGSize=dd}) defaultSizeForOrientation:(long long)a;
 + (BOOL) _useCustomBackButtonAction;
 + ({CGSize=dd}) defaultSizeWithPrompt;
 + (id) defaultPromptFont;
 + (void) setDefaultAnimationDuration:(double)a;
 + (void) _setUseCustomBackButtonAction:(BOOL)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) _backgroundView;
 - (id) _basicAnimationForView:(id)awithKeyPath:(id)b;
 - (id) _timingFunctionForAnimationInView:(id)awithKeyPath:(id)b;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) _hasBackButton;
 - (void) setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _setVisualAltitude:(double)a;
 - (void) _setVisualAltitudeBias:({CGSize=dd})a;
 - (id) _statusBarTintColor;
 - (BOOL) isTranslucent;
 - (BOOL) isLocked;
 - (id) preferredFocusedItem;
 - (BOOL) _canHandleStatusBarTouchAtLocation:({CGPoint=dd})a;
 - (void) setCenter:({CGPoint=dd})a;
 - (BOOL) _canDrawContent;
 - (void) invalidateIntrinsicContentSize;
 - (void) setTintColor:(id)a;
 - (BOOL) canBecomeFocused;
 - (void) tintColorDidChange;
 - (void) _intrinsicContentSizeInvalidatedForChildView:(id)a;
 - (void) _willMoveToWindow:(id)a;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) didAddSubview:(id)a;
 - (void) disableAnimation;
 - (void) enableAnimation;
 - (id) hitTest:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) _didChangeFromIdiom:(long long)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (BOOL) _subclassImplementsDrawRect;
 - (id) backgroundImageForBarPosition:(long long)abarMetrics:(long long)b;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a;
 - (id) backIndicatorImage;
 - (void) setBackIndicatorImage:(id)a;
 - (id) backIndicatorTransitionMaskImage;
 - (void) setBackIndicatorTransitionMaskImage:(id)a;
 - (BOOL) _deferShadowToSearchBar;
 - (id) topItem;
 - (id) backItem;
 - (id) _appearanceStorage;
 - (void) _updateTitleView;
 - (void) updatePrompt;
 - (void) _setLeftViews:(id)arightViews:(id)b;
 - (void) showBackButton:(BOOL)aanimated:(BOOL)b;
 - (BOOL) _isAlwaysHidden;
 - (BOOL) isMinibar;
 - (void) setTitleView:(id)a;
 - (id) prompt;
 - (void) setPrompt:(id)a;
 - (id) _shadowView;
 - (void) setBackgroundImage:(id)aforBarMetrics:(long long)b;
 - (void) _applySPIAppearanceToButtons;
 - (void) _setButtonItemTextColor:(id)ashadowColor:(id)bforState:(unsigned long long)c;
 - (void) _setBackgroundView:(id)a;
 - (double) _shadowAlpha;
 - (void) _setShadowAlpha:(double)a;
 - (void) _setBackgroundImage:(id)amini:(id)b;
 - (void) _setButtonBackgroundImage:(id)amini:(id)bforStates:(unsigned long long)c;
 - (void) _setBackButtonBackgroundImage:(id)amini:(id)bforStates:(unsigned long long)c;
 - (void) _setButtonItemTextColor:(id)ashadowColor:(id)b;
 - (void) _setPressedButtonItemTextColor:(id)ashadowColor:(id)b;
 - (void) _setButtonTextShadowOffset:({CGSize=dd})a;
 - (void) _setReversesButtonTextShadowOffsetWhenPressed:(BOOL)a;
 - (id) _backgroundViewForPalette:(id)a;
 - (void) _palette:(id)aisAttaching:(BOOL)bdidComplete:(BOOL)c;
 - (long long) _currentBarStyle;
 - (void) _updateNavigationBarItemsForStyle:(long long)a;
 - (void) _setNeedsUpdateBackIndicatorImage:(BOOL)a;
 - (void) _updateBackIndicatorImage;
 - (void) _updateBackgroundColor;
 - (id) _effectiveBarTintColor;
 - (void) _effectiveBarTintColorDidChangeWithPreviousColor:(id)a;
 - (void) _propagateEffectiveBarTintColorWithPreviousColor:(id)a;
 - (void) _tintViewAppearanceDidChange;
 - (void) _updatePaletteBackgroundIfNecessary;
 - (void) setBackgroundImage:(id)aforBarPosition:(long long)bbarMetrics:(long long)c;
 - (void) _updateBackgroundImage;
 - (long long) _activeBarMetrics;
 - (id) currentBackButton;
 - (long long) _defaultBarMetrics;
 - ({CGSize=dd}) defaultSizeForOrientation:(long long)a;
 - (void) drawBackgroundInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithStyle:(long long)b;
 - (void) _setDefaultBarMetrics:(long long)a;
 - (void) _setActiveBarMetrics:(long long)a;
 - (void) setTitleTextAttributes:(id)a;
 - (void) setTitleVerticalPositionAdjustment:(double)aforBarMetrics:(long long)b;
 - (void) _setBackIndicatorLeftMargin:(double)a;
 - (BOOL) _subclassImplementsDrawBackgroundInRect;
 - (void) _handlePopSwipe:(id)a;
 - (void) _accessibilityButtonShapesDidChangeNotification:(id)a;
 - (void) _updateOpacity;
 - (void) _commonNavBarInit;
 - (void) _setupTopNavItem:(id)aoldTopNavItem:(id)b;
 - (id) titleTextAttributes;
 - (void) _reenableUserInteraction;
 - (id) _defaultTitleFontWithScaleAdjustment:(double)a;
 - (id) _defaultTitleFontFittingHeight:(double)awithScaleAdjustment:(double)b;
 - (void) _fadeViewOut:(id)a;
 - (void) _pushNavigationItem:(id)atransition:(int)b;
 - (void) _setAnimationIds:(id)a;
 - (id) _effectiveDelegate;
 - (void) _startInteractiveNavigationBarTransition;
 - (void) pushNavigationItem:(id)a;
 - (BOOL) _wantsLetterpressContent;
 - (id) _animationIds;
 - (void) _updateInteractiveStatusBarTransitionPercent:(double)aisFinished:(BOOL)bdidComplete:(BOOL)ccompletionSpeed:(double)dcompletionCurve:(long long)e;
 - (long long) _barStyle:(BOOL)a;
 - (BOOL) titleAutoresizesToFit;
 - (void) setTitleAutoresizesToFit:(BOOL)a;
 - (BOOL) _hasInvisibleCustomBackgroundImage;
 - (BOOL) _barTranslucenceSuppressesAdaptiveBackdrop;
 - (BOOL) _barStyleSuppressesAdaptiveBackdrop;
 - (BOOL) _customBackgroundImageSuppressesAdaptiveBackdropForPalette;
 - (BOOL) _backgroundViewSuppressesAdaptiveBackdrop;
 - (BOOL) _customBackgroundImageSuppressesAdaptiveBackdrop;
 - (BOOL) _wantsAdaptiveBackdropWhenNotHidden;
 - (BOOL) isAnimationEnabled;
 - (void) _prepareForPushAnimationWithItems:(id)a;
 - (void) _setBarStyle:(long long)a;
 - (void) _resetBackgroundImageAsNecessary;
 - (void) _startPushAnimationFromItems:(id)afromBarStyle:(long long)b;
 - (void) _startBarStyleAnimation:(long long)awithTintColor:(id)b;
 - (void) _crossFadeToBarBackgroundImageForItem:(id)a;
 - (id) _popNavigationItemWithTransition:(int)a;
 - (void) popNavigationItem;
 - (void) _prepareForPopAnimationWithNewTopItem:(id)a;
 - (id) navigationItems;
 - (void) _startPopAnimationFromItems:(id)afromBarStyle:(long long)btoItems:(id)ctoBarStyle:(long long)d;
 - (void) setItems:(id)aanimated:(BOOL)b;
 - (id) items;
 - (int) _transitionForOldItems:(id)anewItems:(id)b;
 - (void) _setItems:(id)atransition:(int)b;
 - (BOOL) _didVisibleItemsChangeWithNewItems:(id)aoldItems:(id)b;
 - (void) _removeItemsFromSuperview:(id)a;
 - (void) _setItems:(id)atransition:(int)breset:(BOOL)c;
 - (void) setLocked:(BOOL)a;
 - (void) _addItem:(id)awithEffectiveDelegate:(id)btransition:(int)c;
 - (BOOL) forceFullHeightInLandscape;
 - (long long) effectiveInterfaceOrientation;
 - (id) _nthNavigationItemFromTop:(long long)a;
 - (unsigned long long) _subviewIndexAboveBackground;
 - (void) _cancelInteractiveTransition;
 - (void) _decrementAnimationCountIfNecessary;
 - (id) navigationItemAtPoint:({CGPoint=dd})a;
 - (id) _commonHitTest:({CGPoint=dd})aforView:(id)b;
 - (void) _setBackIndicatorPressed:(BOOL)ainitialPress:(BOOL)b;
 - (id) _currentBackButtonForNthItemFromTop:(unsigned long long)a;
 - (id) backButtonViewAtPoint:({CGPoint=dd})a;
 - (id) popNavigationItemAnimated:(BOOL)a;
 - (BOOL) _shouldPopForTouchAtPoint:({CGPoint=dd})a;
 - (void) _popForTouchAtPoint:({CGPoint=dd})a;
 - (void) _handleMouseDownAtPoint:({CGPoint=dd})a;
 - (void) _handleMouseUpAtPoint:({CGPoint=dd})a;
 - (void) _setBarPosition:(long long)a;
 - (void) _configurePaletteConstraintsIfNecessary;
 - (BOOL) _needsUpdateBackIndicatorImage;
 - (void) addConstraint:(id)a;
 - (void) removeConstraint:(id)a;
 - (void) setBarStyle:(long long)a;
 - (void) _updateNavigationBarItem:(id)aforStyle:(long long)bpreviousTintColor:(id)c;
 - (void) _updateNavigationBarItem:(id)aforStyle:(long long)b;
 - (void) _customViewChangedForButtonItem:(id)a;
 - (id) _currentLeftViews;
 - (id) _currentRightViews;
 - (void) _updateNavigationBarItemsForStyle:(long long)apreviousTintColor:(id)b;
 - (BOOL) _wantsAdaptiveBackdrop;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a;
 - (BOOL) _legacyIsTranslucent;
 - (BOOL) _modernIsTranslucent;
 - (void) setBarTintColor:(id)a;
 - (void) _setIsContainedInPopover:(BOOL)a;
 - (BOOL) _shouldShowBackButtonForNavigationItem:(id)a;
 - (void) _fadeViewsIn:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) promptBounds;
 - (void) showButtonsWithLeft:(id)aright:(id)bleftBack:(BOOL)c;
 - (void) showLeftButton:(id)awithStyle:(int)brightButton:(id)cwithStyle:(int)d;
 - (id) createButtonWithContents:(id)awidth:(double)bbarStyle:(long long)cbuttonStyle:(int)disRight:(BOOL)e;
 - (void) _setLeftView:(id)arightView:(id)b;
 - (BOOL) _isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)a;
 - (void) _getTitleViewFrame:(^{CGRect={CGPoint=dd}{CGSize=dd}})aleftViewFrames:(id)brightViewFrames:(id)c;
 - (void) _incrementAnimationCountIfNecessary;
 - (void) _fadeViewsOut:(id)a;
 - (void) _showLeftRightButtonsAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) _hideButtonsAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (id) currentLeftView;
 - (void) showHideBackButtomAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) _accessibilityButtonShapesParametersDidChange;
 - (BOOL) _suppressBackIndicator;
 - (id) _effectiveBackIndicatorImage;
 - (void) _updateBackIndicatorViewTintColor;
 - (void) _layoutBackgroundViewConsideringAdaptiveBackdropAndChangedHeight:(BOOL)a;
 - (void) _barSizeDidChangeAndSoDidHeight:(BOOL)a;
 - (double) topItemAlpha;
 - (void) _getTitleViewFrame:(^{CGRect={CGPoint=dd}{CGSize=dd}})aleftViewFrames:(id)brightViewFrames:(id)cforItemAtIndex:(unsigned long long)d;
 - (void) _backgroundFadeDidFinish:(id)afinished:(id)bcontext:(id)c;
 - (id) _effectiveBackIndicatorTransitionMaskImage;
 - (double) _backIndicatorClippingMargin;
 - (void) _wrapView:(id)ainClippingViewWithLeftBoundary:(double)brightBoundary:(double)cleftMaskImage:(id)dleftMaskIsChevron:(BOOL)erightMaskImage:(id)f;
 - (double) _backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)atitleView:(id)bwithBackButtonWidth:(double)c;
 - (void) _navigationAnimationDidFinish:(id)afinished:(id)bcontext:(id)c;
 - (id) _allViews;
 - (double) defaultBackButtonAlignmentHeight;
 - (void) _getTitleViewFrame:(^{CGRect={CGPoint=dd}{CGSize=dd}})aleftViewFrames:(id)brightViewFrames:(id)cforItemAtIndex:(unsigned long long)dreturnedIdealWidthOfTextContent:(^d)eavailableLayoutWidthForTextContent:(^d)fidealBackButtonWidth:(^d)g;
 - (double) _effectiveBackIndicatorLeftMargin;
 - (id) _focusableViews;
 - (long long) _barPosition;
 - (long long) barPosition;
 - (long long) _barTranslucence;
 - (void) _setCondensed:(BOOL)a;
 - (double) _heightIncludingBackground;
 - (void) _setBackdropViewLayerGroupName:(id)a;
 - (void) _setWantsLetterpressContent:(BOOL)a;
 - (void) _setBackIndicatorImage:(id)a;
 - (id) _backIndicatorImage;
 - (double) _backIndicatorLeftMargin;
 - (long long) _itemStackCount;
 - (id) backgroundImageForBarMetrics:(long long)a;
 - (double) titleVerticalPositionAdjustmentForBarMetrics:(long long)a;
 - (BOOL) _hidesShadow;
 - (void) _setHidesShadow:(BOOL)a;
 - (void) _setDeferShadowToSearchBar:(BOOL)a;
 - (id) _defaultTitleFont;
 - (void) setAccessoryView:(id)aanimate:(BOOL)b;
 - (void) pushNavigationItem:(id)aanimated:(BOOL)b;
 - (void) _updateInteractiveTransition:(double)a;
 - (void) _finishInteractiveTransition:(double)acompletionSpeed:(double)bcompletionCurve:(long long)c;
 - (void) _cancelInteractiveTransition:(double)acompletionSpeed:(double)bcompletionCurve:(long long)c;
 - (BOOL) _wantsAdaptiveBackdropForPalette;
 - (void) _popNestedNavigationItem;
 - (void) _pushNestedNavigationItem:(id)a;
 - (void) _setItemsUpToItem:(id)atransition:(id)b;
 - (void) _addItems:(id)awithEffectiveDelegate:(id)btransition:(int)c;
 - (void) setNavigationItems:(id)a;
 - (void) _cancelInProgressPushOrPop;
 - (void) _reenableUserInteractionWhenReadyWithContext:(id)a;
 - (void) _evaluateBackIndicatorForHilightedState:(BOOL)aofBarButtonItem:(id)binNavigationItem:(id)c;
 - (long long) _statusBarStyle;
 - (void) setForceFullHeightInLandscape:(BOOL)a;
 - (id) buttonItemShadowColor;
 - (id) buttonItemTextColor;
 - (id) _titleTextColor;
 - (id) barTintColor;
 - (id) currentRightView;
 - (id) promptView;
 - (unsigned int) animationDisabledCount;
 - (void) drawBackButtonBackgroundInRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithStyle:(long long)bpressed:(BOOL)c;
 - (void) showButtonsWithLeftTitle:(id)arightTitle:(id)b;
 - (void) showButtonsWithLeftTitle:(id)arightTitle:(id)bleftBack:(BOOL)c;
 - (void) setButton:(int)aenabled:(BOOL)b;
 - (void) hideButtons;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) availableTitleArea;
 - (void) setTopItemAlpha:(double)a;
 - (void) _removeAccessoryView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsForPrompt:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithFont:(id)cbarStyle:(long long)d;
 - (void) _animateOldBackButtonView:(id)atoNewBackButtonView:(id)bduration:(double)cinitialFrameForIncomingView:(@?)ddestinationFrameForOutgoingView:(@?)eanimationCleanup:(@?)f;
 - (void) _fadeAllViewsOut;
 - (void) _fadeAllViewsIn;
 - (id) _itemStack;
 - (void) _navBarButtonPressed:(id)a;
 - (void) _setAutoAdjustTitle:(BOOL)a;
 - (BOOL) _gestureRecognizerShouldBegin:(id)a;
 - (long long) _backgroundBackdropStyle;
 - (double) _requestedMaxBackButtonWidth;
 - (void) _setRequestedMaxBackButtonWidth:(double)a;
 - (id) _backdropViewLayerGroupName;
 - (BOOL) _isCondensed;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (double) _autolayoutSpacingAtEdge:(int)ainContainer:(id)b;
 - (double) _autolayoutSpacingAtEdge:(int)anextToNeighbor:(id)b;
 - (BOOL) _hasCustomAutolayoutNeighborSpacing;
 - (int) state;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (void) setRightMargin:(double)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsLayout;
 - (void) setAutoresizingMask:(unsigned long long)a;
 - (void) setHidden:(BOOL)a;
 - (void) setItems:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) willRemoveSubview:(id)a;


@end
