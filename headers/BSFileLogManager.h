
@protocol BSFileLoggerDelegate;
@interface BSFileLogManager : NSObject <BSFileLoggerDelegate> {

    NSObject<OS_dispatch_queue> _queue;
    NSMutableDictionary _loggersByName;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (void) reloadFromDefaults;
 - (id) loggerForName:(id)a;
 - (void) _queue_enableOrDisableLoggerIfNecessary:(id)a;
 - (void) registerLoggersFromBundle:(id)a;
 - (void) registerLoggersFromURL:(id)a;
 - (void) _queue_addFileLoggersFromPlistAtURL:(id)a;
 - (void) _queue_registerLogger:(id)a;
 - (void) _queue_addLogger:(id)a;
 - (BOOL) _queue_isClass:(Class)aaKindOfClass:(Class)b;
 - (void) loggerEnabledStateChanged:(id)a;
 - (void) registerLoggers;
 - (void) registerLogger:(id)a;
 - (void) flush;


@end
