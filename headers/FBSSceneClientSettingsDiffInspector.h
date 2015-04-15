
@interface FBSSceneClientSettingsDiffInspector : NSObject {

    BSMutableSettings* _observerInfo;
    BOOL _iteratingObservers;
}

 - (id) description;
 - (void) dealloc;
 - (void) inspectDiff:(id)awithContext:(^v)b;
 - (void) observeOtherSetting:(unsigned long long)awithBlock:(@?)b;
 - (id) init;
 - (void) _addObserver:(id)aforSetting:(unsigned long long)binInfo:(id)c;
 - (void) removeAllObservers;
 - (void) observeClassWithBlock:(@?)a;
 - (void) observeOcclusionsWithBlock:(@?)a;
 - (void) observePreferredLevelWithBlock:(@?)a;
 - (void) observePreferredInterfaceOrientationWithBlock:(@?)a;


@end
