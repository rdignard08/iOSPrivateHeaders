
@interface _UICollectionViewTrackedValue : NSObject {

    double _trackedValue;
    NSArray* _values;
    long long _valuesCount;
    long long _currentIndex;
    BOOL _isAccumulating;
}
@property (nonatomic, assign, readwrite) NSNumber* trackedValue;
@property (nonatomic, assign, readwrite) NSNumber* isAccumulating;

 - (void) addValue:(double)a;
 - (double) trackedValue;
 - (BOOL) isAccumulating;
 - (void) setIsAccumulating:(BOOL)a;
 - (void) setTrackedValue:(double)a;
 - (id) init;
 - (double) speed;


@end
