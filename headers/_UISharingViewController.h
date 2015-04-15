
@interface _UISharingViewController : UIViewController {

    <_UISharingViewControllerDelegatePrivate> _weak_delegate;
    BOOL _collaborationUIEnabled;
    UIImage _thumbnail;
    NSString _auxiliaryActionTitle;
    NSString _mailTemplate;
    NSString _messageTemplate;
    NSString _mailSubject;
    NSString _initialHeaderSubtitle;
    NSString _headerSubtitle;
    NSString _headerActionTitle;
    NSString _appName;
    _UIShareInvitationRemoteViewController _remoteViewController;
    _UIRemoteViewService _remoteViewService;
}

 - (void) dealloc;
 - (id) initWithURL:(id)a;
 - (void) setDelegate:(id)a;
 - (void) _setRemoteViewController:(id)a;
 - (id) _remoteViewController;
 - (void) didMoveToParentViewController:(id)a;
 - (id) remoteViewService;
 - (void) setRemoteViewService:(id)a;
 - (id) _thumbnail;
 - (void) _setThumbnail:(id)a;
 - (id) _auxiliaryActionTitle;
 - (void) _setAuxiliaryActionTitle:(id)a;
 - (id) _mailTemplate;
 - (id) _mailSubject;
 - (void) _setMailSubject:(id)atemplate:(id)b;
 - (id) _initialHeaderSubtitle;
 - (void) _setInitialHeaderSubtitle:(id)a;
 - (id) _headerSubtitle;
 - (void) _setHeaderSubtitle:(id)a;
 - (id) _headerActionTitle;
 - (void) _setHeaderActionTitle:(id)a;
 - (id) _messageTemplate;
 - (void) _setMessageTemplate:(id)a;
 - (BOOL) _collaborationUIEnabled;
 - (void) _setCollaborationUIEnabled:(BOOL)a;
 - (id) _appName;
 - (void) _setAppName:(id)a;
 - (void) _setPrivateDelegate:(id)a;
 - (id) _privateDelegate;
 - (void) _setMailSubject:(id)a;
 - (void) _setMailTemplate:(id)a;
 - (void) _performAuxiliaryActionWithCompletion:(@?)a;
 - (void) _performHeaderActionWithCompletion:(@?)a;
 - (void) _shareDidChange;
 - (void) _shareWasMadePrivate;
 - (id) delegate;


@end
