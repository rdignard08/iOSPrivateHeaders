
@interface _UICollectionViewTrackedValueItem : NSObject {

    d _timeStamp;
    d _value;
}
@property (nonatomic, assign, readwrite) NSNumber* timeStamp;
@property (nonatomic, assign, readwrite) NSNumber* value;

 - (d) timeStamp;
 - (void) setTimeStamp:(d)a;
 - (void) setValue:(d)a;
 - (d) value;


@end
