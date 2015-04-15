
@interface FBSWorkspaceSceneClientSettingsChangedEvent : FBSWorkspaceSceneEvent {

    FBSSceneClientSettingsDiff* _clientSettings;
    FBSSceneTransitionContext* _transition;
}

 - (void) dealloc;
 - (id) transitionContext;
 - (id) clientSettingsDiff;
 - (void) setClientSettingsDiff:(id)a ;
 - (void) setTransitionContext:(id)a ;
 - (void) encodeWithXPCDictionary:(id)a ;
 - (id) initWithXPCDictionary:(id)a ;


@end
