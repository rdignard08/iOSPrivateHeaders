
@interface NSProcessInfo : NSObject {

    @"NSDictionary" environment;
    @"NSArray" arguments;
    @"NSString" hostName;
    @"NSString" name;
    q automaticTerminationOptOutCounter;
}
@property (atomic, copy, readonly) NSDictionary* environment;
@property (atomic, copy, readonly) NSArray* arguments;
@property (atomic, copy, readonly) NSString* hostName;
@property (atomic, copy, readwrite) NSString* processName;
@property (atomic, assign, readonly) NSNumber* processIdentifier;
@property (atomic, copy, readonly) NSString* globallyUniqueString;
@property (atomic, copy, readonly) NSString* operatingSystemVersionString;
@property (atomic, assign, readonly) NSNumber* operatingSystemVersion;
@property (atomic, assign, readonly) NSNumber* processorCount;
@property (atomic, assign, readonly) NSNumber* activeProcessorCount;
@property (atomic, assign, readonly) NSNumber* physicalMemory;
@property (atomic, assign, readonly) NSNumber* systemUptime;
@property (atomic, assign, readwrite) NSNumber* automaticTerminationSupportEnabled;
 + (id) processInfo;

 - (void) _disableAutomaticTerminationWithoutSettingRelaunchable:(id)a;
 - (void) _enableAutomaticTerminationWithoutSettingRelaunchable:(id)a;
 - (id) processName;
 - (id) beginActivityWithOptions:(Q)areason:(id)b;
 - (void) _reactivateActivity:(id)a;
 - (void) endActivity:(id)a;
 - (Q) operatingSystem;
 - ({?=qqq}) operatingSystemVersion;
 - (void) performActivityWithOptions:(Q)areason:(id)busingBlock:(@?)c;
 - (void) setArguments:(id)a;
 - (id) hostName;
 - (void) setProcessName:(id)a;
 - (id) globallyUniqueString;
 - (id) userName;
 - (id) userFullName;
 - (id) userHomeDirectory;
 - (id) operatingSystemName;
 - (id) operatingSystemVersionString;
 - (BOOL) isOperatingSystemAtLeastVersion:({?=qqq})a;
 - (Q) activeProcessorCount;
 - (Q) physicalMemory;
 - (BOOL) isTranslated;
 - (void) disableSuddenTermination;
 - (void) enableSuddenTermination;
 - (void) _exitIfSuddenTerminationEnabledWithStatus:(i)a;
 - (void) _exitWhenSuddenTerminationEnabledWithStatus:(i)a;
 - (q) _suddenTerminationDisablingCount;
 - (void) disableAutomaticTermination:(id)a;
 - (void) enableAutomaticTermination:(id)a;
 - (void) setAutomaticTerminationSupportEnabled:(BOOL)a;
 - (BOOL) automaticTerminationSupportEnabled;
 - (void) _disableAutomaticTerminationOnly:(id)a;
 - (void) _enableAutomaticTerminationOnly:(id)a;
 - (id) beginSuspensionOfSystemBehaviors:(Q)areason:(id)b;
 - (void) endSystemBehaviorSuspension:(id)a;
 - (void) performActivityWithOptions:(Q)areason:(id)bblock:(@?)c;
 - (void) dealloc;
 - (void) performExpiringActivityWithReason:(id)ausingBlock:(@?)b;
 - (id) arguments;
 - (i) processIdentifier;
 - (Q) processorCount;
 - (id) environment;
 - (d) systemUptime;


@end
