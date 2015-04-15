
@interface FBSWorkspaceSceneUpdateResponseEvent : FBSWorkspaceSceneEvent {

    FBSWorkspaceSceneUpdateResponse _response;
}

 - (void) dealloc;
 - (id) response;
 - (void) setResponse:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
