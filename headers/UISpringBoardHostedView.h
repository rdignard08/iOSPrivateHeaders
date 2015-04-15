
@interface UISpringBoardHostedView : UIView {

    NSString* _remoteViewIdentifier;
    UIWindow* _remoteWindow;
    BOOL _remoteViewOpaque;
}

 - (void) dealloc;
 - (void) unregister;
 - (void) setRemoteViewOpaque:(BOOL)a ;
 - (void) registerWithIdentifier:(id)a andController:(id)b ;
 - (id) remoteViewIdentifier;


@end
