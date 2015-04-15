
@interface _UIViewServiceFencingController : NSObject {

    int _lock;
    @"NSMutableSet" _pendingFenceSendRights;
    @"NSMutableArray" _resumeActions;
    unsigned long long _expectedParticipatingFencingProxyCount;
    @"NSTimer" _fencingControlTimeoutTimer;
}
 + (id) activeFencePort;

 - (void) dealloc;
 - (void) fencingControlProxy:(id)adidBeginFencingWithSendRight:(id)bexpectedParticipatingFencingProxyCount:(unsigned long long)c;
 - (void) fencingControlProxy:(id)adidEndFencingWithSendRight:(id)b;
 - (void) _fencingControlTimedOut;
 - (id) init;


@end
