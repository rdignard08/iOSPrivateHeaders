
@interface _UIKeyframe : NSObject {

    @"NSString" _key;
    id _value;
    double _startTime;
    double _duration;
}
@property (nonatomic, retain, readwrite) NSNumber* value;

 - (void) dealloc;
 - (id) initWithKey:(id)astartTime:(double)bduration:(double)c;
 - (void) setValue:(id)a;
 - (id) value;


@end
