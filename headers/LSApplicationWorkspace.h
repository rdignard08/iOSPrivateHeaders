
@interface LSApplicationWorkspace : NSObject {

}
 + (id) defaultWorkspace;

 - (BOOL) establishConnection;
 - (id) remoteObserver;
 - (id) pluginsWithIdentifiers:(id)a protocols:(id)b version:(id)c applyFilter:(@?)d ;
 - (BOOL) applicationIsInstalled:(id)a ;
 - (BOOL) openURL:(id)a withOptions:(id)b ;
 - (id) operationToOpenResource:(id)a usingApplication:(id)b uniqueDocumentIdentifier:(id)c sourceIsManaged:(BOOL)d userInfo:(id)e delegate:(id)f ;
 - (id) operationToOpenResource:(id)a usingApplication:(id)b uniqueDocumentIdentifier:(id)c userInfo:(id)d delegate:(id)e ;
 - (id) operationToOpenResource:(id)a usingApplication:(id)b uniqueDocumentIdentifier:(id)c userInfo:(id)d ;
 - (BOOL) installApplication:(id)a withOptions:(id)b error:(^@)c usingBlock:(@?)d ;
 - (id) installProgressForApplication:(id)a withPhase:(unsigned long long)b ;
 - (BOOL) uninstallApplication:(id)a withOptions:(id)b usingBlock:(@?)c ;
 - (BOOL) registerApplicationDictionary:(id)a withObserverNotification:(unsigned long long)b ;
 - (BOOL) installPhaseFinishedForProgress:(id)a ;
 - (void) clearCreatedProgressForBundleID:(id)a ;
 - (void) removeInstallProgressForBundleID:(id)a ;
 - (void) getKnowledgeUUID:(^@)a andSequenceNumber:(^@)b ;
 - (id) delegateProxy;
 - (id) applicationForOpeningResource:(id)a ;
 - (id) directionsApplications;
 - (id) applicationsWithUIBackgroundModes;
 - (id) applicationsWithSettingsBundle;
 - (id) applicationsWithVPNPlugins;
 - (id) applicationsWithExternalAccessoryProtocols;
 - (id) applicationForUserActivityType:(id)a ;
 - (id) applicationForUserActivityDomainName:(id)a ;
 - (id) applicationsOfType:(unsigned long long)a ;
 - (id) pluginsWithIdentifiers:(id)a protocols:(id)b version:(id)c withFilter:(@?)d ;
 - (id) pluginsWithIdentifiers:(id)a protocols:(id)b version:(id)c ;
 - (id) applicationsAvailableForOpeningDocument:(id)a ;
 - (id) applicationsAvailableForHandlingURLScheme:(id)a ;
 - (BOOL) openApplicationWithBundleID:(id)a ;
 - (id) operationToOpenResource:(id)a usingApplication:(id)b userInfo:(id)c ;
 - (void) enumerateBundlesOfType:(unsigned long long)a usingBlock:(@?)b ;
 - (id) installedVPNPlugins;
 - (id) installedPlugins;
 - (id) placeholderApplications;
 - (id) unrestrictedApplications;
 - (id) allApplications;
 - (id) publicURLSchemes;
 - (id) privateURLSchemes;
 - (BOOL) getClaimedActivityTypes:(^@)a domains:(^@)b ;
 - (BOOL) installApplication:(id)a withOptions:(id)b ;
 - (BOOL) installApplication:(id)a withOptions:(id)b error:(^@)c ;
 - (BOOL) uninstallApplication:(id)a withOptions:(id)b ;
 - (BOOL) registerApplicationDictionary:(id)a ;
 - (BOOL) registerApplication:(id)a ;
 - (BOOL) unregisterApplication:(id)a ;
 - (BOOL) registerPlugin:(id)a ;
 - (BOOL) unregisterPlugin:(id)a ;
 - (BOOL) updateSINFWithData:(id)a forApplication:(id)b options:(id)c error:(^@)d ;
 - (BOOL) invalidateIconCache:(id)a ;
 - (void) clearAdvertisingIdentifier;
 - (void) _clearCachedAdvertisingIdentifier;
 - (id) deviceIdentifierForAdvertising;
 - (id) deviceIdentifierForVendor;
 - (id) installProgressForBundleID:(id)a makeSynchronous:(unsigned char)b ;
 - (BOOL) _LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)a internal:(BOOL)b user:(BOOL)c ;
 - (void) _LSClearSchemaCaches;
 - (id) URLOverrideForURL:(id)a ;
 - (BOOL) openURL:(id)a ;
 - (id) allInstalledApplications;
 - (void) removeObserver:(id)a ;
 - (void) addObserver:(id)a ;
 - (BOOL) openSensitiveURL:(id)a withOptions:(id)b ;
 - (id) applicationsWithAudioComponents;


@end
