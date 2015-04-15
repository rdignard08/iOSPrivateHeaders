
@interface BSProcessDeathWatcher : NSObject {

    BSDispatchSource* _source;
    @? _deathHandler;
}

 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithPID:(int)aqueue:(id)bdeathHandler:(@?)c;


@end
