
@protocol BSLogging;
@interface BSFileLogger : NSObject <BSLogging> {

    NSObject<OS_dispatch_queue>* _queue;
    NSString* _logPath;
    NSMutableArray* _recentLogs;
    NSMutableSet* _enabledCategories;
    NSDateFormatter* _memoryLogDateFormatter;
    BOOL _enabledByPreference;
    <BSFileLoggerDelegate>* _delegate;
}
@property (nonatomic, assign, readonly) NSString* name;
@property (nonatomic, assign, readonly, getter=isEnabled) NSNumber* enabled;
@property (nonatomic, retain, readonly) NSNumber* queue;
@property (nonatomic, assign, readonly) NSString* logPath;
@property (nonatomic, assign, readonly) NSNumber* logDestinations;
@property (nonatomic, assign, readonly) NSNumber* maxLogCount;
@property (nonatomic, assign, readonly) NSNumber* maxLogSize;
@property (nonatomic, assign, readonly) NSNumber* maxLogLinesInMemory;
@property (nonatomic, assign, readonly) NSString* logPreferenceDomain;
@property (nonatomic, assign, readonly) NSString* logPreferenceName;
@property (nonatomic, assign, readonly) NSNumber* shouldEnableOnInternalBuilds;
@property (nonatomic, assign, readwrite) NSNumber* delegate;

 - (void) dealloc;
 - (id) name;
 - (void) setDelegate:(id)a ;
 - (id) init;
 - (id) delegate;
 - (id) queue;
 - (void) logWithFormat:(id)a arguments:([1{__va_list_tag=II^v^v}])b ;
 - (void) logWithFormat:(id)a ;
 - (void) reloadFromDefaults;
 - (BOOL) _queue_isEnabledForCategory:(id)a ;
 - (id) logPreferenceName;
 - (id) logPreferenceDomain;
 - (BOOL) shouldEnableOnInternalBuilds;
 - (void) _setEnabled:(BOOL)a fromDefaults:(BOOL)b ;
 - (id) logPrefixForCategory:(id)a destination:(unsigned long long)b ;
 - (void) _setEnabled:(BOOL)a ;
 - (void) _queue_appendLogForCategory:(id)a withFormat:(id)b arguments:([1{__va_list_tag=II^v^v}])c ;
 - (unsigned long long) logDestinations;
 - (id) composedLogForCategory:(id)a destination:(unsigned long long)b format:(id)c arguments:([1{__va_list_tag=II^v^v}])d ;
 - (unsigned long long) maxLogLinesInMemory;
 - (void) _appendLogForCategory:(id)a withFormat:(id)b arguments:([1{__va_list_tag=II^v^v}])c ;
 - (BOOL) isEnabledForCategory:(id)a ;
 - (id) loggerForCatagory:(id)a ;
 - (void) willBeginLoggingToPath:(id)a ;
 - (id) recentLogs;
 - (BOOL) saveRecentLogsToTemporaryPath:(^@)a ;
 - (id) logPath;
 - (int) maxLogCount;
 - (int) maxLogSize;
 - (void) _enableLogCategory:(id)a ;
 - (void) _disableLogCategory:(id)a ;
 - (BOOL) isEnabled;


@end
