
@interface FBSSceneClientSettingsDiffInspector : NSObject {

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
 - (void) observeOcclusionsWithBlock:(@?)a ;
 - (void) observePreferredLevelWithBlock:(@?)a ;
 - (void) observePreferredInterfaceOrientationWithBlock:(@?)a ;


@end
