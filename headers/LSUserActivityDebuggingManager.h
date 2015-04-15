
@interface LSUserActivityDebuggingManager : NSObject {

    ^{__asl_object_s=} _client;
    @"NSUserDefaults" _userDefaults;
    @"NSString" _logFileDirectoryPath;
    @"NSString" _logFilePath;
    i _additionalLogFile;
    @"NSObject<OS_dispatch_source>" _logRotationTimerSource;
    Q _lastLogRotationTime;
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
 + (void) log:(i)aformat:(id)b;
 + (id) hexDataDump:(id)a;
 + (id) sharedDebugManager;

 - (void) setClient:(^{__asl_object_s=})a;
 - (BOOL) loggingEnabled;
 - (void) setLogFileDirectoryPath:(id)a;
 - (id) logFileDirectoryPath;
 - (void) setLogFilePath:(id)a;
 - (void) deleteExtraLogFiles;
 - (void) rotateLogFiles;
 - (void) setLogRotationTimerSource:(id)a;
 - (id) logRotationTimerSource;
 - (void) doRotateLogFiles;
 - (i) additionalLogFile;
 - (void) setAdditionalLogFile:(i)a;
 - (d) logRotationTimeInSeconds;
 - (Q) lastLogRotationTime;
 - (BOOL) logFileEnabled;
 - (id) logFilePath;
 - (void) setLastLogRotationTime:(Q)a;
 - (q) logRotationMaximumFiles;
 - (id) userDefaults;
 - (BOOL) shouldLogCommon:(Q)a;
 - (void) log:(i)aformat:(id)bargs:([1{__va_list_tag=II^v^v}])c;
 - (void) log:(i)aformat:(id)bargs:([1{__va_list_tag=II^v^v}])cfile:(r*)dline:(q)e;
 - (void) log:(i)aformat:(id)b;
 - (void) log:(i)afile:(r*)bline:(q)cformat:(id)d;
 - (void) logCommon:(Q)aformat:(id)bargs:([1{__va_list_tag=II^v^v}])c;
 - (BOOL) shouldLog:(i)a;
 - (void) log:(i)acommon:(BOOL)bformat:(id)cargs:([1{__va_list_tag=II^v^v}])dfile:(r*)eline:(q)f;
 - (void) setUserDefaults:(id)a;
 - (id) init;
 - (void) suspend;
 - (^{__asl_object_s=}) client;
 - (void) resume;


@end
