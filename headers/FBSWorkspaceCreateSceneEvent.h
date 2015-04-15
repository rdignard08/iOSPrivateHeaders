
@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {

    @"FBSSceneClientSettingsDiff" _clientSettings;
    @"FBSDisplay" _display;
}

 - (void) dealloc;
 - (id) clientSettingsDiff;
 - (void) setClientSettingsDiff:(id)a;
 - (void) setDisplay:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) display;


@end
