
@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext {

}

 - (BOOL) isUISubclass;
 - (id) payload;
 - (void) _setLifecycleActionType:(Q)a;
 - (Q) _lifecycleActionType;
 - (BOOL) forTesting;
 - (d) userLaunchEventTime;
 - (d) execTime;
 - (BOOL) safeMode;
 - (void) setPayload:(id)a;
 - (void) setForTesting:(BOOL)a;
 - (void) setSafeMode:(BOOL)a;
 - (void) setUserLaunchEventTime:(d)a;
 - (void) setExecTime:(d)a;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;


@end
