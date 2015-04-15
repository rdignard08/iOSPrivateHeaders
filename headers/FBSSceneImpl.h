
@interface FBSSceneImpl : FBSScene {

    <FBSSceneDelegate> _delegate;
    NSString _identifier;
    FBSSceneSettings _settings;
    FBSSceneClientSettings _clientSettings;
    <FBSSceneUpdater> _updater;
    CADisplay _display;
    FBSDisplay _fbsDisplay;
    FBSSerialQueue _callOutQueue;
    NSObject<OS_dispatch_queue> _queue;
    NSMutableArray _contexts;
    BOOL _shouldObserveContexts;
}

 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) fbsDisplay;
 - (id) settings;
 - (void) attachContext:(id)a;
 - (void) detachContext:(id)a;
 - (void) updateClientSettingsWithBlock:(@?)a;
 - (id) delegate;
 - (id) identifier;
 - (void) _performDelegateCallOut:(@?)a;
 - (id) initWithQueue:(id)aidentifier:(id)bdisplay:(id)csettings:(id)dclientSettings:(id)e;
 - (id) clientSettings;
 - (id) contexts;
 - (void) updateClientSettings:(id)awithTransitionContext:(id)b;
 - (void) attachSceneContext:(id)a;
 - (void) detachSceneContext:(id)a;
 - (id) _descriptionWithMultilinePrefix:(id)a;
 - (id) _initWithQueue:(id)acallOutQueue:(id)bidentifier:(id)cdisplay:(id)dsettings:(id)eclientSettings:(id)f;
 - (id) _initWithInternalQueue:(id)acallOutQueue:(id)bupdater:(id)cidentifier:(id)ddisplay:(id)esettings:(id)fclientSettings:(id)g;
 - (void) _updateContext:(id)a;
 - (id) _initWithWorkspace:(id)aupdater:(id)bidentifier:(id)cdisplay:(id)dsettings:(id)eclientSettings:(id)f;
 - (id) _initWithCallOutQueue:(id)aupdater:(id)bidentifier:(id)cdisplay:(id)dsettings:(id)eclientSettings:(id)f;
 - (void) _queue_invalidate;
 - (void) updater:(id)adidUpdateSettings:(id)bwithDiff:(id)ctransitionContext:(id)dcompletion:(@?)e;
 - (void) updater:(id)adidReceiveActions:(id)b;
 - (BOOL) sceneContextShouldObserveUpdates:(id)a;
 - (void) sceneContextDidUpdate:(id)a;
 - (void) sceneContextDidInvalidate:(id)a;
 - (void) sendActions:(id)a;
 - (id) display;


@end
