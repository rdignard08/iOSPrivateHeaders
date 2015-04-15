
@interface _CPPowerAssertion : NSObject {

    double _timeout;
    NSString _identifier;
    NSArray _stack;
}
@property (nonatomic, assign, readwrite) NSNumber* timeout;

 - (void) setTimeout:(double)a;
 - (void) dealloc;
 - (double) timeout;
 - (void) timedout;
 - (id) initWithIdentifier:(id)atimeout:(double)b;


@end
