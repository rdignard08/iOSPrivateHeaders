
@interface BSProcessDeathWatcher : NSObject {

    BSDispatchSource* _source;
    @? _deathHandler;
}

 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithPID:(int)a queue:(id)b deathHandler:(@?)c ;


@end
