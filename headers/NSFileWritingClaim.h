
@interface NSFileWritingClaim : NSFileAccessClaim {

    NSURL* _url;
    BOOL _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode* _location;
}

 - (id) initWithPurposeID:(id)aurl:(id)boptions:(unsigned long long)cclaimer:(@?)d;
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
 - (void) resolveURLsThenContinueInvokingClaimer:(@?)a;
 - (void) dealloc;


@end
