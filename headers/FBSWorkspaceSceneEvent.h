
@interface FBSWorkspaceSceneEvent : FBSWorkspaceEvent {

    NSString* _sceneID;
}

 - (void) dealloc;
 - (id) sceneID;
 - (void) setSceneID:(id)a ;
 - (void) encodeWithXPCDictionary:(id)a ;
 - (id) initWithXPCDictionary:(id)a ;


@end
