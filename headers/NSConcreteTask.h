
@interface NSConcreteTask : NSTask {

    NSObject<OS_dispatch_semaphore> _lock;
    NSMutableDictionary _dictionary;
    @? _terminationHandler;
    NSObject<OS_dispatch_source> _dsrc;
    NSPort _tmpPort;
    long long _suspendCount;
    int _pid;
    int _platformExitInfo;
    BOOL _hasExeced;
    BOOL _isRunning;
    BOOL _hasPostedDeathNotification;
    BOOL _terminationRun;
    char _qos;
}

 - (id) currentDirectoryPath;
 - (long long) qualityOfService;
 - (void) setQualityOfService:(long long)a;
 - (void) setArguments:(id)a;
 - (void) launchWithDictionary:(id)a;
 - (@?) terminationHandler;
 - (int) terminationStatus;
 - (long long) terminationReason;
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
 - (long long) _platformExitInformation;
 - (void) waitUntilExit;
 - (void) setPreferredArchitectures:(id)a;
 - (id) preferredArchitectures;
 - (void) setTaskDictionary:(id)a;
 - (id) taskDictionary;
 - (void) terminateTask;
 - (int) _procid;
 - (void) setStartsNewProcessGroup:(BOOL)a;
 - (void) dealloc;
 - (void) finalize;
 - (void) setTerminationHandler:(@?)a;
 - (id) init;
 - (long long) suspendCount;
 - (BOOL) suspend;
 - (BOOL) resume;
 - (id) arguments;
 - (int) processIdentifier;
 - (BOOL) isRunning;
 - (id) environment;


@end
