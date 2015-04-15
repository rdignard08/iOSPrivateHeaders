
@interface FBSSceneSettingsDiffInspector : NSObject {

    BSMutableSettings _observerInfo;
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
 - (void) observeFrameWithBlock:(@?)a;
 - (void) observeLevelWithBlock:(@?)a;
 - (void) observeInterfaceOrientationWithBlock:(@?)a;
 - (void) observeIsBackgroundedWithBlock:(@?)a;
 - (void) observeOcclusionsWithBlock:(@?)a;


@end
