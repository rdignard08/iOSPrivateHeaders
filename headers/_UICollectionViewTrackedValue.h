
@interface _UICollectionViewTrackedValue : NSObject {

    d _trackedValue;
    @"NSArray" _values;
    q _valuesCount;
    q _currentIndex;
    BOOL _isAccumulating;
}
@property (nonatomic, assign, readwrite) NSNumber* trackedValue;
@property (nonatomic, assign, readwrite) NSNumber* isAccumulating;

 - (void) addValue:(d)a;
 - (d) trackedValue;
 - (BOOL) isAccumulating;
 - (void) setIsAccumulating:(BOOL)a;
 - (void) setTrackedValue:(d)a;
 - (id) init;
 - (d) speed;


@end
