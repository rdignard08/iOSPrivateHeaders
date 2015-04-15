
@interface FBSSceneSettingsDiffInspector : NSObject {

    BSMutableSettings* _observerInfo;
    BOOL _iteratingObservers;
}

 - (id) description;
 - (void) dealloc;
 - (void) inspectDiff:(id)a withContext:(^v)b ;
 - (void) observeOtherSetting:(unsigned long long)a withBlock:(@?)b ;
 - (id) init;
 - (void) _addObserver:(id)a forSetting:(unsigned long long)b inInfo:(id)c ;
 - (void) removeAllObservers;
 - (void) observeClassWithBlock:(@?)a ;
 - (void) observeFrameWithBlock:(@?)a ;
 - (void) observeLevelWithBlock:(@?)a ;
 - (void) observeInterfaceOrientationWithBlock:(@?)a ;
 - (void) observeIsBackgroundedWithBlock:(@?)a ;
 - (void) observeOcclusionsWithBlock:(@?)a ;


@end
