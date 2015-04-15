
@interface LSUserActivityDebuggingManager : NSObject {

    ^{__asl_object_s=} _client;
    NSUserDefaults* _userDefaults;
    NSString* _logFileDirectoryPath;
    NSString* _logFilePath;
    int _additionalLogFile;
    NSObject<OS_dispatch_source>* _logRotationTimerSource;
    unsigned long long _lastLogRotationTime;
}
@property (atomic, retain, readwrite) NSUserDefaults* userDefaults;
@property (atomic, assign, readonly) NSNumber* loggingEnabled;
@property (atomic, assign, readwrite) NSNumber* client;
@property (atomic, copy, readwrite) NSString* logFileDirectoryPath;
@property (atomic, copy, readwrite) NSString* logFilePath;
@property (atomic, assign, readwrite) NSNumber* additionalLogFile;
@property (atomic, assign, readonly) NSNumber* logFileEnabled;
@property (atomic, assign, readwrite) NSNumber* lastLogRotationTime;
@property (atomic, assign, readwrite) NSNumber* logRotationTimerSource;
 + (void) log:(int)aformat:(id)b;
 + (id) hexDataDump:(id)a;
 + (id) sharedDebugManager;

 - (void) setClient:(^{__asl_object_s=})a ;
 - (BOOL) loggingEnabled;
 - (void) setLogFileDirectoryPath:(id)a ;
 - (id) logFileDirectoryPath;
 - (void) setLogFilePath:(id)a ;
 - (void) deleteExtraLogFiles;
 - (void) rotateLogFiles;
 - (void) setLogRotationTimerSource:(id)a ;
 - (id) logRotationTimerSource;
 - (void) doRotateLogFiles;
 - (int) additionalLogFile;
 - (void) setAdditionalLogFile:(int)a ;
 - (double) logRotationTimeInSeconds;
 - (unsigned long long) lastLogRotationTime;
 - (BOOL) logFileEnabled;
 - (id) logFilePath;
 - (void) setLastLogRotationTime:(unsigned long long)a ;
 - (long long) logRotationMaximumFiles;
 - (id) userDefaults;
 - (BOOL) shouldLogCommon:(unsigned long long)a ;
 - (void) log:(int)a format:(id)b args:([1{__va_list_tag=II^v^v}])c ;
 - (void) log:(int)a format:(id)b args:([1{__va_list_tag=II^v^v}])c file:(r*)d line:(long long)e ;
 - (void) log:(int)a format:(id)b ;
 - (void) log:(int)a file:(r*)b line:(long long)c format:(id)d ;
 - (void) logCommon:(unsigned long long)a format:(id)b args:([1{__va_list_tag=II^v^v}])c ;
 - (BOOL) shouldLog:(int)a ;
 - (void) log:(int)a common:(BOOL)b format:(id)c args:([1{__va_list_tag=II^v^v}])d file:(r*)e line:(long long)f ;
 - (void) setUserDefaults:(id)a ;
 - (id) init;
 - (void) suspend;
 - (^{__asl_object_s=}) client;
 - (void) resume;


@end
