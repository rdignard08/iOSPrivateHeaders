
@interface NSFilePresenterProxy : NSFileReactorProxy {

    NSObject<OS_dispatch_queue>* _queue;
    NSFileWatcher* _watcher;
    unsigned long long _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    NSMutableArray* _previousWriterPurposeIDs;
    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
    BOOL _disconnected;
    BOOL _inSubarbiter;
}
 + (id) urlWithItemURL:(id)asubitemPath:(id)b;

 - (void) setItemLocation:(id)a ;
 - (void) forwardUsingMessageSender:(@?)a ;
 - (void) forwardObservationMessageWithKind:(id)a parameters:(id)b ;
 - (void) forwardRelinquishmentMessageWithKind:(id)a parameters:(id)b resultHandler:(@?)c ;
 - (void) disconnect;
 - (void) startWatchingWithQueue:(id)a lastEventID:(id)b unannouncedMoveHandler:(@?)c ;
 - (void) relinquishToReadingClaimWithID:(id)a options:(unsigned long long)b purposeID:(id)c resultHandler:(@?)d ;
 - (void) relinquishToWritingClaimWithID:(id)a options:(unsigned long long)b purposeID:(id)c subitemPath:(id)d resultHandler:(@?)e ;
 - (void) saveChangesWithCompletionHandler:(@?)a ;
 - (void) accommodateDeletionWithSubitemPath:(id)a completionHandler:(@?)b ;
 - (void) observeMoveByWriterWithPurposeID:(id)a ;
 - (void) observeMoveOfSubitemAtURL:(id)a toURL:(id)b byWriterWithPurposeID:(id)c ;
 - (void) observeDisconnectionByWriterWithPurposeID:(id)a ;
 - (void) observeReconnectionByWriterWithPurposeID:(id)a ;
 - (void) observeUbiquityChangeAtSubitemPath:(id)a withPhysicalURL:(id)b ;
 - (void) observeDisappearanceAtSubitemPath:(id)a ;
 - (void) observeChangeAtSubitemPath:(id)a ;
 - (void) observeVersionChangeOfKind:(id)a withClientID:(id)b name:(id)c subitemPath:(id)d ;
 - (BOOL) disconnected;
 - (BOOL) inSubarbiter;
 - (void) setInSubarbiter:(BOOL)a ;
 - (void) dealloc;


@end
