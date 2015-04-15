
@interface _UICollectionViewTrackedValueItem : NSObject {

    double _timeStamp;
    double _value;
}
@property (nonatomic, assign, readwrite) NSNumber* timeStamp;
@property (nonatomic, assign, readwrite) NSNumber* value;

 - (double) timeStamp;
 - (void) setTimeStamp:(double)a;
 - (void) setValue:(double)a;
 - (double) value;


@end
