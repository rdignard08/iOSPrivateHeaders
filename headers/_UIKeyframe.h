
@interface _UIKeyframe : NSObject {

    NSString* _key;
    id _value;
    double _startTime;
    double _duration;
}
@property (nonatomic, retain, readwrite) NSNumber* value;

 - (void) dealloc;
 - (id) initWithKey:(id)a startTime:(double)b duration:(double)c ;
 - (void) setValue:(id)a ;
 - (id) value;


@end
