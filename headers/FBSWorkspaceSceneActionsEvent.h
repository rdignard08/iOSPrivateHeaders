
@interface FBSWorkspaceSceneActionsEvent : FBSWorkspaceSceneEvent {

    NSSet _actions;
}

 - (void) dealloc;
 - (void) setActions:(id)a;
 - (id) actions;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
