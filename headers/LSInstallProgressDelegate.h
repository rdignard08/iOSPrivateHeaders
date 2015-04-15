
@protocol NSXPCListenerDelegate, LSInstallProgressProtocol;
@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {

    NSMutableDictionary* _observers;
    LSInstallProgressList* _progresses;
    NSMutableOrderedSet* _orderedInstalls;
    NSMutableDictionary* _installIndexes;
    NSMutableSet* _inactiveInstalls;
    LSObserverTimer* installsStartedTimer;
    LSObserverTimer* iconsUpdatedTimer;
    LSObserverTimer* installsUpdatedTimer;
    LSObserverTimer* installsFinishedTimer;
    LSObserverTimer* didUninstallTimer;
    NSObject<OS_dispatch_queue>* _installControlsQueue;
    NSObject<OS_dispatch_queue>* _observersQueue;
    BOOL _usingNetwork;
}

 - (void) addObserver:(id)a withUUID:(id)b ;
 - (void) removeObserverWithUUID:(id)a ;
 - (void) sendWillUninstallNotificationForApps:(id)a Plugins:(id)b isUpdate:(BOOL)c ;
 - (void) beginObservingConnection;
 - (void) endObservingConnection;
 - (void) sendFailedNotificationForApp:(id)a isUninstall:(BOOL)b ;
 - (void) installationEndedForApplication:(id)a ;
 - (void) sendUninstalledNotificationForApp:(id)a reply:(@?)b ;
 - (void) placeholderInstalledForApp:(id)a ;
 - (void) sendIconUpdatedNotificationForApp:(id)a ;
 - (void) sendInstalledNotificationForApp:(id)a reply:(@?)b ;
 - (void) sendUninstalledNotificationForApps:(id)a ;
 - (void) sendChangeNotificationForApp:(id)a ;
 - (void) createInstallProgressForApplication:(id)a withPhase:(unsigned long long)b andPublishingString:(id)c ;
 - (void) installationFailedForApplication:(id)a reply:(@?)b ;
 - (void) sendInstalledNotificationForApps:(id)a ;
 - (void) sendNetworkUsageChangedNotification;
 - (void) restoreInactiveInstalls;
 - (id) parentProgressForApplication:(id)a andPhase:(unsigned long long)b isActive:(BOOL)c ;
 - (void) rebuildInstallIndexes;
 - (void) sendAppControlsNotificationForApp:(id)a withName:(id)b ;
 - (void) handleCancelInstallationForApp:(id)a ;
 - (void) observeValueForKeyPath:(id)a ofObject:(id)b change:(id)c context:(^v)d ;
 - (BOOL) listener:(id)a shouldAcceptNewConnection:(id)b ;
 - (void) dealloc;
 - (id) init;


@end
