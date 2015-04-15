
@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource;
@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

    int _hostPID;
    @"NSString" _hostBundleID;
    {?="val"[8I]} _hostAuditToken;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    @"NSArray" _plugInScenes;
    @"UIViewController" _localViewController;
    @"NSString" _presentationControllerClassName;
    @"_UIHostedWindow" _hostedWindow;
    BOOL _isResigningFirstResponderFromHostNotification;
    BOOL _disableAutomaticKeyboardBehavior;
    @"UIActionSheet" _hostedActionSheet;
    BOOL _serviceInPopover;
    long long _hostStatusBarOrientation;
    double _hostStatusBarHeight;
    @"NSMutableArray" _deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    @"_UIHostedTextServiceSession" _textServiceSession;
    @"_UIAsyncInvocation" _prepareForDisconnectionInvocation;
    @"_UIAsyncInvocation" _invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    @"UIPopoverController" _displayedPopoverController;
    @"_UIViewServiceDummyPopoverController" _dummyPopoverController;
    unsigned long long _supportedOrientations;
    BOOL _canShowTextServices;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _localViewControllerRequestedInsets;
    @"_UIViewControllerOneToOneTransitionContext" _viewControllerTransitioningContext;
    @"<_UIViewServiceViewControllerOperatorDelegate>" _delegate;
}
 + (id) XPCInterface;
 + (id) operatorWithRemoteViewControllerProxy:(id)ahostPID:(int)bhostBundleID:(id)chostAuditToken:({?=[8I]})d;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) invalidate;
 - (void) setDelegate:(id)a;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) _canShowTextServices;
 - (id) _showServiceForText:(id)atype:(long long)bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})cinView:(id)d;
 - (id) preferredFocusedItem;
 - (void) setNeedsStatusBarAppearanceUpdate;
 - (id) _viewControllersForRotationCallbacks;
 - (BOOL) _disableAutomaticKeyboardBehavior;
 - (void) preferredContentSizeDidChangeForChildContentContainer:(id)a;
 - ({CGSize=dd}) preferredContentSize;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - ({UIEdgeInsets=dddd}) _edgeInsetsForChildViewController:(id)ainsetsAreAbsolute:(^B)b;
 - ({CGSize=dd}) contentSizeForViewInPopover;
 - (void) systemLayoutFittingSizeDidChangeForChildViewController:(id)a;
 - (void) viewDidLoad;
 - (BOOL) shouldAutomaticallyForwardRotationMethods;
 - (BOOL) shouldAutomaticallyForwardAppearanceMethods;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForContainerViewInSheetForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})adisplayingTopView:(BOOL)bandBottomView:(BOOL)c;
 - (void) _updateSupportedInterfaceOrientationsIfNecessary;
 - (id) _presentationControllerClassName;
 - (void) _willBecomeContentViewControllerOfPopover:(id)a;
 - (void) _didBecomeContentViewControllerOfPopover:(id)a;
 - (void) _willResignContentViewControllerOfPopover:(id)a;
 - (void) _didResignContentViewControllerOfPopover:(id)a;
 - (BOOL) _isHostedRootViewController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForContainerViewInSheetForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (int) __automatic_invalidation_logic;
 - (void) _invalidateUnconditionallyThen:(@?)a;
 - (void) addDeputyRotationDelegate:(id)a;
 - (void) establishViewControllerDeputyWithProxy:(id)acompletionHandler:(@?)b;
 - (id) _queue;
 - (void) __setContentSize:({CGSize=dd})a;
 - (void) __createViewController:(id)awithContextToken:(id)bfbsDisplays:(id)cappearanceSerializedRepresentations:(id)dlegacyAppearance:(BOOL)etraitCollection:(id)finitialInterfaceOrientation:(long long)ghostAccessibilityServerPort:(id)hcanShowTextServices:(BOOL)ireplyHandler:(@?)j;
 - (void) __hostReadyToReceiveMessagesFromServiceViewController;
 - (void) _firstResponderDidChange:(id)a;
 - (void) __hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)a;
 - (void) __hostDidChangeStatusBarHeight:(double)a;
 - (void) __hostWillEnterForeground;
 - (void) __hostDidEnterBackground;
 - (void) __hostDidSetContentOverlayInsets:({UIEdgeInsets=dddd})a;
 - (void) __scrollToTopFromTouchAtViewLocation:({CGPoint=dd})aresultHandler:(@?)b;
 - (void) __hostDidPromoteFirstResponder;
 - (void) __hostedActionSheetDidPresent;
 - (void) __hostedActionSheetDidDismissWithClickedButtonIndex:(long long)a;
 - (void) __hostedActionSheetClickedButtonAtIndex:(long long)a;
 - (void) __hostDisablesAutomaticKeyboardBehavior:(BOOL)a;
 - (void) __hostViewWillAppear:(BOOL)ainInterfaceOrientation:(long long)btraitCollection:(id)cstatusBarHeight:(double)dcompletionHandler:(@?)e;
 - (void) __hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)anewHostingHandleReplyHandler:(@?)b;
 - (void) __hostViewDidAppear:(BOOL)a;
 - (void) __hostViewWillDisappear:(BOOL)a;
 - (void) __hostViewDidDisappear:(BOOL)a;
 - (void) __hostDidSetPresentationControllerClassName:(id)a;
 - (void) __hostViewWillTransitionToSize:({CGSize=dd})awithContextDescription:(id)bstatusBarHeight:(double)cwhenDone:(@?)d;
 - (void) __hostWillAnimateRotationToInterfaceOrientation:(long long)aduration:(double)bskipSelf:(BOOL)c;
 - (void) __hostWillRotateToInterfaceOrientation:(long long)aduration:(double)bskipSelf:(BOOL)c;
 - (void) __hostDidRotateFromInterfaceOrientation:(long long)askipSelf:(BOOL)b;
 - (void) __setServiceInPopover:(BOOL)a;
 - (void) __setHostTraitCollection:(id)a;
 - (void) __hostWillTransitionToTraitCollection:(id)awithContextDescription:(id)bdeferIfAnimated:(BOOL)c;
 - (void) __dimmingViewWasTapped;
 - (id) _appearanceSource;
 - (void) __hostDidUpdateAppearanceWithSerializedRepresentations:(id)aoriginalSource:(id)blegacyAppearance:(BOOL)c;
 - (void) __setHostTintColor:(id)atintAdjustmentMode:(long long)b;
 - (void) __exchangeAccessibilityPortInformation:(id)areplyHandler:(@?)b;
 - (void) __textServiceDidDismiss;
 - (void) __saveStateForSession:(id)arestorationAnchor:(id)bcompletionHandler:(@?)c;
 - (void) __restoreStateForSession:(id)arestorationAnchor:(id)b;
 - (void) __prepareForDisconnectionWithCompletionHandler:(@?)a;
 - (BOOL) _presentActionSheet:(id)ainView:(id)bfromYCoordinate:(double)c;
 - (void) dummyPopoverController:(id)apopoverViewDidSetUseToolbarShine:(BOOL)b;
 - (void) dummyPopoverController:(id)adidChangeContentSize:({CGSize=dd})banimated:(BOOL)c;
 - (void) __createViewController:(id)awithAppearanceSerializedRepresentations:(id)blegacyAppearance:(BOOL)chostAccessibilityServerPort:(id)dcanShowTextServices:(BOOL)ereplyHandler:(@?)f;
 - (void) _prepareForDisconnectionUnconditionallyThen:(@?)a;
 - (void) _popoverWillPresent:(id)a;
 - (void) _popoverDidDismiss:(id)a;
 - (id) _inputViewsKey;
 - (BOOL) _presentActionSheet:(id)aasPopoverFromBarButtonItem:(id)borFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})cinView:(id)dwithPreferredArrowDirections:(unsigned long long)epassthroughViews:(id)fbackgroundStyle:(long long)ganimated:(BOOL)h;
 - (void) _dismissActionSheet:(id)awithClickedButtonIndex:(long long)banimated:(BOOL)c;
 - (void) _viewServiceIsDisplayingPopoverController:(id)a;
 - (void) _windowDidUpdateCurrentTintView:(id)a;
 - (void) _windowDidRegisterScrollToTopView;
 - (void) _windowDidUnregisterScrollToTopView;
 - (BOOL) _shouldForwardLegacyRotationOnly;
 - (id) _supportedInterfaceOrientationsForViewController:(id)a;
 - (BOOL) _validateSessionIdentifier:(id)arestorationAnchor:(id)bfunctionName:(r*)c;
 - (id) _sessionForStateRestoration:(id)a;
 - (void) dismissHostedTextServiceSession:(id)aanimated:(BOOL)b;
 - (id) delegate;
 - (BOOL) becomeFirstResponder;


@end
