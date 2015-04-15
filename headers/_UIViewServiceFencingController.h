
@interface _UIViewServiceFencingController : NSObject {

    i _lock;
    @"NSMutableSet" _pendingFenceSendRights;
    @"NSMutableArray" _resumeActions;
    Q _expectedParticipatingFencingProxyCount;
    @"NSTimer" _fencingControlTimeoutTimer;
}
 + (id) activeFencePort;

 - (void) dealloc;
 - (void) fencingControlProxy:(id)adidBeginFencingWithSendRight:(id)bexpectedParticipatingFencingProxyCount:(Q)c;
 - (void) fencingControlProxy:(id)adidEndFencingWithSendRight:(id)b;
 - (void) _fencingControlTimedOut;
 - (id) init;


@end
