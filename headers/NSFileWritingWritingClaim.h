
@interface NSFileWritingWritingClaim : NSFileAccessClaim {

    NSURL* _url1;
    BOOL _url1DidChange;
    unsigned long long _options1;
    NSURL* _url2;
    BOOL _url2DidChange;
    unsigned long long _options2;
    NSFileAccessNode* _location1;
    NSFileAccessNode* _location2;
}

 - (id) initWithPurposeID:(id)a url:(id)b options:(unsigned long long)c url:(id)d options:(unsigned long long)e claimer:(@?)f ;
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
 - (void) resolveURLsThenContinueInvokingClaimer:(@?)a ;
 - (void) dealloc;


@end
