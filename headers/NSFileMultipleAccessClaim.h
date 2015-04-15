
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
 - (id) initWithPurposeID:(id)a intents:(id)b claimer:(@?)c ;
 - (void) granted;
 - (void) invokeClaimer;
 - (BOOL) blocksClaim:(id)a ;
 - (void) devalueSelf;
 - (id) initWithClient:(id)a messageParameters:(id)b replySender:(@?)c ;
 - (void) forwardUsingMessageSender:(@?)a crashHandler:(@?)b ;
 - (BOOL) evaluateSelfWithRootNode:(id)a checkSubarbitrability:(BOOL)b ;
 - (BOOL) isBlockedByReadingItemAtLocation:(id)a options:(unsigned long long)b ;
 - (BOOL) isBlockedByWritingItemAtLocation:(id)a options:(unsigned long long)b ;
 - (void) itemAtLocation:(id)a wasReplacedByItemAtLocation:(id)b ;
 - (void) resolveURLsThenMaybeContinueInvokingClaimer:(@?)a ;
 - (void) dealloc;
 - (void) finalize;


@end
