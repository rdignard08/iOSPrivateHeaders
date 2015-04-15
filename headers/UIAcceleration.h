
@interface UIAcceleration : NSObject {

    d timestamp;
    d x;
    d y;
    d z;
}
@property (nonatomic, assign, readwrite) NSNumber* timestamp;
@property (nonatomic, assign, readwrite) NSNumber* x;
@property (nonatomic, assign, readwrite) NSNumber* y;
@property (nonatomic, assign, readwrite) NSNumber* z;

 - (id) description;
 - (d) x;
 - (void) setX:(d)a;
 - (d) y;
 - (void) setY:(d)a;
 - (d) z;
 - (void) setZ:(d)a;
 - (d) timestamp;
 - (void) setTimestamp:(d)a;


@end
