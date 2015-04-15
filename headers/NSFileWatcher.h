
@interface NSFileWatcher : NSObject {

    @"NSObject<OS_dispatch_queue>" _queue;
    @"NSURL" _url;
    @? _observer;
    BOOL _isWatching;
    @"NSObject<OS_dispatch_source>" _eventSource;
    Q _lastObservedEventID;
    ^{__FSEventStream=} _eventStream;
    BOOL _eventsAreAboutDirectory;
    BOOL _isUnsettled;
    @"NSFileWatcherObservations" _itemObservations;
    @"NSMutableDictionary" _subitemObservationsByEventPath;
    @"NSURL" _fileReferenceURL;
    @"NSString" _formerPath;
    @"NSURL" _formerURL;
}

 - (void) stop;
 - (void) setObserver:(@?)a;
 - (id) initWithQueue:(id)a;
 - (void) setLastObservedEventID:(Q)a;
 - (void) settle;
 - (void) watchItem;
 - (void) _coalesceSubitemObservations;
 - (void) handleFSEventPath:(id)aflags:(I)bid:(Q)c;
 - (void) unsettle;
 - (void) dealloc;
 - (void) start;
 - (void) setURL:(id)a;


@end
