
@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient {

}

 - (BOOL) willObserveContextsManually;
 - (BOOL) _queue_handleMessageWithType:(q)amessage:(id)b;
 - (void) _queue_handleLaunch:(id)a;
 - (void) _queue_handleExit:(id)a;
 - (void) _queue_handleAssertionExpirationImminent:(id)a;


@end
