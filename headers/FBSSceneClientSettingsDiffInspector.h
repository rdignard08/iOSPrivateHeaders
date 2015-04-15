
@interface FBSSceneClientSettingsDiffInspector : NSObject {

    @"BSMutableSettings" _observerInfo;
    BOOL _iteratingObservers;
}

 - (id) description;
 - (void) dealloc;
 - (void) inspectDiff:(id)awithContext:(^v)b;
 - (void) observeOtherSetting:(Q)awithBlock:(@?)b;
 - (id) init;
 - (void) _addObserver:(id)aforSetting:(Q)binInfo:(id)c;
 - (void) removeAllObservers;
 - (void) observeClassWithBlock:(@?)a;
 - (void) observeOcclusionsWithBlock:(@?)a;
 - (void) observePreferredLevelWithBlock:(@?)a;
 - (void) observePreferredInterfaceOrientationWithBlock:(@?)a;


@end
