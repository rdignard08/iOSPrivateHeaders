
@protocol FBSUIApplicationWorkspaceClientDelegate;
@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate> {

}

 - (void) client:(id)a handleLaunch:(id)b withCompletion:(@?)c ;
 - (void) clientHandleExit:(id)a ;
 - (void) clientHandleAssertionExpirationImminent:(id)a ;
 - (Class) _clientClass;
 - (BOOL) isUIApplicationWorkspace;


@end
