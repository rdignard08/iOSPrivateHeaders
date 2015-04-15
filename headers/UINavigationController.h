
@protocol UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate;
@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate> {

    UIView* _containerView;
    UINavigationBar* _navigationBar;
    Class _navigationBarClass;
    UIToolbar* _toolbar;
    UIView* _navigationTransitionView;
    double _bottomInsetDelta;
    double _statusBarHeightForHideShow;
    UIViewController* _disappearingViewController;
    <UINavigationControllerDelegate>* _delegate;
    long long _savedNavBarStyleBeforeSheet;
    long long _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer* _backGestureRecognizer;
    _UINavigationControllerPalette* _topPalette;
    _UINavigationControllerPalette* _freePalette;
    _UINavigationControllerPalette* _transitioningTopPalette;
    {?="isAppearingAnimated"b1"isAlreadyPoppingNavigationItem"b1"isNavigationBarHidden"b1"isToolbarShown"b1"needsDeferredTransition"b1"isTransitioning"b1"paletteTransitionPending"b1"lastOperation"b4"lastOperationAnimated"b1"deferredTransition"b8"didPreloadKeyboardAnimation"b1"didHideBottomBar"b1"didExplicitlyHideTabBar"b1"isChangingOrientationForPop"b1"pretendNavBarHidden"b1"avoidMovingNavBarOffscreenBeforeUnhiding"b1"searchBarHidNavBar"b1"useSystemPopoverBarAppearance"b1"isCustomTransition"b1"isBuiltinTransition"b1"resetDidHideOnCancel"b1"delegateWillShowViewController"b1"delegateDidShowViewController"b1"delegateTransitionController"b1"delegateTransitionControllerEx"b1"delegateInteractionController"b1"delegateInteractionControllerEx"b1"delegateShouldCrossFadeNavigationBar"b1"delegateShouldCrossFadeBottomBars"b1"delegateShouldUseBuiltinInteractionController"b1"delegateSupportedInterfaceOrientations"b1"delegatePreferredInterfaceOrientationForPresentation"b1"delegateLayoutTransitioningClass"b1"navigationBarHidesCompletelyOffscreen"b1"clipUnderlapWhileTransitioning"b1"isCrossfadingOutTabBar"b1"isCrossfadingInTabBar"b1"skipContentInsetCalculation"b1"neverInWindow"b1"useStandardStatusBarHeight"b1"allowUserInteractionDuringTransition"b1"enableBackButtonDuringTransition"b1"allowsGroupBlending"b1"allowNestedNavigationControllers"b1"nestedNavigationBarWasHidden"b1"nestedToolbarWasHidden"b1"isNested"b1"searchHidNavigationBar"b1"suppressMixedOrientationPop"b1"disappearingViewControllerIsBeingRemoved"b1"isWrappingDuringAdaptation"b1} _navigationControllerFlags;
    BOOL _interactiveTransition;
    BOOL _hidesBarsWhenKeyboardAppears;
    BOOL _hidesBarsOnSwipe;
    BOOL _hidesBarsWhenVerticallyCompact;
    BOOL _hidesBarsOnTap;
    BOOL __usingBuiltinAnimator;
    BOOL __barAnimationWasCancelled;
    Class _toolbarClass;
    double _customNavigationTransitionDuration;
    <UIViewControllerAnimatedTransitioning>* __transitionController;
    _UINavigationParallaxTransition* __cachedTransitionController;
    <UIViewControllerInteractiveTransitioning>* __interactionController;
    _UINavigationInteractiveTransition* __cachedInteractionController;
    NSUUID* __toolbarAnimationId;
    NSUUID* __navbarAnimationId;
    @? __updateNavigationBarHandler;
    id __keyboardAppearedNotificationToken;
    _UIBarPanGestureRecognizer* __barSwipeHideGesture;
    _UIAnimationCoordinator* __barInteractiveAnimationCoordinator;
    _UIBarTapGestureRecognizer* __barTapHideGesture;
    long long _builtinTransitionStyle;
    double _builtinTransitionGap;
    NSString* __backdropGroupName;
}
 + (BOOL) _directlySetsContentOverlayInsetsForChildren;
 + (BOOL) doesOverrideSupportedInterfaceOrientations;
 + (BOOL) _shouldSendLegacyMethodsFromViewWillTransitionToSize;
 + (BOOL) _shouldForwardViewWillTransitionToSize;
 + (BOOL) doesOverridePreferredInterfaceOrientationForPresentation;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (BOOL) _clipUnderlapWhileTransitioning;
 - (id) _interactionController;
 - (BOOL) _isTransitioning;
 - (BOOL) _shouldUseBuiltinInteractionController;
 - (BOOL) _shouldPopFromLandscapeToPortraitOrientation;
 - (id) navigationBar;
 - (BOOL) isNavigationBarHidden;
 - (id) _existingToolbar;
 - (id) topViewController;
 - (id) navigationItem;
 - (id) previousViewController;
 - (void) setInteractiveTransition:(BOOL)a ;
 - (id) popViewControllerAnimated:(BOOL)a ;
 - (id) _snapshotView;
 - (long long) preferredStatusBarStyle;
 - (id) _deepestUnambiguousResponder;
 - (unsigned long long) supportedInterfaceOrientations;
 - (void) encodeRestorableStateWithCoder:(id)a ;
 - (void) decodeRestorableStateWithCoder:(id)a ;
 - (id) preferredFocusedItem;
 - (id) _transitionCoordinator;
 - (void) traitCollectionDidChange:(id)a ;
 - (void) viewDidMoveToWindow:(id)a shouldAppearOrDisappear:(BOOL)b ;
 - (BOOL) _gestureRecognizer:(id)a shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b ;
 - (BOOL) _gestureRecognizer:(id)a shouldReceiveTouch:(id)b ;
 - (void) setNavigationBar:(id)a ;
 - (void) _updatePaletteConstraints;
 - (void) _updatePaletteBackground;
 - (void) _navigationBarDidChangeStyle:(id)a ;
 - (void) navigationBarDidChangeOpacity:(id)a ;
 - (BOOL) _willPerformCustomNavigationTransitionForPush;
 - (BOOL) _shouldCrossFadeNavigationBar;
 - (BOOL) _isInteractiveCustomNavigationTransition;
 - (double) _customNavigationTransitionDuration;
 - (BOOL) navigationBar:(id)a shouldPopItem:(id)b ;
 - (BOOL) _willPerformCustomNavigationTransitionForPop;
 - (BOOL) enableBackButtonDuringTransition;
 - (void) navigationBarDidResizeForPrompt:(id)a ;
 - (void) navigationBar:(id)a buttonClicked:(int)b ;
 - (void) _updateInteractiveTransition:(double)a ;
 - (BOOL) _gestureRecognizerShouldBegin:(id)a ;
 - (BOOL) editing;
 - (void) setEditing:(BOOL)a animated:(BOOL)b ;
 - (id) _builtinInteractionController;
 - (double) durationForTransition:(int)a ;
 - (void) _setIsWrappingDuringAdaptation:(BOOL)a ;
 - (void) preferredContentSizeDidChangeForChildContentContainer:(id)a ;
 - (void) _updateLayoutForStatusBarAndInterfaceOrientation;
 - ({CGSize=dd}) sizeForChildContentContainer:(id)a withParentContainerSize:({CGSize=dd})b ;
 - ({CGSize=dd}) preferredContentSize;
 - (void) willTransitionToTraitCollection:(id)a withTransitionCoordinator:(id)b ;
 - (id) initWithNibName:(id)a bundle:(id)b ;
 - (void) loadView;
 - (void) setPreferredContentSize:({CGSize=dd})a ;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (long long) preferredInterfaceOrientationForPresentation;
 - (void) viewWillAppear:(BOOL)a ;
 - ({UIEdgeInsets=dddd}) _edgeInsetsForChildViewController:(id)a insetsAreAbsolute:(^B)b ;
 - (void) _updateChildContentMargins;
 - ({CGSize=dd}) contentSizeForViewInPopover;
 - (void) setContentSizeForViewInPopover:({CGSize=dd})a ;
 - (BOOL) isModalInPopover;
 - (id) _viewForContentInPopover;
 - (BOOL) _isPresentationContextByDefault;
 - (BOOL) _shouldPersistViewWhenCoding;
 - (void) setSearchBarHidNavBar:(BOOL)a ;
 - (void) viewDidUnload;
 - (void) _didGainChildScrollView:(id)a ;
 - (void) updateTitleForViewController:(id)a ;
 - (id) _backdropBarGroupName;
 - (id) _viewsWithDisabledInteractionGivenTransitionContext:(id)a ;
 - (void) viewDidAppear:(BOOL)a ;
 - (void) viewWillDisappear:(BOOL)a ;
 - (void) viewDidDisappear:(BOOL)a ;
 - (void) purgeMemoryForReason:(int)a ;
 - (BOOL) _shouldChildViewControllerUseFullScreenLayout:(id)a ;
 - (BOOL) _reallyWantsFullScreenLayout;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForContainerViewInSheetForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a displayingTopView:(BOOL)b andBottomView:(BOOL)c ;
 - (int) _keyboardDirectionForTransition:(long long)a ;
 - (BOOL) _isSupportedInterfaceOrientation:(long long)a ;
 - (id) _transitionController;
 - (long long) modalTransitionStyle;
 - (void) _setTransitionController:(id)a ;
 - (void) _setInteractionController:(id)a ;
 - (void) willRotateToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) didRotateFromInterfaceOrientation:(long long)a ;
 - (BOOL) _allowsAutorotation;
 - (BOOL) _shouldSynthesizeSupportedOrientations;
 - (id) rotatingHeaderView;
 - (id) rotatingFooterView;
 - (BOOL) _shouldUseOnePartRotation;
 - (void) willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) _getRotationContentSettings:(^{?=BBBBBdi})a ;
 - (void) didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)a ;
 - (id) childViewControllerForStatusBarStyle;
 - (id) childViewControllerForStatusBarHidden;
 - (BOOL) searchBarHidNavBar;
 - (BOOL) _isNestedNavigationController;
 - (id) _lastNavigationItems;
 - (id) bottomViewController;
 - (void) _willBecomeContentViewControllerOfPopover:(id)a ;
 - (void) _didBecomeContentViewControllerOfPopover:(id)a ;
 - (void) _didResignContentViewControllerOfPopover:(id)a ;
 - (void) _prepareForPresentationInPopover:(id)a ;
 - (void) _prepareForDismissalInPopover:(id)a ;
 - (id) viewControllerForUnwindSegueAction:(SEL)a fromViewController:(id)b withSender:(id)c ;
 - (id) segueForUnwindingToViewController:(id)a fromViewController:(id)b identifier:(id)c ;
 - (void) showViewController:(id)a sender:(id)b ;
 - (id) rotatingSnapshotViewForWindow:(id)a ;
 - (id) defaultPNGName;
 - (void) _updateInteractivePopGestureEnabledState;
 - (void) _prepareForNestedDisplayWithNavigationController:(id)a ;
 - (void) _prepareForNormalDisplayWithNavigationController:(id)a ;
 - (BOOL) _allowNestedNavigationControllers;
 - (void) _setAllowNestedNavigationControllers:(BOOL)a ;
 - (void) updateTabBarItemForViewController:(id)a ;
 - (id) tabBarItem;
 - (id) _moreListTitle;
 - (id) moreListImage;
 - (id) moreListSelectedImage;
 - (id) moreListTableCell;
 - (void) collapseSecondaryViewController:(id)a forSplitViewController:(id)b ;
 - (id) separateSecondaryViewControllerForSplitViewController:(id)a ;
 - (double) _topBarHeight;
 - (void) _updateToolbarItemsFromViewController:(id)a animated:(BOOL)b ;
 - (id) _additionalViewControllersToCheckForUserActivity;
 - (BOOL) _viewControllerWasSelected;
 - (id) disappearingViewController;
 - (void) setDisappearingViewController:(id)a ;
 - (void) pushViewController:(id)a animated:(BOOL)b ;
 - (void) setNavigationBarClass:(Class)a ;
 - (void) _setToolbarClass:(Class)a ;
 - (id) toolbar;
 - (void) _confirmBarAccessMethods;
 - (void) _setVisualAltitudeForBar:(id)a ;
 - (void) setHidesBarsWhenKeyboardAppears:(BOOL)a ;
 - (void) setHidesBarsOnSwipe:(BOOL)a ;
 - (void) setHidesBarsWhenVerticallyCompact:(BOOL)a ;
 - (void) setHidesBarsOnTap:(BOOL)a ;
 - (void) _setKeyboardAppearedNotificationToken:(id)a ;
 - (void) _setBarSwipeHideGesture:(id)a ;
 - (void) _setInteractiveAnimationCoordinator:(id)a ;
 - (void) _setBarTapHideGesture:(id)a ;
 - (void) _releaseContainerViews;
 - (void) _setCachedTransitionController:(id)a ;
 - (void) _setCachedInteractionController:(id)a ;
 - (void) _setToolbarAnimationId:(id)a ;
 - (void) _positionNavigationBarHidden:(BOOL)a edge:(unsigned long long)b initialOffset:(double)c ;
 - (void) _positionPaletteHidden:(BOOL)a edge:(unsigned long long)b initialOffset:(double)c ;
 - (id) visibleViewController;
 - (void) setViewControllers:(id)a animated:(BOOL)b ;
 - (int) _transitionForOldViewControllers:(id)a newViewControllers:(id)b ;
 - (void) _prepareCollectionViewControllers:(id)a forSharingInRange:(id)b ;
 - (void) _setViewControllers:(id)a transition:(int)b animated:(BOOL)c ;
 - (BOOL) _transitionConflictsWithNavigationTransitions:(id)a ;
 - (BOOL) needsDeferredTransition;
 - (id) _outermostNavigationController;
 - (id) _navigationItems;
 - (id) interactivePopGestureRecognizer;
 - (id) _existingNavigationBar;
 - (void) _setViewControllers_7_0:(id)a transition:(int)b animated:(BOOL)c operation:(long long)d ;
 - (void) _setViewControllers:(id)a transition:(int)b animated:(BOOL)c operation:(long long)d ;
 - (void) setNeedsDeferredTransition;
 - (BOOL) _usesTransitionController;
 - (id) _customTransitionController:(BOOL)a ;
 - (void) setCustomNavigationTransitionDuration:(double)a ;
 - (BOOL) allowUserInteractionDuringTransition;
 - (void) _presentationTransitionWrapViewController:(id)a forTransitionContext:(id)b ;
 - (id) _customInteractionController:(id)a ;
 - (double) customNavigationTransitionDuration;
 - (void) _startDeferredTransitionIfNeeded;
 - (void) _propagateContentAdjustmentsForControllersWithSharedViews;
 - (void) _hideOrShowBottomBarIfNeededWithTransition:(int)a ;
 - (void) _executeNavigationHandler:(@?)a deferred:(BOOL)b ;
 - (void) _startDeferredTransitionIfNeeded:(id)a ;
 - (id) _toolbarAnimationId;
 - (id) _navbarAnimationId;
 - (void) _setBarAnimationWasCancelled:(BOOL)a ;
 - (id) _startInteractiveBarTransition:(id)a ;
 - (void) _setNavbarAnimationId:(id)a ;
 - (BOOL) _navbarIsAppearingInteractively;
 - (id) _navigationBarForNestedNavigationController;
 - (void) _updateInteractiveBarTransition:(id)a withUUID:(id)b percent:(double)c isFinished:(BOOL)d didComplete:(BOOL)e completionSpeed:(double)f completionCurve:(long long)g ;
 - (BOOL) _toolbarIsAnimatingInteractively;
 - (BOOL) isCustomTransition;
 - (BOOL) _isUsingBuiltinAnimator;
 - (BOOL) _shouldCrossFadeBottomBars;
 - (BOOL) isInteractiveTransition;
 - (void) _startInteractiveToolbarTransition;
 - (id) _transitionAnimationContext;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForViewController:(id)a ;
 - (void) _startToolbarTransitionIfNecessary:(id)a animated:(BOOL)b ;
 - (void) _startPaletteTransitionIfNecessary:(id)a animated:(BOOL)b ;
 - (void) _updateScrollViewFromViewController:(id)a toViewController:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForWrapperViewForViewController:(id)a ;
 - (int) _deferredTransition;
 - (id) _keyboardAnimationStyle;
 - (BOOL) _isPerformingLayoutToLayoutTransition;
 - (id) navigationTransitionView;
 - (void) navigationTransitionView:(id)a didEndTransition:(long long)b fromView:(id)c toView:(id)d ;
 - (void) _setPreferredContentSizeFromChildContentContainer:(id)a ;
 - (void) _navigationTransitionView:(id)a didCancelTransition:(long long)b fromViewController:(id)c toViewController:(id)d wrapperView:(id)e ;
 - (void) _setUsingBuiltinAnimator:(BOOL)a ;
 - (void) _finishInteractiveTransition:(double)a transitionContext:(id)b ;
 - (void) _cancelInteractiveTransition:(double)a transitionContext:(id)b ;
 - (long long) _navigationTransitionForUITransition:(int)a ;
 - (void) navigationTransitionView:(id)a didStartTransition:(long long)b ;
 - (id) _navigationBarHiddenByDefault:(BOOL)a ;
 - (void) _setBackdropGroupName:(id)a ;
 - (id) _backdropGroupName;
 - (void) _positionNavigationBarHidden:(BOOL)a ;
 - (void) setNavigationBarHidden:(BOOL)a animated:(BOOL)b ;
 - (void) _setNavigationBarHidden:(BOOL)a edgeIfNotNavigating:(unsigned long long)b duration:(double)c ;
 - (void) _setNavigationBarHidden:(BOOL)a edge:(unsigned long long)b duration:(double)c ;
 - (void) _positionTopBar:(id)a hidden:(BOOL)b edge:(unsigned long long)c center:({CGPoint=dd})d offset:(double)e ;
 - (long long) _positionForBar:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForPalette:(id)a ;
 - ({CGPoint=dd}) _computeTopBarCenter:(id)a hidden:(BOOL)b edge:(unsigned long long)c center:({CGPoint=dd})d offset:(double)e ;
 - (void) _setNavigationBarHidesCompletelyOffscreen:(BOOL)a ;
 - (BOOL) _hasNestedNavigationController;
 - (void) _computeAndApplyScrollContentInsetDeltaForViewController:(id)a ;
 - (void) _layoutTopViewController;
 - (void) _repositionPaletteWithNavigationBarHidden:(BOOL)a duration:(double)b shouldUpdateNavigationItems:(BOOL)c ;
 - (BOOL) wasLastOperationAnimated;
 - (long long) lastOperation;
 - (BOOL) _animationParametersForHidingNavigationBar:(BOOL)a lastOperation:(long long)b edge:(^Q)c duration:(^d)d ;
 - (void) _positionNavigationBarHidden:(BOOL)a edge:(unsigned long long)b ;
 - (BOOL) _searchHidNavigationBar;
 - (BOOL) _useStandardStatusBarHeight;
 - (void) _positionPaletteHidden:(BOOL)a edge:(unsigned long long)b ;
 - (void) _startInteractiveNavbarTransition;
 - (void) _hideShowNavigationBarDidStop:(id)a finished:(id)b context:(id)c ;
 - (void) _layoutTopViewControllerInSheet;
 - (void) setPretendNavBarHidden:(BOOL)a ;
 - (BOOL) isToolbarHidden;
 - (void) _positionToolbarHidden:(BOOL)a ;
 - (void) _configureBarsAutomaticActions;
 - (void) _configureToolbar;
 - (void) setToolbarHidden:(BOOL)a animated:(BOOL)b ;
 - (void) _setToolbarHidden:(BOOL)a edge:(unsigned long long)b duration:(double)c ;
 - (void) _positionToolbarHidden:(BOOL)a edge:(unsigned long long)b ;
 - (void) _positionToolbarHidden:(BOOL)a edge:(unsigned long long)b crossFade:(BOOL)c ;
 - (void) _hideShowToolbarDidStop:(id)a finished:(id)b context:(id)c ;
 - (void) _updateBarsForCurrentInterfaceOrientation;
 - (id) _viewControllerForDisappearCallback;
 - (id) viewControllers;
 - (id) popToViewController:(id)a animated:(BOOL)b ;
 - (void) _performBackGesture:(id)a ;
 - (void) _presentationTransitionUnwrapViewController:(id)a ;
 - (void) _clearLastOperation;
 - (void) didShowViewController:(id)a animated:(BOOL)b ;
 - (void) setNeedsDeferredTransition:(BOOL)a ;
 - (BOOL) _isNavigationBarVisible;
 - (BOOL) _hasTranslucentNavigationBarIncludingViewController:(id)a ;
 - (BOOL) _shouldNavigationBarInsetViewControllerPreInnsbruck:(id)a ;
 - (BOOL) _isNavigationBarEffectivelyVisible;
 - (BOOL) _shouldNavigationBarInsetViewController:(id)a orOverlayContent:(^B)b ;
 - (BOOL) _shouldTabBar:(id)a insetViewController:(id)b orOverlayContent:(^B)c ;
 - (BOOL) _shouldToolBar:(id)a insetViewController:(id)b orOverlayContent:(^B)c ;
 - (BOOL) _shouldNavigationBarInsetViewController:(id)a ;
 - (BOOL) _shouldStatusBarInsetViewController:(id)a ;
 - (BOOL) _shouldLayoutViewControllerForTransparentStatusBar:(id)a ;
 - (BOOL) _shouldBottomBarBeHidden;
 - (void) _layoutViewController:(id)a ;
 - (BOOL) _shouldToolBar:(id)a insetViewController:(id)b ;
 - (BOOL) _shouldTabBar:(id)a insetViewController:(id)b ;
 - (double) _scrollViewTopContentInsetForViewController:(id)a ;
 - (double) _scrollViewBottomContentInsetForViewController:(id)a ;
 - ({UIEdgeInsets=dddd}) _expectedContentInsetDeltaForViewController:(id)a ;
 - (void) willShowViewController:(id)a animated:(BOOL)b ;
 - (void) _startTransition:(int)a fromViewController:(id)b toViewController:(id)c ;
 - (void) _startCustomTransition:(id)a ;
 - (@?) _updateNavigationBarHandler;
 - (void) _setUpdateNavigationBarHandler:(@?)a ;
 - (void) _setIsNestedNavigationController:(BOOL)a ;
 - (void) setToolbarHidden:(BOOL)a ;
 - (void) _prepareCollectionViewControllerForSharing:(id)a ;
 - (void) pushViewController:(id)a transition:(int)b forceImmediate:(BOOL)c ;
 - (id) _nthChildViewControllerFromTop:(unsigned long long)a ;
 - (id) _popViewControllerWithTransition:(int)a allowPoppingLast:(BOOL)b ;
 - (id) _findViewControllerToPopTo;
 - (BOOL) _didExplicitlyHideTabBar;
 - (void) _popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)a ;
 - (id) popToRootViewControllerWithTransition:(int)a ;
 - (id) popToViewController:(id)a transition:(int)b ;
 - (id) popViewControllerWithTransition:(int)a ;
 - (void) makeModalViewControllerTopViewController;
 - (BOOL) _doesTopViewControllerSupportInterfaceOrientation:(long long)a ;
 - (BOOL) _shouldHideBarsForTraits:(id)a ;
 - (BOOL) _useCrossFadeForGestureHiding;
 - (id) _existingToolbarWithItems;
 - (id) _findViewControllerToPopToForNavigationItem:(id)a ;
 - (void) _configureKeyboardBarHiding;
 - (void) _configureBarSwipeGesture;
 - (void) _configureBarTapGesture;
 - (void) _setBarsHidden:(BOOL)a allowAnimation:(BOOL)b ;
 - (void) _hideForKeyboardAppearance;
 - (BOOL) hidesBarsOnSwipe;
 - (void) _makeBarSwipeGestureIfNecessary;
 - (void) _makeBarHideGestureIfNecessary;
 - (void) _gestureRecognizedInteractiveHide:(id)a ;
 - (id) _barInteractiveAnimationCoordinator;
 - (void) _gestureRecognizedToggleVisibility:(id)a ;
 - (void) _setBarsHidden:(BOOL)a ;
 - (void) _layoutTopViewControllerInSheetWithPopoverView:(id)a ;
 - (BOOL) pretendNavBarHidden;
 - ({CGSize=dd}) _adjustedContentSizeForPopover:({CGSize=dd})a ;
 - (void) _setClipUnderlapWhileTransitioning:(BOOL)a ;
 - (void) _layoutTopViewControllerOutOfSheet;
 - (id) initWithRootViewController:(id)a ;
 - (id) initWithNavigationBarClass:(Class)a toolbarClass:(Class)b ;
 - (BOOL) _isCrossfadingOutTabBar;
 - (BOOL) _isCrossfadingInTabBar;
 - (void) _setCrossfadingOutTabBar:(BOOL)a ;
 - (void) _setCrossfadingInTabBar:(BOOL)a ;
 - (void) _setDidExplicitlyHideTabBar:(BOOL)a ;
 - (void) _setUseCurrentStatusBarHeight:(BOOL)a ;
 - (void) _setUseStandardStatusBarHeight:(BOOL)a ;
 - (BOOL) _useCurrentStatusBarHeight;
 - (void) setAllowUserInteractionDuringTransition:(BOOL)a ;
 - (void) setEnableBackButtonDuringTransition:(BOOL)a ;
 - (void) setViewControllers:(id)a ;
 - (void) _setViewControllers:(id)a transition:(int)b ;
 - (void) _setViewControllers_7_0:(id)a transition:(int)b animated:(BOOL)c ;
 - (void) _setClipsToBounds:(BOOL)a ;
 - (void) _setContentInset:({UIEdgeInsets=dddd})a ;
 - (void) _setBuiltinTransitionStyle:(long long)a ;
 - (void) _setBuiltinTransitionGap:(double)a ;
 - (Class) navigationBarClass;
 - (void) setNavigationBarHidden:(BOOL)a ;
 - (void) _setSearchHidNavigationBar:(BOOL)a ;
 - (BOOL) avoidMovingNavBarOffscreenBeforeUnhiding;
 - (void) setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)a ;
 - (void) _sendNavigationBarToBack;
 - (void) setToolbar:(id)a ;
 - (BOOL) isShown;
 - (id) _screenEdgePanGestureRecognizer;
 - (double) navigationTransitionView:(id)a durationForTransition:(long long)b ;
 - (BOOL) isBuiltinTransition;
 - (void) _setCustomTransition:(BOOL)a ;
 - (id) _builtinTransitionController;
 - (void) __viewWillLayoutSubviews;
 - (void) pushViewController:(id)a transition:(int)b ;
 - (void) _resetBottomBarHiddenState;
 - (void) _updateBottomBarHiddenState;
 - (void) _tabBarControllerDidFinishShowingTabBar:(id)a isHidden:(BOOL)b ;
 - (BOOL) isAlreadyPoppingNavItem;
 - (id) popViewControllerWithAnimationTransition:(long long)a duration:(double)b curve:(long long)c ;
 - (id) popToRootViewControllerAnimated:(BOOL)a ;
 - (id) popToViewControllerWithSnapbackIdentifier:(id)a animated:(BOOL)b ;
 - (void) _setKeyboardNotificationToken:(id)a ;
 - (BOOL) condensesBarsOnSwipe;
 - (void) setCondensesBarsOnSwipe:(BOOL)a ;
 - (id) barHideOnSwipeGestureRecognizer;
 - (id) barHideOnTapGestureRecognizer;
 - (Class) _toolbarClass;
 - (BOOL) hidesBarsWhenKeyboardAppears;
 - (BOOL) hidesBarsWhenVerticallyCompact;
 - (BOOL) hidesBarsOnTap;
 - (id) _cachedTransitionController;
 - (id) _cachedInteractionController;
 - (BOOL) _barAnimationWasCancelled;
 - (id) _keyboardAppearedNotificationToken;
 - (id) _barSwipeHideGesture;
 - (id) _barTapHideGesture;
 - (long long) _builtinTransitionStyle;
 - (double) _builtinTransitionGap;
 - (id) _topPalette;
 - (void) setDetailViewController:(id)a ;
 - (id) detailViewController;
 - (BOOL) isExpanded;
 - (void) setIsExpanded:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsForPalette:(id)a size:({CGSize=dd})b ;
 - (id) _pinningBarForPalette:(id)a ;
 - (void) attachPalette:(id)a isPinned:(BOOL)b ;
 - (id) existingPaletteForEdge:(unsigned long long)a ;
 - (void) detachPalette:(id)a isInPaletteTransition:(BOOL)b ;
 - (void) _detachPalette:(id)a ;
 - (void) detachPalette:(id)a ;
 - (id) paletteForEdge:(unsigned long long)a size:({CGSize=dd})b ;
 - (void) _prepareCollectionViewController:(id)a forSharingWithCollectionViewController:(id)b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (BOOL) becomeFirstResponder;


@end
