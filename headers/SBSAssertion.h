
@interface SBSAssertion : NSObject {

    NSString _assertionName;
    NSString _reason;
    unsigned int _port;
    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _lock;
}
@property (nonatomic, assign, readonly) NSString* assertionName;
@property (nonatomic, assign, readonly) NSString* reason;

 - (void) dealloc;
 - (void) invalidate;
 - (id) reason;
 - (id) assertionName;
 - (id) initWithAssertionName:(id)areason:(id)bport:(unsigned int)c;


@end
