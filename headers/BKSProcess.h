
@interface BKSProcess : BSBaseXPCClient {

    int _pid;
    @"NSString" _bundlePath;
    @"NSObject<OS_dispatch_queue>" _clientQueue;
    BOOL _workspaceLocked;
    BOOL _connectedToExternalAccessories;
    BOOL _nowPlayingWithAudio;
    BOOL _recordingAudio;
    BOOL _supportsTaskSuspension;
    int _visibility;
    int _taskState;
    @"<BKSProcessDelegate>" _delegate;
    long long _terminationReason;
    long long _exitStatus;
}
 + (double) backgroundTimeRemaining;
 + (void) setTheSystemApp:(int)aidentifier:(id)b;
 + (id) busyExtensionInstances:(id)a;

 - (long long) terminationReason;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;
 - (double) backgroundTimeRemaining;
 - (void) setSupportsTaskSuspension:(BOOL)a;
 - (BOOL) supportsTaskSuspension;
 - (void) queue_handleMessage:(id)a;
 - (void) queue_connectionWasInterrupted;
 - (void) queue_connectionWasCreated;
 - (int) visibility;
 - (void) _sendMessageType:(int)awithMessage:(@?)bwithReplyHandler:(@?)cwaitForReply:(BOOL)d;
 - (void) _sendMessageType:(int)awithMessage:(@?)b;
 - (void) _handleSuspendedStateChanged:(id)a;
 - (void) _handleExpirationWarning:(id)a;
 - (void) _handleDebuggingStateChanged:(id)a;
 - (void) setTaskState:(int)a;
 - (id) initWithPID:(int)abundlePath:(id)bvisibility:(int)cworkspaceLocked:(BOOL)dqueue:(id)e;
 - (void) setVisibility:(int)a;
 - (void) setWorkspaceLocked:(BOOL)a;
 - (void) setConnectedToExternalAccessories:(BOOL)a;
 - (void) setNowPlayingWithAudio:(BOOL)a;
 - (void) setRecordingAudio:(BOOL)a;
 - (void) setTerminationReason:(long long)a;
 - (void) setExitStatus:(long long)a;
 - (long long) exitStatus;
 - (BOOL) workspaceLocked;
 - (BOOL) connectedToExternalAccessories;
 - (BOOL) nowPlayingWithAudio;
 - (BOOL) recordingAudio;
 - (int) taskState;


@end
