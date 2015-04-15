
@interface _UIKeyframe : NSObject {

    @"NSString" _key;
    id _value;
    d _startTime;
    d _duration;
}
@property (nonatomic, retain, readwrite) NSNumber* value;

 - (void) dealloc;
 - (id) initWithKey:(id)astartTime:(d)bduration:(d)c;
 - (void) setValue:(id)a;
 - (id) value;


@end
