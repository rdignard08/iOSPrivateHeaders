
@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver {

    BOOL _observinglsd;
    @"NSHashTable" _observers;
    @"NSObject<OS_dispatch_queue>" _progressSubscriptionsQueue;
}

 - (void) setObservinglsd:(BOOL)a;
 - (BOOL) isObservinglsd;
 - (unsigned long long) currentObserverCount;
 - (void) applicationInstallsDidCancel:(id)a;
 - (void) applicationInstallsDidPause:(id)a;
 - (void) applicationInstallsDidPrioritize:(id)a;
 - (void) applicationInstallsDidResume:(id)a;
 - (void) networkUsageChanged:(BOOL)a;
 - (void) pluginsDidInstall:(id)a;
 - (void) pluginsDidUninstall:(id)a;
 - (void) pluginsWillUninstall:(id)a;
 - (void) addLocalObserver:(id)a;
 - (void) removeLocalObserver:(id)a;
 - (id) localObservers;
 - (void) applicationInstallsDidStart:(id)a;
 - (void) applicationInstallsDidUpdateIcon:(id)a;
 - (void) applicationInstallsDidChange:(id)a;
 - (void) applicationsWillInstall:(id)a;
 - (void) applicationsDidInstall:(id)a;
 - (void) applicationsDidFailToInstall:(id)a;
 - (void) applicationsWillUninstall:(id)a;
 - (void) applicationsDidUninstall:(id)a;
 - (void) applicationsDidFailToUninstall:(id)a;
 - (void) applicationInstallsArePrioritized:(id)aarePaused:(id)b;
 - (void) dealloc;
 - (id) init;


@end
