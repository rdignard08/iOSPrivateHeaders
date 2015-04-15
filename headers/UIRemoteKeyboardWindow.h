
@interface UIRemoteKeyboardWindow : UITextEffectsWindow {

    BOOL _isViewServiceKeyboard;
    UIView* _viewServiceHostView;
}
 + (id) remoteKeyboardWindowForScreen:(id)acreate:(BOOL)bforViewService:(BOOL)c;

 - (void) invalidate;
 - (BOOL) _isWindowServerHostingManaged;
 - (BOOL) _isHostedInAnotherProcess;
 - (BOOL) _usesWindowServerHitTesting;
 - (BOOL) _alwaysGetsContexts;
 - (void) _didRemoveSubview:(id)a;
 - (id) _basicInitWithScreen:(id)aoptions:(id)b;
 - (BOOL) _matchingOptions:(id)a;
 - (id) viewServiceHostView;
 - (void) setViewServiceHostView:(id)a;


@end
