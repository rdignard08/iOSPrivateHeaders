
@interface NSFilePresenterProxy : NSFileReactorProxy {

    @"NSObject<OS_dispatch_queue>" _queue;
    @"NSFileWatcher" _watcher;
    Q _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    @"NSMutableArray" _previousWriterPurposeIDs;
    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
    BOOL _disconnected;
    BOOL _inSubarbiter;
}
 + (id) urlWithItemURL:(id)asubitemPath:(id)b;

 - (void) setItemLocation:(id)a;
 - (void) forwardUsingMessageSender:(@?)a;
 - (void) forwardObservationMessageWithKind:(id)aparameters:(id)b;
 - (void) forwardRelinquishmentMessageWithKind:(id)aparameters:(id)bresultHandler:(@?)c;
 - (void) disconnect;
 - (void) startWatchingWithQueue:(id)alastEventID:(id)bunannouncedMoveHandler:(@?)c;
 - (void) relinquishToReadingClaimWithID:(id)aoptions:(Q)bpurposeID:(id)cresultHandler:(@?)d;
 - (void) relinquishToWritingClaimWithID:(id)aoptions:(Q)bpurposeID:(id)csubitemPath:(id)dresultHandler:(@?)e;
 - (void) saveChangesWithCompletionHandler:(@?)a;
 - (void) accommodateDeletionWithSubitemPath:(id)acompletionHandler:(@?)b;
 - (void) observeMoveByWriterWithPurposeID:(id)a;
 - (void) observeMoveOfSubitemAtURL:(id)atoURL:(id)bbyWriterWithPurposeID:(id)c;
 - (void) observeDisconnectionByWriterWithPurposeID:(id)a;
 - (void) observeReconnectionByWriterWithPurposeID:(id)a;
 - (void) observeUbiquityChangeAtSubitemPath:(id)awithPhysicalURL:(id)b;
 - (void) observeDisappearanceAtSubitemPath:(id)a;
 - (void) observeChangeAtSubitemPath:(id)a;
 - (void) observeVersionChangeOfKind:(id)awithClientID:(id)bname:(id)csubitemPath:(id)d;
 - (BOOL) disconnected;
 - (BOOL) inSubarbiter;
 - (void) setInSubarbiter:(BOOL)a;
 - (void) dealloc;


@end
