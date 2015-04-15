
@interface NSFileWatcher : NSObject {

    @"NSObject<OS_dispatch_queue>" _queue;
    @"NSURL" _url;
    @? _observer;
    BOOL _isWatching;
    @"NSObject<OS_dispatch_source>" _eventSource;
    unsigned long long _lastObservedEventID;
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
 - (void) setLastObservedEventID:(unsigned long long)a;
 - (void) settle;
 - (void) watchItem;
 - (void) _coalesceSubitemObservations;
 - (void) handleFSEventPath:(id)aflags:(unsigned int)bid:(unsigned long long)c;
 - (void) unsettle;
 - (void) dealloc;
 - (void) start;
 - (void) setURL:(id)a;


@end
