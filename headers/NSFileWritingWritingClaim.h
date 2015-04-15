
@interface NSFileWritingWritingClaim : NSFileAccessClaim {

    @"NSURL" _url1;
    BOOL _url1DidChange;
    Q _options1;
    @"NSURL" _url2;
    BOOL _url2DidChange;
    Q _options2;
    @"NSFileAccessNode" _location1;
    @"NSFileAccessNode" _location2;
}

 - (id) initWithPurposeID:(id)aurl:(id)boptions:(Q)curl:(id)doptions:(Q)eclaimer:(@?)f;
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
 - (void) resolveURLsThenContinueInvokingClaimer:(@?)a;
 - (void) dealloc;


@end
