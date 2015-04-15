
@interface NSFileReadingWritingClaim : NSFileAccessClaim {

    @"NSURL" _readingURL;
    BOOL _readingURLDidChange;
    Q _readingOptions;
    @"NSURL" _writingURL;
    BOOL _writingURLDidChange;
    Q _writingOptions;
    @"NSFileAccessNode" _readingLocation;
    @"NSFileAccessNode" _writingLocation;
    @"NSFileAccessNode" _rootNode;
    q _readingLinkResolutionCount;
}

 - (id) initWithPurposeID:(id)areadingURL:(id)boptions:(Q)cwritingURL:(id)doptions:(Q)eclaimer:(@?)f;
 - (void) granted;
 - (void) invokeClaimer;
 - (BOOL) blocksClaim:(id)a;
 - (void) devalueSelf;
 - (id) initWithClient:(id)amessageParameters:(id)breplySender:(@?)c;
 - (void) forwardUsingMessageSender:(@?)acrashHandler:(@?)b;
 - (BOOL) evaluateSelfWithRootNode:(id)acheckSubarbitrability:(BOOL)b;
 - (BOOL) isBlockedByReadingItemAtLocation:(id)aoptions:(Q)b;
 - (BOOL) isBlockedByWritingItemAtLocation:(id)aoptions:(Q)b;
 - (void) itemAtLocation:(id)awasReplacedByItemAtLocation:(id)b;
 - (void) resolveURLsThenMaybeContinueInvokingClaimer:(@?)a;
 - (void) dealloc;


@end
