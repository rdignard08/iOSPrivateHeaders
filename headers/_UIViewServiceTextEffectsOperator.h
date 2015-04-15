
@protocol _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate;
@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {

    id _remoteViewControllerProxy;
    @"_UIAsyncInvocation" _prepareForDisconnectionInvocation;
    @"_UIAsyncInvocation" _invalidationInvocation;
    @"UIWindow" _hostedWindow;
    {CGPoint="x"d"y"d} _windowOffset;
    BOOL _canRestoreInputViews;
    BOOL _isRestoringInputViews;
    BOOL _didResignForDisappear;
    BOOL _localVCDisablesAutomaticBehaviors;
    @"NSArray" _allowedNotifications;
    i __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
 + (id) XPCInterface;
 + (id) operatorWithRemoteViewControllerProxy:(id)ahostPID:(i)b;

 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) invalidate;
 - (void) willRotateToInterfaceOrientation:(q)aduration:(d)b;
 - (i) __automatic_invalidation_logic;
 - (void) _invalidateUnconditionallyThen:(@?)a;
 - (void) setHostedWindow:(id)adisableAutomaticBehaviors:(BOOL)b;
 - (void) rotateToInterfaceOrientation:(q)aduration:(d)b;
 - (void) finishRotationFromInterfaceOrientation:(q)a;
 - (id) _queue;
 - (void) __setWindowOffset:({CGPoint=dd})a;
 - (void) __createHostedTextEffectsWithReplyHandler:(@?)a;
 - (void) __setHostAllowedNotifications:(id)a;
 - (void) __hostWillEnterForeground;
 - (void) __hostDidEnterBackground;
 - (void) __setNextAutomaticOrderOutDirection:(i)aduration:(d)b;
 - (void) __hostViewWillAppear:(BOOL)a;
 - (void) __hostViewWillDisappear:(BOOL)a;
 - (void) __prepareForDisconnectionWithCompletionHandler:(@?)a;
 - (void) _prepareForDisconnectionUnconditionallyThen:(@?)a;
 - (void) forceSyncToStatusBarOrientation;
 - (void) windowDidGainFirstResponder:(id)a;
 - (void) _sendNotification:(id)a;
 - (void) _viewServiceHostWillEnterForeground:(id)a;
 - (void) _restoreInputViews;


@end
