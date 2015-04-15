
@interface NSFileReadingWritingClaim : NSFileAccessClaim {

    NSURL* _readingURL;
    BOOL _readingURLDidChange;
    unsigned long long _readingOptions;
    NSURL* _writingURL;
    BOOL _writingURLDidChange;
    unsigned long long _writingOptions;
    NSFileAccessNode* _readingLocation;
    NSFileAccessNode* _writingLocation;
    NSFileAccessNode* _rootNode;
    long long _readingLinkResolutionCount;
}

 - (id) initWithPurposeID:(id)a readingURL:(id)b options:(unsigned long long)c writingURL:(id)d options:(unsigned long long)e claimer:(@?)f ;
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


@end
