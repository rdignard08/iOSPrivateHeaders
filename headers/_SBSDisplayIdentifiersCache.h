
@interface _SBSDisplayIdentifiersCache : NSObject {

    NSObject<OS_dispatch_queue> _queue;
    NSSet _displayIdentifiers;
    int _changedToken;
    @? _changedBlock;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (void) _queue_noteChanged;
 - (id) displayIdentifiers;
 - (void) registerChangedBlock:(@?)a;


@end
