
@interface FBSSceneImpl : FBSScene {

    <FBSSceneDelegate>* _delegate;
    NSString* _identifier;
    FBSSceneSettings* _settings;
    FBSSceneClientSettings* _clientSettings;
    <FBSSceneUpdater>* _updater;
    CADisplay* _display;
    FBSDisplay* _fbsDisplay;
    FBSSerialQueue* _callOutQueue;
    NSObject<OS_dispatch_queue>* _queue;
    NSMutableArray* _contexts;
    BOOL _shouldObserveContexts;
}

 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) fbsDisplay;
 - (id) settings;
 - (void) attachContext:(id)a ;
 - (void) detachContext:(id)a ;
 - (void) updateClientSettingsWithBlock:(@?)a ;
 - (id) delegate;
 - (id) identifier;
 - (void) _performDelegateCallOut:(@?)a ;
 - (id) initWithQueue:(id)a identifier:(id)b display:(id)c settings:(id)d clientSettings:(id)e ;
 - (id) clientSettings;
 - (id) contexts;
 - (void) updateClientSettings:(id)a withTransitionContext:(id)b ;
 - (void) attachSceneContext:(id)a ;
 - (void) detachSceneContext:(id)a ;
 - (id) _descriptionWithMultilinePrefix:(id)a ;
 - (id) _initWithQueue:(id)a callOutQueue:(id)b identifier:(id)c display:(id)d settings:(id)e clientSettings:(id)f ;
 - (id) _initWithInternalQueue:(id)a callOutQueue:(id)b updater:(id)c identifier:(id)d display:(id)e settings:(id)f clientSettings:(id)g ;
 - (void) _updateContext:(id)a ;
 - (id) _initWithWorkspace:(id)a updater:(id)b identifier:(id)c display:(id)d settings:(id)e clientSettings:(id)f ;
 - (id) _initWithCallOutQueue:(id)a updater:(id)b identifier:(id)c display:(id)d settings:(id)e clientSettings:(id)f ;
 - (void) _queue_invalidate;
 - (void) updater:(id)a didUpdateSettings:(id)b withDiff:(id)c transitionContext:(id)d completion:(@?)e ;
 - (void) updater:(id)a didReceiveActions:(id)b ;
 - (BOOL) sceneContextShouldObserveUpdates:(id)a ;
 - (void) sceneContextDidUpdate:(id)a ;
 - (void) sceneContextDidInvalidate:(id)a ;
 - (void) sendActions:(id)a ;
 - (id) display;


@end
