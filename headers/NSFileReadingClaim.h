
@interface NSFileReadingClaim : NSFileAccessClaim {

    NSURL* _url;
    BOOL _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode* _location;
    NSFileAccessNode* _rootNode;
    long long _linkResolutionCount;
}

 - (BOOL) shouldBeRevokedPriorToInvokingAccessor;
 - (id) initWithPurposeID:(id)a url:(id)b options:(unsigned long long)c claimer:(@?)d ;
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
 - (void) resolveURLThenMaybeContinueInvokingClaimer:(@?)a ;
 - (void) dealloc;


@end
