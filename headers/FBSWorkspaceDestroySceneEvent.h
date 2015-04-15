
@interface FBSWorkspaceDestroySceneEvent : FBSWorkspaceSceneEvent {

    FBSSceneTransitionContext _transitionContext;
}

 - (void) dealloc;
 - (id) transitionContext;
 - (void) setTransitionContext:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
