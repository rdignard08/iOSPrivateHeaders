
@interface NSUserActivity : NSObject {

    id _internal;
    id _delegate;
    id _frameworkDelegate;
}
@property (atomic, retain, readonly) NSUUID* _uniqueIdentifier;
@property (atomic, assign, readonly) NSNumber* _suggestedActionType;
@property (atomic, copy, readonly) NSDate* _lastActivityDate;
@property (atomic, copy, readwrite, _setOptions:) NSDictionary* _options;
@property (atomic, copy, readwrite, _setFrameworkPayload:) NSDictionary* _frameworkPayload;
@property (atomic, weak, readwrite, _setFrameworkDelegate:) NSNumber* _frameworkDelegate;
@property (atomic, copy, readonly) NSString* activityType;
@property (atomic, copy, readwrite) NSString* title;
@property (atomic, copy, readwrite) NSDictionary* userInfo;
@property (atomic, assign, readwrite) NSNumber* needsSave;
@property (atomic, copy, readwrite) NSURL* webpageURL;
@property (atomic, assign, readwrite) NSNumber* supportsContinuationStreams;
@property (atomic, weak, readwrite) NSNumber* delegate;
@property (atomic, retain, readonly) LSUserActivity* _internalUserActivity;
 + (void) _reportToCoreDuet:(id)a;
 + (id) _userFacingErrorForLaunchServicesError:(id)auserInfo:(id)b;
 + (void) _fetchUserActivityWithUUID:(id)acompletionHandler:(@?)b;

 - (void) didSynchronizeActivity;
 - (void) willSynchronizeActivity;
 - (void) didReceiveInputStream:(id)aoutputStream:(id)b;
 - (id) _options;
 - (id) _internalUserActivity;
 - (id) initWithActivityType:(id)a;
 - (id) typeIdentifier;
 - (id) title;
 - (void) setTitle:(id)a;
 - (void) addUserInfoEntriesFromDictionary:(id)a;
 - (BOOL) needsSave;
 - (void) setNeedsSave:(BOOL)a;
 - (id) webpageURL;
 - (void) setWebpageURL:(id)a;
 - (id) _frameworkDelegate;
 - (BOOL) supportsContinuationStreams;
 - (void) setSupportsContinuationStreams:(BOOL)a;
 - (void) becomeCurrent;
 - (void) getContinuationStreamsWithCompletionHandler:(@?)a;
 - (id) activityType;
 - (id) initWithInternalUserActivity:(id)a;
 - (id) initWithTypeIdentifier:(id)a;
 - (id) webPageURL;
 - (void) setWebPageURL:(id)a;
 - (id) _initWithTypeIdentifier:(id)asuggestedActionType:(Q)boptions:(id)c;
 - (void) _updateUserInfoValue:(id)aforKey:(id)b;
 - (void) _removeUserInfoValueForKey:(id)a;
 - (id) _frameworkPayload;
 - (void) _setFrameworkPayload:(id)a;
 - (void) _updateFrameworkPayloadValue:(id)aforKey:(id)b;
 - (void) _removeFrameworkPayloadValueForKey:(id)a;
 - (Q) _suggestedActionType;
 - (id) _lastActivityDate;
 - (void) _setLastActivityDate:(id)a;
 - (void) _setOptions:(id)a;
 - (void) _resignCurrent;
 - (void) dealloc;
 - (id) userInfo;
 - (void) invalidate;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setDelegate:(id)a;
 - (void) _setFrameworkDelegate:(id)a;
 - (id) init;
 - (id) delegate;
 - (id) _uniqueIdentifier;
 - (void) setUserInfo:(id)a;


@end
