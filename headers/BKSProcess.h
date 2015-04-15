
@interface BKSProcess : BSBaseXPCClient {

    i _pid;
    @"NSString" _bundlePath;
    @"NSObject<OS_dispatch_queue>" _clientQueue;
    BOOL _workspaceLocked;
    BOOL _connectedToExternalAccessories;
    BOOL _nowPlayingWithAudio;
    BOOL _recordingAudio;
    BOOL _supportsTaskSuspension;
    i _visibility;
    i _taskState;
    @"<BKSProcessDelegate>" _delegate;
    q _terminationReason;
    q _exitStatus;
}
 + (d) backgroundTimeRemaining;
 + (void) setTheSystemApp:(i)aidentifier:(id)b;
 + (id) busyExtensionInstances:(id)a;

 - (q) terminationReason;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;
 - (d) backgroundTimeRemaining;
 - (void) setSupportsTaskSuspension:(BOOL)a;
 - (BOOL) supportsTaskSuspension;
 - (void) queue_handleMessage:(id)a;
 - (void) queue_connectionWasInterrupted;
 - (void) queue_connectionWasCreated;
 - (i) visibility;
 - (void) _sendMessageType:(i)awithMessage:(@?)bwithReplyHandler:(@?)cwaitForReply:(BOOL)d;
 - (void) _sendMessageType:(i)awithMessage:(@?)b;
 - (void) _handleSuspendedStateChanged:(id)a;
 - (void) _handleExpirationWarning:(id)a;
 - (void) _handleDebuggingStateChanged:(id)a;
 - (void) setTaskState:(i)a;
 - (id) initWithPID:(i)abundlePath:(id)bvisibility:(i)cworkspaceLocked:(BOOL)dqueue:(id)e;
 - (void) setVisibility:(i)a;
 - (void) setWorkspaceLocked:(BOOL)a;
 - (void) setConnectedToExternalAccessories:(BOOL)a;
 - (void) setNowPlayingWithAudio:(BOOL)a;
 - (void) setRecordingAudio:(BOOL)a;
 - (void) setTerminationReason:(q)a;
 - (void) setExitStatus:(q)a;
 - (q) exitStatus;
 - (BOOL) workspaceLocked;
 - (BOOL) connectedToExternalAccessories;
 - (BOOL) nowPlayingWithAudio;
 - (BOOL) recordingAudio;
 - (i) taskState;


@end
