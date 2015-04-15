
@interface UIKBKeyInterval : NSObject {

    UIKBTree _key;
    double _interval;
}
@property (nonatomic, retain, readwrite) UIKBTree* key;
@property (nonatomic, assign, readwrite) NSNumber* interval;

 - (void) setKey:(id)a;
 - (void) dealloc;
 - (void) setInterval:(double)a;
 - (id) initWithKey:(id)ainterval:(double)b;
 - (double) interval;
 - (id) key;


@end
