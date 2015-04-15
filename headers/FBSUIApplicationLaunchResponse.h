
@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {

    BOOL _supportsTaskSuspension;
    BOOL _supportsTaskSuspensionOnLock;
    BSMachSendRight* _taskPort;
}

 - (void) dealloc;
 - (void) setSupportsTaskSuspension:(BOOL)a;
 - (void) setSupportsTaskSuspensionOnLock:(BOOL)a;
 - (BOOL) supportsTaskSuspension;
 - (BOOL) supportsTaskSuspensionOnLock;
 - (id) taskPort;
 - (void) setTaskPort:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
