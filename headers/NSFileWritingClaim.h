
@interface NSFileWritingClaim : NSFileAccessClaim {

    @"NSURL" _url;
    BOOL _urlDidChange;
    Q _options;
    @"NSFileAccessNode" _location;
}

 - (id) initWithPurposeID:(id)aurl:(id)boptions:(Q)cclaimer:(@?)d;
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
