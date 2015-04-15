
@protocol SFCompanionAdvertiserDelegate;
@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate> {

    @"LSUserActivityManager" _manager;
    @"NSMutableDictionary" _userInfo;
    @"NSMutableDictionary" _frameworkPayload;
    @"NSString" _title;
    @"NSURL" _webpageURL;
    @"<LSUserActivityDelegate>" _delegate;
    @"SFCompanionAdvertiser" _advertiser;
    @"SFCompanionAdvertiser" _resumerAdvertiser;
    d _lastSaveTime;
    BOOL _saveScheduled;
    BOOL _createsNewUUIDIfSaved;
    @"NSError" _decodeUserInfoError;
    BOOL _needsSave;
    BOOL _dirty;
    BOOL _sendToServerPending;
    BOOL _inWillSaveCallback;
    BOOL _supportsContinuationStreams;
    BOOL _forceImmediateSendToServer;
    BOOL _encodedContainsUnsynchronizedCloudDocument;
    BOOL _encodedFileProviderURL;
    d _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
    BOOL _canCreateStreams;
    @"NSString" _typeIdentifier;
    @"NSUUID" _uniqueIdentifier;
    Q _suggestedActionType;
    @"NSDate" _lastActivityDate;
    @"NSDictionary" _options;
    @"NSData" _streamsData;
}
@property (atomic, copy, readwrite) NSString* owningBundleIdentifier;
@property (atomic, assign, readwrite, isActive) NSNumber* active;
@property (atomic, copy, readwrite) NSDictionary* activityPayload;
@property (atomic, copy, readwrite, activityPayload, setActivityPayload:) NSDictionary* activityPayloadDictionary;
@property (atomic, copy, readwrite, frameworkPayload, setFrameworkPayload:) NSDictionary* frameworkPayloadDictionary;
@property (atomic, copy, readwrite) NSDictionary* frameworkPayload;
@property (atomic, copy, readwrite) NSURL* webPageURL;
@property (atomic, copy, readwrite) NSString* typeIdentifier;
@property (atomic, copy, readwrite) NSString* title;
@property (atomic, copy, readwrite) NSDictionary* userInfo;
@property (atomic, copy, readwrite) NSURL* webpageURL;
@property (atomic, assign, readwrite) NSNumber* needsSave;
@property (atomic, assign, readwrite) NSNumber* supportsContinuationStreams;
@property (atomic, assign, readwrite) NSNumber* forceImmediateSendToServer;
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, copy, readwrite) NSUUID* uniqueIdentifier;
@property (atomic, assign, readonly) NSNumber* suggestedActionType;
@property (atomic, copy, readwrite) NSDate* lastActivityDate;
@property (atomic, copy, readwrite) NSDictionary* options;
@property (atomic, copy, readwrite) NSData* streamsData;
@property (atomic, assign, readwrite) NSNumber* canCreateStreams;
@property (atomic, assign, readonly) LSUserActivityManager* manager;
@property (atomic, assign, readwrite) NSNumber* dirty;
@property (atomic, assign, readwrite) NSNumber* sendToServerPending;
@property (atomic, assign, readwrite) NSNumber* createsNewUUIDIfSaved;
@property (atomic, retain, readwrite) NSError* decodeUserInfoError;
@property (atomic, assign, readwrite) NSNumber* encodedContainsUnsynchronizedCloudDocument;
@property (atomic, assign, readwrite) NSNumber* encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
@property (atomic, assign, readwrite) NSNumber* encodedFileProviderURL;
 + (BOOL) userActivityContinuationSupported;
 + (BOOL) checkWebpageURL:(id)aactionType:(Q)bthrowIfFailed:(BOOL)c;
 + (id) userActivityFromUUID:(id)awithError:(^@)b;
 + (id) suggestedActionOfType:(Q)a;
 + (id) allowedWebpageURLSchemes;
 + (id) registerForSuggestedActionNudgeOfType:(Q)awithOptions:(id)bblock:(@?)c;
 + (void) unregisterForSuggestedActionNudgeOfType:(id)a;
 + (void) fetchUserActivityWithUUID:(id)acompletionHandler:(@?)b;
 + (id) userActivity;

 - (void) tellDaemonAboutNewLSUserActivity;
 - (void) setDecodeUserInfoError:(id)a;
 - (void) setForceImmediateSendToServer:(BOOL)a;
 - (BOOL) forceImmediateSendToServer;
 - (void) scheduleSendUserActivityInfoToLSUserActivityd;
 - (void) sendUserActivityInfoToLSUserActivityd:(BOOL)aonAsyncQueue:(BOOL)b;
 - (void) setEncodedContainsUnsynchronizedCloudDocument:(BOOL)a;
 - (void) setEncodedFileProviderURL:(BOOL)a;
 - (id) decodeUserInfoError;
 - (BOOL) dirty;
 - (id) encodeUserInfo:(id)a;
 - (id) decodeUserInfo:(id)a;
 - (BOOL) sendToServerPending;
 - (void) setSendToServerPending:(BOOL)a;
 - (BOOL) createsNewUUIDIfSaved;
 - (void) setCreatesNewUUIDIfSaved:(BOOL)a;
 - (BOOL) encodedContainsUnsynchronizedCloudDocument;
 - (d) encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
 - (void) setEncodedContainsUnsynchronizedCloudDocumentBackoffInterval:(d)a;
 - (BOOL) encodedFileProviderURL;
 - (void) setTypeIdentifier:(id)a;
 - (id) streamsData;
 - (void) setStreamsData:(id)a;
 - (BOOL) canCreateStreams;
 - (void) setCanCreateStreams:(BOOL)a;
 - (id) initWithSuggestedActionType:(Q)aoptions:(id)b;
 - (id) initWithUUID:(id)a;
 - (id) owningBundleIdentifier;
 - (void) setOwningBundleIdentifier:(id)a;
 - (void) removeFrameworkPayloadForKey:(id)a;
 - (void) updateActivityPayloadValue:(id)aforKey:(id)b;
 - (void) removeActivityPayloadForKey:(id)a;
 - (id) activityPayload;
 - (void) setActivityPayload:(id)a;
 - (void) save;
 - (id) resourceURLs;
 - (void) setResourceURLs:(id)a;
 - (id) addResourceURL:(id)a;
 - (void) removeResourceURL:(id)a;
 - (id) resourceURLForKey:(id)a;
 - (id) userActivityInfoForSelf;
 - (id) callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)aclearDirty:(BOOL)b;
 - (void) didReceiveInputStream:(id)aoutputStream:(id)b;
 - (id) initWithManager:(id)auserActivityInfo:(id)b;
 - (void) willSynchronizeUserActivityWithHandler:(@?)a;
 - (void) didSynchronizeUserActivity;
 - (void) advertiser:(id)adidReceiveInputStream:(id)boutputStream:(id)c;
 - (id) unarchiver:(id)adidDecodeObject:(id)b;
 - (id) archiver:(id)awillEncodeObject:(id)b;
 - (void) resignCurrent;
 - (id) initWithTypeIdentifier:(id)aoptions:(id)b;
 - (id) typeIdentifier;
 - (id) title;
 - (void) setTitle:(id)a;
 - (void) addUserInfoEntriesFromDictionary:(id)a;
 - (BOOL) needsSave;
 - (void) setNeedsSave:(BOOL)a;
 - (id) webpageURL;
 - (void) setWebpageURL:(id)a;
 - (BOOL) supportsContinuationStreams;
 - (void) setSupportsContinuationStreams:(BOOL)a;
 - (void) becomeCurrent;
 - (void) getContinuationStreamsWithCompletionHandler:(@?)a;
 - (id) initWithTypeIdentifier:(id)a;
 - (id) webPageURL;
 - (void) setWebPageURL:(id)a;
 - (id) initWithTypeIdentifier:(id)asuggestedActionType:(Q)boptions:(id)c;
 - (void) updateUserInfoValue:(id)aforKey:(id)b;
 - (void) removeUserInfoValueForKey:(id)a;
 - (id) frameworkPayload;
 - (void) setFrameworkPayload:(id)a;
 - (void) updateFrameworkPayloadValue:(id)aforKey:(id)b;
 - (void) removeFrameworkPayloadValueForKey:(id)a;
 - (Q) suggestedActionType;
 - (id) lastActivityDate;
 - (void) setLastActivityDate:(id)a;
 - (void) _resignCurrent;
 - (id) manager;
 - (BOOL) isActive;
 - (void) setActive:(BOOL)a;
 - (id) description;
 - (void) dealloc;
 - (id) userInfo;
 - (void) invalidate;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setDelegate:(id)a;
 - (void) setDirty:(BOOL)a;
 - (void) remove;
 - (id) debugDescription;
 - (id) init;
 - (id) delegate;
 - (void) setUniqueIdentifier:(id)a;
 - (void) setOptions:(id)a;
 - (id) uniqueIdentifier;
 - (id) options;
 - (void) setUserInfo:(id)a;


@end