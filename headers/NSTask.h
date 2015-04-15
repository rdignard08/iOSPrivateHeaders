
@interface NSTask : NSObject {

}
@property (atomic, copy, readwrite) NSString* launchPath;
@property (atomic, copy, readwrite) NSArray* arguments;
@property (atomic, copy, readwrite) NSDictionary* environment;
@property (atomic, copy, readwrite) NSString* currentDirectoryPath;
@property (atomic, retain, readwrite) NSNumber* standardInput;
@property (atomic, retain, readwrite) NSNumber* standardOutput;
@property (atomic, retain, readwrite) NSNumber* standardError;
@property (atomic, assign, readonly) NSNumber* processIdentifier;
@property (atomic, assign, readonly, isRunning) NSNumber* running;
@property (atomic, assign, readonly) NSNumber* terminationStatus;
@property (atomic, assign, readonly) NSNumber* terminationReason;
@property (atomic, copy, readwrite) NSNumber* terminationHandler;
@property (atomic, assign, readwrite) NSNumber* qualityOfService;
 + (id) currentTaskDictionary;
 + (id) launchedTaskWithDictionary:(id)a;
 + (id) launchedTaskWithLaunchPath:(id)aarguments:(id)b;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) currentDirectoryPath;
 - (q) qualityOfService;
 - (void) setQualityOfService:(q)a;
 - (void) setArguments:(id)a;
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
