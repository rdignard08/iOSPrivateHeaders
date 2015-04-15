
@interface FBSWorkspaceSceneUpdateEvent : FBSWorkspaceSceneEvent {

    FBSSceneSettingsDiff* _settings;
    FBSSceneTransitionContext* _transitionContext;
}

 - (void) dealloc;
 - (id) transitionContext;
 - (void) setTransitionContext:(id)a;
 - (id) settingsDiff;
 - (void) setSettingsDiff:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
