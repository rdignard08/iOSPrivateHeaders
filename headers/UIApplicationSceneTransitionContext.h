
@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext {

}

 - (BOOL) isUISubclass;
 - (id) payload;
 - (void) _setLifecycleActionType:(unsigned long long)a;
 - (unsigned long long) _lifecycleActionType;
 - (BOOL) forTesting;
 - (double) userLaunchEventTime;
 - (double) execTime;
 - (BOOL) safeMode;
 - (void) setPayload:(id)a;
 - (void) setForTesting:(BOOL)a;
 - (void) setSafeMode:(BOOL)a;
 - (void) setUserLaunchEventTime:(double)a;
 - (void) setExecTime:(double)a;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
