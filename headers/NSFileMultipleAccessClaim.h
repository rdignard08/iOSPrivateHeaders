
@interface NSFileMultipleAccessClaim : NSFileAccessClaim {

    NSMutableArray* _readingURLs;
    ^Q _readingOptions;
    ^B _readingURLsDidChange;
    NSMutableArray* _writingURLs;
    ^Q _writingOptions;
    ^B _writingURLsDidChange;
    NSMutableArray* _readingLocations;
    NSMutableArray* _writingLocations;
    NSFileAccessNode* _rootNode;
    unsigned long long _currentlyLinkResolvingURLIndex;
    long long _readingLinkResolutionCount;
}

 - (BOOL) shouldBeRevokedPriorToInvokingAccessor;
 - (id) initWithPurposeID:(id)aintents:(id)bclaimer:(@?)c;
 - (void) granted;
 - (void) invokeClaimer;
 - (BOOL) blocksClaim:(id)a;
 - (void) devalueSelf;
 - (id) initWithClient:(id)amessageParameters:(id)breplySender:(@?)c;
 - (void) forwardUsingMessageSender:(@?)acrashHandler:(@?)b;
 - (BOOL) evaluateSelfWithRootNode:(id)acheckSubarbitrability:(BOOL)b;
 - (BOOL) isBlockedByReadingItemAtLocation:(id)aoptions:(unsigned long long)b;
 - (BOOL) isBlockedByWritingItemAtLocation:(id)aoptions:(unsigned long long)b;
 - (void) itemAtLocation:(id)awasReplacedByItemAtLocation:(id)b;
 - (void) resolveURLsThenMaybeContinueInvokingClaimer:(@?)a;
 - (void) dealloc;
 - (void) finalize;


@end
