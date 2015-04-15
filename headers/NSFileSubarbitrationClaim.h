
@interface NSFileSubarbitrationClaim : NSFileAccessClaim {

    @"NSArray" _readingURLs;
    Q _readingOptions;
    @"NSArray" _writingURLs;
    Q _writingOptions;
    @? _messageSender;
    @"NSArray" _readingLocations;
    @"NSArray" _writingLocations;
    @"NSFileAccessNode" _rootNode;
    @"NSMutableSet" _forwardedClaimIDs;
    @"NSMutableDictionary" _readRelinquishmentsByPresenterID;
    @"NSMutableDictionary" _writeRelinquishmentsByPresenterID;
}

 - (@?) messageSender;
 - (id) initWithReadingURLs:(id)aoptions:(Q)bwritingURLs:(id)coptions:(Q)dclaimer:(@?)e;
 - (void) granted;
 - (void) invokeClaimer;
 - (void) devalueSelf;
 - (id) initWithClient:(id)amessageParameters:(id)breplySender:(@?)c;
 - (void) forwardUsingMessageSender:(@?)acrashHandler:(@?)b;
 - (BOOL) evaluateSelfWithRootNode:(id)acheckSubarbitrability:(BOOL)b;
 - (void) evaluateNewClaim:(id)a;
 - (BOOL) isBlockedByReadingItemAtLocation:(id)aoptions:(Q)b;
 - (BOOL) isBlockedByWritingItemAtLocation:(id)aoptions:(Q)b;
 - (void) revoked;
 - (void) devalueOldClaim:(id)a;
 - (void) itemAtLocation:(id)awasReplacedByItemAtLocation:(id)b;
 - (void) setMessageSender:(@?)a;
 - (void) forwardRelinquishmentMessageWithKind:(id)aparameters:(id)btoPresenter:(id)cusingReplySender:(@?)d;
 - (void) forwardReacquisitionMessageWithKind:(id)aparameters:(id)btoPresenterForID:(id)cusingReplySender:(@?)d;
 - (id) relinquishmentForMessageOfKind:(id)atoPresenterForID:(id)b;
 - (void) dealloc;


@end