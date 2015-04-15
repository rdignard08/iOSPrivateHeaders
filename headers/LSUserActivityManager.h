
@protocol LSUserActivityClientResponseProtocol;
@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol> {

    NSXPCConnection* _connection;
    NSObject<OS_dispatch_queue>* _serverQ;
    BOOL _connectionInitializationSucceeded;
    BOOL _needToSendInitialMessage;
    NSMapTable* _userActivitiesByUUID;
    BOOL _supportsActivityContinuation;
    BOOL _activityContinuationIsEnabled;
    NSUUID* _activeUserActivityUUID;
}
@property (atomic, retain, readonly) NSXPCConnection* connection;
@property (atomic, copy, readwrite) NSUUID* activeUserActivityUUID;
@property (atomic, assign, readonly) NSNumber* supportsActivityContinuation;
@property (atomic, assign, readonly) NSNumber* activityContinuationIsEnabled;
@property (atomic, assign, readonly) NSNumber* serverQ;
@property (atomic, retain, readwrite) NSMapTable* userActivitiesByUUID;
 + (BOOL) shouldSupportActivityContinuation;
 + (BOOL) userActivityContinuationSupported;
 + (id) defaultManager;

 - (void) sendInitialMessage;
 - (id) serverQ;
 - (id) userActivitiesByUUID;
 - (void) setActiveUserActivityUUID:(id)a;
 - (id) _findUserActivityForUUID:(id)a;
 - (void) addUserActivity:(id)a;
 - (void) askClientUserActivityToSave:(id)a;
 - (void) askClientUserActivityToSave:(id)acompletionHandler:(@?)b;
 - (void) tellClientUserActivityItWasResumed:(id)a;
 - (BOOL) activityContinuationIsEnabled;
 - (void) didReceiveInputStreamWithUUID:(id)ainputStream:(id)boutputStream:(id)c;
 - (id) encodeUserActivity:(id)a;
 - (id) createByDecodingUserActivity:(id)a;
 - (BOOL) supportsActivityContinuation;
 - (void) setUserActivitiesByUUID:(id)a;
 - (void) fetchUUID:(id)awithCompletionHandler:(@?)b;
 - (void) markUserActivityAsDirty:(id)aforceImmediate:(BOOL)b;
 - (BOOL) userActivityIsActive:(id)a;
 - (void) makeActive:(id)a;
 - (void) makeInactive:(id)a;
 - (void) removeUserActivity:(id)a;
 - (id) activeUserActivityUUID;
 - (void) tellDaemonAboutNewLSUserActivity:(id)a;
 - (void) sendUserActivityInfoToLSUserActivityd:(id)amakeCurrent:(BOOL)b;
 - (id) connection;
 - (void) dealloc;
 - (id) init;
 - (id) initWithConnection:(id)a;


@end
