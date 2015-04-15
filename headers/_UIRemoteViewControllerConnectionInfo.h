
@interface _UIRemoteViewControllerConnectionInfo : NSObject {

    BOOL _prefersStatusBarHidden;
    _UIViewServiceInterface* _interface;
    id _viewControllerOperatorProxy;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    id _textEffectsOperatorProxy;
    NSArray* _serviceViewControllerSupportedInterfaceOrientations;
    _UIViewServiceXPCMachSendRight* _serviceAccessibilityServerPortWrapper;
    long long _preferredStatusBarStyle;
    _UIHostedWindowHostingHandle* _hostedWindowHostingHandle;
    _UIHostedWindowHostingHandle* _textEffectsWindowHostingHandle;
    _UIHostedWindowHostingHandle* _textEffectsWindowAboveStatusBarHostingHandle;
    _UIHostedWindowHostingHandle* _remoteKeyboardsWindowHostingHandle;
}
@property (atomic, retain, readwrite) _UIViewServiceInterface* interface;
@property (atomic, retain, readwrite) NSNumber* viewControllerOperatorProxy;
@property (atomic, retain, readwrite) NSNumber* serviceViewControllerProxy;
@property (atomic, retain, readwrite) NSNumber* serviceViewControllerControlMessageProxy;
@property (atomic, retain, readwrite) NSNumber* textEffectsOperatorProxy;
@property (atomic, retain, readwrite) NSArray* serviceViewControllerSupportedInterfaceOrientations;
@property (atomic, retain, readwrite) _UIViewServiceXPCMachSendRight* serviceAccessibilityServerPortWrapper;
@property (atomic, assign, readwrite) NSNumber* preferredStatusBarStyle;
@property (atomic, assign, readwrite) NSNumber* prefersStatusBarHidden;
@property (atomic, retain, readwrite) _UIHostedWindowHostingHandle* hostedWindowHostingHandle;
@property (atomic, retain, readwrite) _UIHostedWindowHostingHandle* textEffectsWindowHostingHandle;
@property (atomic, retain, readwrite) _UIHostedWindowHostingHandle* textEffectsWindowAboveStatusBarHostingHandle;
@property (atomic, retain, readwrite) _UIHostedWindowHostingHandle* remoteKeyboardsWindowHostingHandle;

 - (id) interface;
 - (void) setInterface:(id)a;
 - (void) dealloc;
 - (long long) preferredStatusBarStyle;
 - (BOOL) prefersStatusBarHidden;
 - (id) serviceViewControllerProxy;
 - (id) viewControllerOperatorProxy;
 - (void) setViewControllerOperatorProxy:(id)a;
 - (void) setServiceViewControllerProxy:(id)a;
 - (id) serviceViewControllerControlMessageProxy;
 - (void) setServiceViewControllerControlMessageProxy:(id)a;
 - (id) textEffectsOperatorProxy;
 - (void) setTextEffectsOperatorProxy:(id)a;
 - (id) serviceViewControllerSupportedInterfaceOrientations;
 - (void) setServiceViewControllerSupportedInterfaceOrientations:(id)a;
 - (id) serviceAccessibilityServerPortWrapper;
 - (void) setServiceAccessibilityServerPortWrapper:(id)a;
 - (void) setPreferredStatusBarStyle:(long long)a;
 - (void) setPrefersStatusBarHidden:(BOOL)a;
 - (id) hostedWindowHostingHandle;
 - (void) setHostedWindowHostingHandle:(id)a;
 - (id) textEffectsWindowHostingHandle;
 - (void) setTextEffectsWindowHostingHandle:(id)a;
 - (id) textEffectsWindowAboveStatusBarHostingHandle;
 - (void) setTextEffectsWindowAboveStatusBarHostingHandle:(id)a;
 - (id) remoteKeyboardsWindowHostingHandle;
 - (void) setRemoteKeyboardsWindowHostingHandle:(id)a;


@end
