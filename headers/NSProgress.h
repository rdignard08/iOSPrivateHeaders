
@protocol NSProgressPublisher;
@interface NSProgress : NSObject <NSProgressPublisher> {

    id _group;
    long long _reserved4;
    id _values;
    id _reserved5;
    @? _cancellationHandler;
    @? _pausingHandler;
    @? _prioritizationHandler;
    unsigned long long _flags;
    id _userInfoProxy;
    NSString* _publisherID;
    NSXPCConnection* _connection;
    long long _unpublishingBlockageCount;
    long long _disconnectingBlockageCount;
    long long _remoteObserverCount;
    NSMutableDictionary* _acknowledgementHandlersByBundleID;
    NSMutableDictionary* _lastNotificationTimesByKey;
    NSMutableDictionary* _userInfoLastNotificationTimesByKey;
    NSLock* _lock;
    NSMutableSet* _childrenGroups;
}
@property (nonatomic, assign, readwrite) NSNumber* installState;
@property (nonatomic, assign, readwrite) NSNumber* installPhase;
@property (atomic, assign, readwrite) NSNumber* totalUnitCount;
@property (atomic, assign, readwrite) NSNumber* completedUnitCount;
@property (atomic, copy, readwrite) NSString* localizedDescription;
@property (atomic, copy, readwrite) NSString* localizedAdditionalDescription;
@property (atomic, assign, readwrite, getter=isCancellable) NSNumber* cancellable;
@property (atomic, assign, readwrite, getter=isPausable) NSNumber* pausable;
@property (atomic, assign, readonly, getter=isCancelled) NSNumber* cancelled;
@property (atomic, assign, readonly, getter=isPaused) NSNumber* paused;
@property (atomic, copy, readwrite) NSNumber* cancellationHandler;
@property (atomic, copy, readwrite) NSNumber* pausingHandler;
@property (atomic, assign, readonly, getter=isIndeterminate) NSNumber* indeterminate;
@property (atomic, assign, readonly) NSNumber* fractionCompleted;
@property (atomic, copy, readonly) NSDictionary* userInfo;
@property (atomic, copy, readwrite) NSString* kind;
@property (atomic, assign, readonly, getter=isOld) NSNumber* old;
 + (id) publishingKeyForApp:(id)awithPhase:(unsigned long long)b;
 + (id) childProgressForBundleID:(id)aandPhase:(unsigned long long)b;
 + (id) keyPathsForValuesAffectingInstallState;
 + (id) keyPathsForValuesAffectingInstallPhase;
 + (id) _addSubscriberForCategory:(id)ausingPublishingHandler:(@?)b;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) currentProgress;
 + (id) progressWithTotalUnitCount:(long long)a;
 + (id) _registrarInterface;
 + (id) _publisherInterface;
 + (id) _addSubscriberForFileURL:(id)awithPublishingHandler:(@?)b;
 + (void) _removeSubscriber:(id)a;
 + (id) _addSubscriberForFileURL:(id)ausingBlock:(@?)b;
 + (id) keyPathsForValuesAffectingLocalizedDescription;
 + (id) keyPathsForValuesAffectingLocalizedAdditionalDescription;
 + (id) addSubscriberForFileURL:(id)awithPublishingHandler:(@?)b;
 + (void) removeSubscriber:(id)a;
 + (id) addSubscriberForFileURL:(id)ausingBlock:(@?)b;
 + (id) _subscriberInterface;

 - (void) setInstallState:(unsigned long long)a ;
 - (unsigned long long) installState;
 - (id) initWithParent:(id)a bundleID:(id)b andPhase:(unsigned long long)c ;
 - (unsigned long long) installPhase;
 - (void) setInstallPhase:(unsigned long long)a ;
 - (id) _LSDescription;
 - (void) resume;
 - (BOOL) isPaused;
 - (void) setPausable:(BOOL)a ;
 - (void) setCancellable:(BOOL)a ;
 - (void) setPrioritizable:(BOOL)a ;
 - (void) setUserInfoObject:(id)a forKey:(id)b ;
 - (BOOL) isPausable;
 - (BOOL) isCancellable;
 - (BOOL) isPrioritizable;
 - (void) setPrioritizationHandler:(@?)a ;
 - (BOOL) isCancelled;
 - (BOOL) isFinished;
 - (void) setCompletedUnitCount:(long long)a ;
 - (void) setTotalUnitCount:(long long)a ;
 - (void) becomeCurrentWithPendingUnitCount:(long long)a ;
 - (void) resignCurrent;
 - (double) fractionCompleted;
 - (BOOL) isIndeterminate;
 - (id) initWithParent:(id)a userInfo:(id)b ;
 - (void) setCancellationHandler:(@?)a ;
 - (void) setPausingHandler:(@?)a ;
 - (long long) totalUnitCount;
 - (void) pause;
 - (void) _setCompletedUnitCount:(long long)a totalUnitCount:(long long)b ;
 - (void) _setGroup:(id)a ;
 - (Vv) prioritize;
 - (void) _updateGroup:(id)a oldFraction:(id)b newFraction:(id)c portion:(long long)d ;
 - (void) _removeGroup:(id)a fraction:(id)b portion:(long long)c ;
 - (id) _indentedDescription:(unsigned long long)a ;
 - (unsigned long long) ownedDictionaryCount;
 - (id) ownedDictionaryKeyEnumerator;
 - (id) ownedDictionaryObjectForKey:(id)a ;
 - (void) _addChild:(id)a toGroup:(id)b isPaused:(^B)c isCancelled:(^B)d ;
 - (void) __notifyRemoteObserversOfValueForKey:(id)a inUserInfo:(BOOL)b ;
 - (void) _unblockUnpublishing;
 - (void) _notifyRemoteObserversOfValueForKey:(id)a inUserInfo:(BOOL)b ;
 - (void) _setValueForKeys:(@?)a settingBlock:(@?)b ;
 - (void) _updateFractionCompletedFromOldFraction:(id)a toNewFraction:(id)b ;
 - (void) _setUserInfoValue:(id)a forKey:(id)b ;
 - (void) _publish;
 - (void) _unblockDisconnecting;
 - (void) _unpublish;
 - (void) _setAcknowledgementHandler:(@?)a forAppBundleIdentifier:(id)b ;
 - (@?) _acknowledgementHandlerForAppBundleIdentifier:(id)a ;
 - (Vv) startProvidingValuesWithInitialAcceptor:(@?)a ;
 - (Vv) stopProvidingValues;
 - (Vv) appWithBundleID:(id)a didAcknowledgeWithSuccess:(BOOL)b ;
 - (void) setLocalizedDescription:(id)a ;
 - (void) setLocalizedAdditionalDescription:(id)a ;
 - (id) localizedAdditionalDescription;
 - (@?) cancellationHandler;
 - (@?) pausingHandler;
 - (void) setKind:(id)a ;
 - (void) publish;
 - (void) unpublish;
 - (void) setAcknowledgementHandler:(@?)a forAppBundleIdentifier:(id)b ;
 - (@?) acknowledgementHandlerForAppBundleIdentifier:(id)a ;
 - (void) acknowledgeWithSuccess:(BOOL)a ;
 - (BOOL) isOld;
 - (id) _publishingAppBundleIdentifier;
 - (@?) prioritizationHandler;
 - (void) handleAcknowledgementByAppWithBundleIdentifier:(id)a usingBlock:(@?)b ;
 - (id) _initWithValues:(id)a ;
 - (void) _setRemoteValue:(id)a forKey:(id)b inUserInfo:(BOOL)c ;
 - (void) handleAcknowledgementByAppWithBundleIdentifer:(id)a usingBlock:(@?)b ;
 - (void) acknowledge;
 - (id) description;
 - (void) dealloc;
 - (id) localizedDescription;
 - (id) userInfo;
 - (id) kind;
 - (long long) completedUnitCount;
 - (id) init;
 - (void) cancel;


@end
