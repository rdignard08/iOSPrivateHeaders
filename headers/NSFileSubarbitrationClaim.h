
@interface NSFileSubarbitrationClaim : NSFileAccessClaim {

    NSArray* _readingURLs;
    unsigned long long _readingOptions;
    NSArray* _writingURLs;
    unsigned long long _writingOptions;
    @? _messageSender;
    NSArray* _readingLocations;
    NSArray* _writingLocations;
    NSFileAccessNode* _rootNode;
    NSMutableSet* _forwardedClaimIDs;
    NSMutableDictionary* _readRelinquishmentsByPresenterID;
    NSMutableDictionary* _writeRelinquishmentsByPresenterID;
}

 - (@?) messageSender;
 - (id) initWithReadingURLs:(id)a options:(unsigned long long)b writingURLs:(id)c options:(unsigned long long)d claimer:(@?)e ;
 - (void) granted;
 - (void) invokeClaimer;
 - (void) devalueSelf;
 - (id) initWithClient:(id)a messageParameters:(id)b replySender:(@?)c ;
 - (void) forwardUsingMessageSender:(@?)a crashHandler:(@?)b ;
 - (BOOL) evaluateSelfWithRootNode:(id)a checkSubarbitrability:(BOOL)b ;
 - (void) evaluateNewClaim:(id)a ;
 - (BOOL) isBlockedByReadingItemAtLocation:(id)a options:(unsigned long long)b ;
 - (BOOL) isBlockedByWritingItemAtLocation:(id)a options:(unsigned long long)b ;
 - (void) revoked;
 - (void) devalueOldClaim:(id)a ;
 - (void) itemAtLocation:(id)a wasReplacedByItemAtLocation:(id)b ;
 - (void) setMessageSender:(@?)a ;
 - (void) forwardRelinquishmentMessageWithKind:(id)a parameters:(id)b toPresenter:(id)c usingReplySender:(@?)d ;
 - (void) forwardReacquisitionMessageWithKind:(id)a parameters:(id)b toPresenterForID:(id)c usingReplySender:(@?)d ;
 - (id) relinquishmentForMessageOfKind:(id)a toPresenterForID:(id)b ;
 - (void) dealloc;


@end
