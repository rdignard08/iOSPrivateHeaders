
@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent {

    FBSSceneClientSettingsDiff _clientSettings;
}

 - (void) dealloc;
 - (id) clientSettingsDiff;
 - (void) setClientSettingsDiff:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
