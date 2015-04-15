
@interface NSConcreteTask : NSTask {

    @"NSObject<OS_dispatch_semaphore>" _lock;
    @"NSMutableDictionary" _dictionary;
    @? _terminationHandler;
    @"NSObject<OS_dispatch_source>" _dsrc;
    @"NSPort" _tmpPort;
    q _suspendCount;
    i _pid;
    i _platformExitInfo;
    BOOL _hasExeced;
    BOOL _isRunning;
    BOOL _hasPostedDeathNotification;
    BOOL _terminationRun;
    c _qos;
}

 - (id) currentDirectoryPath;
 - (q) qualityOfService;
 - (void) setQualityOfService:(q)a;
 - (void) setArguments:(id)a;
 - (void) launchWithDictionary:(id)a;
 - (@?) terminationHandler;
 - (i) terminationStatus;
 - (q) terminationReason;
 - (void) launch;
 - (void) setCurrentDirectoryPath:(id)a;
 - (void) setEnvironment:(id)a;
 - (void) setLaunchPath:(id)a;
 - (void) interrupt;
 - (void) terminate;
 - (id) launchPath;
 - (void) setStandardInput:(id)a;
 - (void) setStandardOutput:(id)a;
 - (void) setStandardError:(id)a;
 - (id) standardInput;
 - (id) standardOutput;
 - (id) standardError;
 - (void) _setTerminationHandler:(@?)a;
 - (void) _withTaskDictionary:(@?)a;
 - (q) _platformExitInformation;
 - (void) waitUntilExit;
 - (void) setPreferredArchitectures:(id)a;
 - (id) preferredArchitectures;
 - (void) setTaskDictionary:(id)a;
 - (id) taskDictionary;
 - (void) terminateTask;
 - (i) _procid;
 - (void) setStartsNewProcessGroup:(BOOL)a;
 - (void) dealloc;
 - (void) finalize;
 - (void) setTerminationHandler:(@?)a;
 - (id) init;
 - (q) suspendCount;
 - (BOOL) suspend;
 - (BOOL) resume;
 - (id) arguments;
 - (i) processIdentifier;
 - (BOOL) isRunning;
 - (id) environment;


@end
