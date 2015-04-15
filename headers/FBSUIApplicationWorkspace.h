
@protocol FBSUIApplicationWorkspaceClientDelegate;
@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate> {

}

 - (void) client:(id)ahandleLaunch:(id)bwithCompletion:(@?)c;
 - (void) clientHandleExit:(id)a;
 - (void) clientHandleAssertionExpirationImminent:(id)a;
 - (Class) _clientClass;
 - (BOOL) isUIApplicationWorkspace;


@end
