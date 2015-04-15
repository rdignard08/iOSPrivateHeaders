
@interface _CPPowerAssertion : NSObject {

    d _timeout;
    @"NSString" _identifier;
    @"NSArray" _stack;
}
@property (nonatomic, assign, readwrite) NSNumber* timeout;

 - (void) setTimeout:(d)a;
 - (void) dealloc;
 - (d) timeout;
 - (void) timedout;
 - (id) initWithIdentifier:(id)atimeout:(d)b;


@end
