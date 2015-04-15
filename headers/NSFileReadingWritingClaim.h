
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

 - (id) initWithPurposeID:(id)areadingURL:(id)boptions:(unsigned long long)cwritingURL:(id)doptions:(unsigned long long)eclaimer:(@?)f;
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


@end
