
@interface _UIAutologgingDeallocSentinel : NSObject {

    BOOL _called;
    NSString _message;
}
@property (nonatomic, retain, readwrite) NSString* message;
@property (nonatomic, assign, readwrite) NSNumber* called;

 - (void) dealloc;
 - (id) message;
 - (void) setMessage:(id)a;
 - (BOOL) called;
 - (void) setCalled:(BOOL)a;


@end
