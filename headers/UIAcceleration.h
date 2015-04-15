
@interface UIAcceleration : NSObject {

    double timestamp;
    double x;
    double y;
    double z;
}
@property (nonatomic, assign, readwrite) NSNumber* timestamp;
@property (nonatomic, assign, readwrite) NSNumber* x;
@property (nonatomic, assign, readwrite) NSNumber* y;
@property (nonatomic, assign, readwrite) NSNumber* z;

 - (id) description;
 - (double) x;
 - (void) setX:(double)a ;
 - (double) y;
 - (void) setY:(double)a ;
 - (double) z;
 - (void) setZ:(double)a ;
 - (double) timestamp;
 - (void) setTimestamp:(double)a ;


@end
