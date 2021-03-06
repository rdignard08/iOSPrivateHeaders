
@protocol UIGestureRecognizerDelegate;
@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate> {

    id _delegate;
    UIBarButtonItem* _barButtonItem;
    UIBarButtonItem* _displayModeButtonItem;
    NSString* _buttonTitle;
    UIPopoverController* _hiddenPopoverController;
    UIView* _rotationSnapshotView;
    UIResponder* _postTransitionResponder;
    UISnapshotView* _collapsingMasterSnapshotView;
    UISnapshotView* _collapsingDetailSnapshotView;
    double _masterColumnWidth;
    float _gutterWidth;
    float _cornerRadius;
    long long _rotatingFromOrientation;
    long long _lastPresentedOrientation;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rotatingFromMasterViewFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rotatingToMasterViewFrame;
    NSArray* _cornerImageViews;
    UIView* _underBarSeparatorView;
    unsigned long long _slideTransitionCount;
    UIView* _masterBackgroundView;
    BOOL _presentsInFadingPopover;
    BOOL _presentsWithGesture;
    UIGestureRecognizer* _popoverPresentationGestureRecognizer;
    long long _preferredDisplayMode;
    long long _effectiveTargetDisplayMode;
    long long _pendingDisplayModeChangeCount;
    BOOL _useChangingBoundsLayout;
    {?="validDelegateHiddenMasterOrientations"b5"delegateHiddenMasterOrientations"b5"delegateImplementsShouldHide"b1"hidden"b3"delegateHandlesTogglingMaster"b1"delegateProvidesBackgroundView"b1"delegateWantsUnSlideCallback"b1"masterOnSlide"b1"delegateWantsWillShowCallback"b1"delegateWantsWillHideCallback"b1"delegateWantsWillPresentCallback"b1"delegateWantsNavigationRequests"b1"resizesDetailOnSlide"b1"delegateSupportedInterfaceOrientations"b1"delegatePreferredInterfaceOrientationForPresentation"b1"disableDetailFrameChanges"b1"delegateWantsShowViewController"b1"delegateWantsPrivateShowViewController"b1"delegateWantsShowDetailViewController"b1"delegateWantsPrivateShowDetailViewController"b1"delegateWantsCollapseSecondaryViewController"b1"delegateWantsPrivateCollapseSecondaryViewController"b1"delegateWantsSeparateSecondaryViewController"b1"delegateWantsPrivateSeparateSecondaryViewController"b1"delegateWantsPrimaryViewControllerForCollapse"b1"delegateWantsPrivatePrimaryViewControllerForCollapse"b1"delegateWantsPrimaryViewControllerForExpanding"b1"delegateWantsPrivatePrimaryViewControllerForExpanding"b1"collapsedState"b2"primaryHidingState"b2"primaryHidingStateForCurrentOrientation"b2"delegateWantsWillChangeToDisplayMode"b1"delegateWantsTargetDisplayModeForAction"b1"pendingPresentMasterViewController"b1"pendingUpdateTargetDisplayMode"b1"collapsingClockwise"b1"firstResponderChangedFromPostTransitionResponder"b1} _splitViewControllerFlags;
    BOOL _resizeForKeyboard;
    NSString* _displayModeButtonItemTitle;
    double _preferredPrimaryColumnWidthFraction;
    double _minimumPrimaryColumnWidth;
    double _maximumPrimaryColumnWidth;
    UIViewController* __preservedDetailController;
    @? __didChangeBoundsBlock;
    @? __clearPreventRotationHook;
}
 + (BOOL) doesOverrideSupportedInterfaceOrientations;
 + (BOOL) _shouldSendLegacyMethodsFromViewWillTransitionToSize;
 + (BOOL) _shouldForwardViewWillTransitionToSize;
 + (BOOL) doesOverridePreferredInterfaceOrientationForPresentation;
 + (BOOL) _optsOutOfPopoverControllerHierarchyCheck;
 + (double) _defaultGutterWidthInView:(id)a;
 + (BOOL) _forcePresentsInSlidingPopover;
 + (BOOL) _forcePresentsWithGesture;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) encodeRestorableStateWithCoder:(id)a ;
 - (void) decodeRestorableStateWithCoder:(id)a ;
 - (BOOL) _disableAutomaticKeyboardBehavior;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForChildContentContainer:(id)a ;
 - (void) _updateLayoutForStatusBarAndInterfaceOrientation;
 - ({CGSize=dd}) sizeForChildContentContainer:(id)a withParentContainerSize:({CGSize=dd})b ;
 - (void) willTransitionToTraitCollection:(id)a withTransitionCoordinator:(id)b ;
 - (id) initWithNibName:(id)a bundle:(id)b ;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (long long) preferredInterfaceOrientationForPresentation;
 - (void) viewWillAppear:(BOOL)a ;
 - (double) _contentMarginForChildViewController:(id)a ;
 - ({UIEdgeInsets=dddd}) _edgeInsetsForChildViewController:(id)a insetsAreAbsolute:(^B)b ;
 - (void) _updateChildContentMargins;
 - (BOOL) _shouldPersistViewWhenCoding;
 - (void) unloadViewForced:(BOOL)a ;
 - (void) viewDidAppear:(BOOL)a ;
 - (void) viewWillDisappear:(BOOL)a ;
 - (void) viewDidDisappear:(BOOL)a ;
 - (void) purgeMemoryForReason:(int)a ;
 - (void) willRotateToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) didRotateFromInterfaceOrientation:(long long)a ;
 - (BOOL) _shouldSynthesizeSupportedOrientations;
 - (void) _getRotationContentSettings:(^{?=BBBBBdi})a ;
 - (void) _layoutContainerViewWillMoveToWindow:(id)a ;
 - (void) _layoutContainerViewDidMoveToWindow:(id)a ;
 - (void) showViewController:(id)a sender:(id)b ;
 - (void) showDetailViewController:(id)a sender:(id)b ;
 - (id) _allContainedViewControllers;
 - (id) _additionalViewControllersToCheckForUserActivity;
 - (id) viewControllers;
 - (void) setViewControllers:(id)a ;
 - (void) __viewWillLayoutSubviews;
 - (id) detailViewController;
 - (id) _primaryContentResponder;
 - (void) _didChangeToFirstResponder:(id)a ;
 - (BOOL) isCollapsed;
 - (id) masterViewController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _masterViewFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _detailViewFrame;
 - (void) _setPresentsInFadingPopover:(BOOL)a ;
 - (void) _setMasterOverrideTraitCollectionActive:(BOOL)a ;
 - (void) _removeCollapsingSnapshotViews;
 - (long long) displayMode;
 - (void) loadSubviews;
 - (void) _loadNewSubviews:(id)a ;
 - (void) _updateTargetDisplayMode;
 - (long long) _primaryHidingStateForCurrentOrientation;
 - (long long) _primaryHidingState;
 - (BOOL) hidesMasterViewInLandscape;
 - (BOOL) hidesMasterViewInPortrait;
 - (long long) _effectivePrimaryHidingState;
 - (BOOL) _presentsInFadingPopover;
 - (BOOL) _delegateUsesLegacySlideSPI;
 - (BOOL) _isMasterPopoverVisible;
 - (BOOL) _isHidesMasterInPortraitValid;
 - (BOOL) _isHidesMasterInLandscapeValid;
 - (BOOL) _effectivePresentsWithGesture;
 - (BOOL) _hasMasterViewController;
 - (void) _setupHiddenPopoverControllerWithViewController:(id)a ;
 - (long long) _effectiveTargetDisplayMode;
 - (void) _calculateDelegateHiddenMasterOrientations;
 - (void) _addOrRemovePopoverPresentationGestureRecognizer;
 - (double) _primaryColumnWidthForSize:({CGSize=dd})a ;
 - (BOOL) _isMasterViewShown;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _masterViewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _detailViewFrameWithPopoverControllerFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (float) gutterWidth;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _detailViewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) popoverWillAppear:(id)a ;
 - (BOOL) _resizesDetailOnSlide;
 - (void) toggleMasterVisible:(id)a ;
 - (double) primaryColumnWidth;
 - (double) preferredPrimaryColumnWidthFraction;
 - (double) minimumPrimaryColumnWidth;
 - (double) maximumPrimaryColumnWidth;
 - (BOOL) _isBasicallyHorizontallyCompact;
 - (id) _preservedDetailController;
 - (BOOL) _canDisplayHostedMaster;
 - (BOOL) _canSlideMaster;
 - (void) _viewControllerHiding:(id)a ;
 - (void) _updateDisplayModeButtonItem;
 - (void) _prepareForCompactLayout;
 - (void) _setCollapsedState:(long long)a ;
 - (id) _childContainingSender:(id)a ;
 - (void) _setPreservedDetailController:(id)a ;
 - (id) _secondaryViewControllerForCollapsing;
 - (id) _primaryViewControllerForCollapsing;
 - (void) _collapseSecondaryViewController:(id)a ontoPrimaryViewController:(id)b ;
 - (id) _primaryViewControllerForExpanding;
 - (id) _separateSecondaryViewControllerFromPrimaryViewController:(id)a ;
 - (@?) _didChangeBoundsBlock;
 - (void) _setDidChangeBoundsBlock:(@?)a ;
 - (void) _willTransitionToWindowSize:({CGSize=dd})a oldWidthClass:(long long)b newWidthClass:(long long)c ;
 - (void) _invokeDidChangeBoundsBlock;
 - (void) _transitionFromTraitCollection:(id)a withTransitionCoordinator:(id)b ;
 - (void) _didTransitionTraitCollection;
 - (BOOL) _isLandscape;
 - (void) _showMasterViewAnimated:(BOOL)a ;
 - (BOOL) presentsWithGesture;
 - (long long) preferredDisplayMode;
 - (void) _changeToDisplayMode:(long long)a forCurrentOrientationOnly:(BOOL)b ;
 - (id) _defaultDisplayModes;
 - (void) _displayModeWillChangeTo:(long long)a ;
 - (void) _setPrimaryHidingStateForCurrentOrientation:(long long)a ;
 - (void) _setPrimaryHidingState:(long long)a ;
 - (void) _dismissMasterViewController:(BOOL)a ;
 - (void) _presentMasterViewController:(BOOL)a ;
 - (void) _displayModeDidChange;
 - (void) _cacheEffectiveTargetDisplayMode;
 - (long long) _defaultTargetDisplayMode;
 - (id) _displayModeButtonItemTitle;
 - (void) _triggerDisplayModeAction:(id)a ;
 - (@?) _clearPreventRotationHook;
 - (void) _setClearPreventRotationHook:(@?)a ;
 - (BOOL) _shouldPreventAutorotation;
 - (void) _slideIn:(BOOL)a viewController:(id)b animated:(BOOL)c totalDuration:(double)d completion:(@?)e ;
 - (BOOL) _shouldModifyDisplayModeWhenRotating;
 - (void) _invalidateHidesMasterViewInOrientation:(long long)a ;
 - (BOOL) revealsMasterViewDuringRotationFromInterfaceOrientation:(long long)a toInterfaceOrientation:(long long)b ;
 - (BOOL) hidesMasterViewDuringRotationFromInterfaceOrientation:(long long)a toInterfaceOrientation:(long long)b ;
 - (BOOL) _isRotating;
 - (void) snapshotMasterView;
 - (void) snapshotAllViews;
 - (void) snapshotForRotationFromInterfaceOrientation:(long long)a toInterfaceOrientation:(long long)b ;
 - (void) _setupRoundedCorners;
 - (void) _setupUnderBarSeparatorView;
 - (void) _removeRoundedCorners;
 - (void) _updateMasterViewControllerFrame;
 - (id) _primaryDimmingView;
 - (float) leftColumnWidth;
 - (BOOL) _isCollapsed;
 - (void) setHidesMasterViewInPortrait:(BOOL)a ;
 - (float) masterColumnWidth;
 - (void) setMasterColumnWidth:(float)a ;
 - (void) setMinimumPrimaryColumnWidth:(double)a ;
 - (void) setMaximumPrimaryColumnWidth:(double)a ;
 - (void) setPreferredPrimaryColumnWidthFraction:(double)a ;
 - (void) setPreferredLeftColumnWidth:(float)a ;
 - (float) preferredLeftColumnWidth;
 - (void) setGutterWidth:(float)a ;
 - (void) setPresentsWithGesture:(BOOL)a ;
 - (void) setPreferredDisplayMode:(long long)a ;
 - (id) displayModeButtonItem;
 - (void) _setDisplayModeButtonItemTitle:(id)a ;
 - ({CGSize=dd}) _contentSizeForChildViewController:(id)a inPopoverController:(id)b ;
 - (void) _presentGestureAttemptedWithPresentedPopoverController:(id)a ;
 - (unsigned long long) supportedInterfaceOrientations:(id)a ;
 - (void) _setResizesDetailOnSlide:(BOOL)a ;
 - (void) _popoverController:(id)a willAnimateToFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) _popoverController:(id)a willChangeToVisible:(BOOL)b ;
 - (void) _popoverController:(id)a didChangeFromVisible:(BOOL)b ;
 - (BOOL) resizeForKeyboard;
 - (void) setResizeForKeyboard:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (void) _commonInit;


@end
