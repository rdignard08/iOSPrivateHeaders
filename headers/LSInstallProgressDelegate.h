
@protocol NSXPCListenerDelegate, LSInstallProgressProtocol;
@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {

    @"NSMutableDictionary" _observers;
    @"LSInstallProgressList" _progresses;
    @"NSMutableOrderedSet" _orderedInstalls;
    @"NSMutableDictionary" _installIndexes;
    @"NSMutableSet" _inactiveInstalls;
    @"LSObserverTimer" installsStartedTimer;
    @"LSObserverTimer" iconsUpdatedTimer;
    @"LSObserverTimer" installsUpdatedTimer;
    @"LSObserverTimer" installsFinishedTimer;
    @"LSObserverTimer" didUninstallTimer;
    @"NSObject<OS_dispatch_queue>" _installControlsQueue;
    @"NSObject<OS_dispatch_queue>" _observersQueue;
    BOOL _usingNetwork;
}

 - (void) addObserver:(id)awithUUID:(id)b;
 - (void) removeObserverWithUUID:(id)a;
 - (void) sendWillUninstallNotificationForApps:(id)aPlugins:(id)bisUpdate:(BOOL)c;
 - (void) beginObservingConnection;
 - (void) endObservingConnection;
 - (void) sendFailedNotificationForApp:(id)aisUninstall:(BOOL)b;
 - (void) installationEndedForApplication:(id)a;
 - (void) sendUninstalledNotificationForApp:(id)areply:(@?)b;
 - (void) placeholderInstalledForApp:(id)a;
 - (void) sendIconUpdatedNotificationForApp:(id)a;
 - (void) sendInstalledNotificationForApp:(id)areply:(@?)b;
 - (void) sendUninstalledNotificationForApps:(id)a;
 - (void) sendChangeNotificationForApp:(id)a;
 - (void) createInstallProgressForApplication:(id)awithPhase:(Q)bandPublishingString:(id)c;
 - (void) installationFailedForApplication:(id)areply:(@?)b;
 - (void) sendInstalledNotificationForApps:(id)a;
 - (void) sendNetworkUsageChangedNotification;
 - (void) restoreInactiveInstalls;
 - (id) parentProgressForApplication:(id)aandPhase:(Q)bisActive:(BOOL)c;
 - (void) rebuildInstallIndexes;
 - (void) sendAppControlsNotificationForApp:(id)awithName:(id)b;
 - (void) handleCancelInstallationForApp:(id)a;
 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (BOOL) listener:(id)ashouldAcceptNewConnection:(id)b;
 - (void) dealloc;
 - (id) init;


@end
