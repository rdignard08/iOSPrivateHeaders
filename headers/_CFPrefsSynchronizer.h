
@interface _CFPrefsSynchronizer : NSObject {

    NSObject<OS_dispatch_source> _synchTimer;
    ^{__CFSet=} _dirtySources;
    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _CFPrefsDirtySourcesLock;
    BOOL _active;
}
 + (id) sharedInstance;

 - (void) clear;
 - (void) synchronize;
 - (void) clear_alreadyLocked;
 - (void) disableTimer_alreadyLocked;
 - (void) enableTimer_alreadyLocked;
 - (void) noteDirtySource:(id)a;
 - (void) synchronizeAndWait;
 - (id) init;


@end
