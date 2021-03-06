
@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource;
@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

    int _hostPID;
    NSString* _hostBundleID;
    val* _hostAuditToken;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    NSArray* _plugInScenes;
    UIViewController* _localViewController;
    NSString* _presentationControllerClassName;
    _UIHostedWindow* _hostedWindow;
    BOOL _isResigningFirstResponderFromHostNotification;
    BOOL _disableAutomaticKeyboardBehavior;
    UIActionSheet* _hostedActionSheet;
    BOOL _serviceInPopover;
    long long _hostStatusBarOrientation;
    double _hostStatusBarHeight;
    NSMutableArray* _deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    _UIHostedTextServiceSession* _textServiceSession;
    _UIAsyncInvocation* _prepareForDisconnectionInvocation;
    _UIAsyncInvocation* _invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIPopoverController* _displayedPopoverController;
    _UIViewServiceDummyPopoverController* _dummyPopoverController;
    unsigned long long _supportedOrientations;
    BOOL _canShowTextServices;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _localViewControllerRequestedInsets;
    _UIViewControllerOneToOneTransitionContext* _viewControllerTransitioningContext;
    <_UIViewServiceViewControllerOperatorDelegate>* _delegate;
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
 - (void) setDelegate:(id)a ;
 - (BOOL) canPerformAction:(SEL)a withSender:(id)b ;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) _canShowTextServices;
 - (id) _showServiceForText:(id)a type:(long long)b fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c inView:(id)d ;
 - (id) preferredFocusedItem;
 - (void) setNeedsStatusBarAppearanceUpdate;
 - (id) _viewControllersForRotationCallbacks;
 - (BOOL) _disableAutomaticKeyboardBehavior;
 - (void) preferredContentSizeDidChangeForChildContentContainer:(id)a ;
 - ({CGSize=dd}) preferredContentSize;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - ({UIEdgeInsets=dddd}) _edgeInsetsForChildViewController:(id)a insetsAreAbsolute:(^B)b ;
 - ({CGSize=dd}) contentSizeForViewInPopover;
 - (void) systemLayoutFittingSizeDidChangeForChildViewController:(id)a ;
 - (void) viewDidLoad;
 - (BOOL) shouldAutomaticallyForwardRotationMethods;
 - (BOOL) shouldAutomaticallyForwardAppearanceMethods;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForContainerViewInSheetForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a displayingTopView:(BOOL)b andBottomView:(BOOL)c ;
 - (void) _updateSupportedInterfaceOrientationsIfNecessary;
 - (id) _presentationControllerClassName;
 - (void) _willBecomeContentViewControllerOfPopover:(id)a ;
 - (void) _didBecomeContentViewControllerOfPopover:(id)a ;
 - (void) _willResignContentViewControllerOfPopover:(id)a ;
 - (void) _didResignContentViewControllerOfPopover:(id)a ;
 - (BOOL) _isHostedRootViewController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForContainerViewInSheetForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (int) __automatic_invalidation_logic;
 - (void) _invalidateUnconditionallyThen:(@?)a ;
 - (void) addDeputyRotationDelegate:(id)a ;
 - (void) establishViewControllerDeputyWithProxy:(id)a completionHandler:(@?)b ;
 - (id) _queue;
 - (void) __setContentSize:({CGSize=dd})a ;
 - (void) __createViewController:(id)a withContextToken:(id)b fbsDisplays:(id)c appearanceSerializedRepresentations:(id)d legacyAppearance:(BOOL)e traitCollection:(id)f initialInterfaceOrientation:(long long)g hostAccessibilityServerPort:(id)h canShowTextServices:(BOOL)i replyHandler:(@?)j ;
 - (void) __hostReadyToReceiveMessagesFromServiceViewController;
 - (void) _firstResponderDidChange:(id)a ;
 - (void) __hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)a ;
 - (void) __hostDidChangeStatusBarHeight:(double)a ;
 - (void) __hostWillEnterForeground;
 - (void) __hostDidEnterBackground;
 - (void) __hostDidSetContentOverlayInsets:({UIEdgeInsets=dddd})a ;
 - (void) __scrollToTopFromTouchAtViewLocation:({CGPoint=dd})a resultHandler:(@?)b ;
 - (void) __hostDidPromoteFirstResponder;
 - (void) __hostedActionSheetDidPresent;
 - (void) __hostedActionSheetDidDismissWithClickedButtonIndex:(long long)a ;
 - (void) __hostedActionSheetClickedButtonAtIndex:(long long)a ;
 - (void) __hostDisablesAutomaticKeyboardBehavior:(BOOL)a ;
 - (void) __hostViewWillAppear:(BOOL)a inInterfaceOrientation:(long long)b traitCollection:(id)c statusBarHeight:(double)d completionHandler:(@?)e ;
 - (void) __hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)a newHostingHandleReplyHandler:(@?)b ;
 - (void) __hostViewDidAppear:(BOOL)a ;
 - (void) __hostViewWillDisappear:(BOOL)a ;
 - (void) __hostViewDidDisappear:(BOOL)a ;
 - (void) __hostDidSetPresentationControllerClassName:(id)a ;
 - (void) __hostViewWillTransitionToSize:({CGSize=dd})a withContextDescription:(id)b statusBarHeight:(double)c whenDone:(@?)d ;
 - (void) __hostWillAnimateRotationToInterfaceOrientation:(long long)a duration:(double)b skipSelf:(BOOL)c ;
 - (void) __hostWillRotateToInterfaceOrientation:(long long)a duration:(double)b skipSelf:(BOOL)c ;
 - (void) __hostDidRotateFromInterfaceOrientation:(long long)a skipSelf:(BOOL)b ;
 - (void) __setServiceInPopover:(BOOL)a ;
 - (void) __setHostTraitCollection:(id)a ;
 - (void) __hostWillTransitionToTraitCollection:(id)a withContextDescription:(id)b deferIfAnimated:(BOOL)c ;
 - (void) __dimmingViewWasTapped;
 - (id) _appearanceSource;
 - (void) __hostDidUpdateAppearanceWithSerializedRepresentations:(id)a originalSource:(id)b legacyAppearance:(BOOL)c ;
 - (void) __setHostTintColor:(id)a tintAdjustmentMode:(long long)b ;
 - (void) __exchangeAccessibilityPortInformation:(id)a replyHandler:(@?)b ;
 - (void) __textServiceDidDismiss;
 - (void) __saveStateForSession:(id)a restorationAnchor:(id)b completionHandler:(@?)c ;
 - (void) __restoreStateForSession:(id)a restorationAnchor:(id)b ;
 - (void) __prepareForDisconnectionWithCompletionHandler:(@?)a ;
 - (BOOL) _presentActionSheet:(id)a inView:(id)b fromYCoordinate:(double)c ;
 - (void) dummyPopoverController:(id)a popoverViewDidSetUseToolbarShine:(BOOL)b ;
 - (void) dummyPopoverController:(id)a didChangeContentSize:({CGSize=dd})b animated:(BOOL)c ;
 - (void) __createViewController:(id)a withAppearanceSerializedRepresentations:(id)b legacyAppearance:(BOOL)c hostAccessibilityServerPort:(id)d canShowTextServices:(BOOL)e replyHandler:(@?)f ;
 - (void) _prepareForDisconnectionUnconditionallyThen:(@?)a ;
 - (void) _popoverWillPresent:(id)a ;
 - (void) _popoverDidDismiss:(id)a ;
 - (id) _inputViewsKey;
 - (BOOL) _presentActionSheet:(id)a asPopoverFromBarButtonItem:(id)b orFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c inView:(id)d withPreferredArrowDirections:(unsigned long long)e passthroughViews:(id)f backgroundStyle:(long long)g animated:(BOOL)h ;
 - (void) _dismissActionSheet:(id)a withClickedButtonIndex:(long long)b animated:(BOOL)c ;
 - (void) _viewServiceIsDisplayingPopoverController:(id)a ;
 - (void) _windowDidUpdateCurrentTintView:(id)a ;
 - (void) _windowDidRegisterScrollToTopView;
 - (void) _windowDidUnregisterScrollToTopView;
 - (BOOL) _shouldForwardLegacyRotationOnly;
 - (id) _supportedInterfaceOrientationsForViewController:(id)a ;
 - (BOOL) _validateSessionIdentifier:(id)a restorationAnchor:(id)b functionName:(r*)c ;
 - (id) _sessionForStateRestoration:(id)a ;
 - (void) dismissHostedTextServiceSession:(id)a animated:(BOOL)b ;
 - (id) delegate;
 - (BOOL) becomeFirstResponder;


@end
