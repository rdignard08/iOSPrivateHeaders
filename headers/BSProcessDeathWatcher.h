
@interface BSProcessDeathWatcher : NSObject {

    @"BSDispatchSource" _source;
    @? _deathHandler;
}

 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithPID:(i)aqueue:(id)bdeathHandler:(@?)c;


@end
