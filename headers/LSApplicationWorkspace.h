
@interface LSApplicationWorkspace : NSObject {

}
 + (id) defaultWorkspace;

 - (BOOL) establishConnection;
 - (id) remoteObserver;
 - (id) pluginsWithIdentifiers:(id)aprotocols:(id)bversion:(id)capplyFilter:(@?)d;
 - (BOOL) applicationIsInstalled:(id)a;
 - (BOOL) openURL:(id)awithOptions:(id)b;
 - (id) operationToOpenResource:(id)ausingApplication:(id)buniqueDocumentIdentifier:(id)csourceIsManaged:(BOOL)duserInfo:(id)edelegate:(id)f;
 - (id) operationToOpenResource:(id)ausingApplication:(id)buniqueDocumentIdentifier:(id)cuserInfo:(id)ddelegate:(id)e;
 - (id) operationToOpenResource:(id)ausingApplication:(id)buniqueDocumentIdentifier:(id)cuserInfo:(id)d;
 - (BOOL) installApplication:(id)awithOptions:(id)berror:(^@)cusingBlock:(@?)d;
 - (id) installProgressForApplication:(id)awithPhase:(unsigned long long)b;
 - (BOOL) uninstallApplication:(id)awithOptions:(id)busingBlock:(@?)c;
 - (BOOL) registerApplicationDictionary:(id)awithObserverNotification:(unsigned long long)b;
 - (BOOL) installPhaseFinishedForProgress:(id)a;
 - (void) clearCreatedProgressForBundleID:(id)a;
 - (void) removeInstallProgressForBundleID:(id)a;
 - (void) getKnowledgeUUID:(^@)aandSequenceNumber:(^@)b;
 - (id) delegateProxy;
 - (id) applicationForOpeningResource:(id)a;
 - (id) directionsApplications;
 - (id) applicationsWithUIBackgroundModes;
 - (id) applicationsWithSettingsBundle;
 - (id) applicationsWithVPNPlugins;
 - (id) applicationsWithExternalAccessoryProtocols;
 - (id) applicationForUserActivityType:(id)a;
 - (id) applicationForUserActivityDomainName:(id)a;
 - (id) applicationsOfType:(unsigned long long)a;
 - (id) pluginsWithIdentifiers:(id)aprotocols:(id)bversion:(id)cwithFilter:(@?)d;
 - (id) pluginsWithIdentifiers:(id)aprotocols:(id)bversion:(id)c;
 - (id) applicationsAvailableForOpeningDocument:(id)a;
 - (id) applicationsAvailableForHandlingURLScheme:(id)a;
 - (BOOL) openApplicationWithBundleID:(id)a;
 - (id) operationToOpenResource:(id)ausingApplication:(id)buserInfo:(id)c;
 - (void) enumerateBundlesOfType:(unsigned long long)ausingBlock:(@?)b;
 - (id) installedVPNPlugins;
 - (id) installedPlugins;
 - (id) placeholderApplications;
 - (id) unrestrictedApplications;
 - (id) allApplications;
 - (id) publicURLSchemes;
 - (id) privateURLSchemes;
 - (BOOL) getClaimedActivityTypes:(^@)adomains:(^@)b;
 - (BOOL) installApplication:(id)awithOptions:(id)b;
 - (BOOL) installApplication:(id)awithOptions:(id)berror:(^@)c;
 - (BOOL) uninstallApplication:(id)awithOptions:(id)b;
 - (BOOL) registerApplicationDictionary:(id)a;
 - (BOOL) registerApplication:(id)a;
 - (BOOL) unregisterApplication:(id)a;
 - (BOOL) registerPlugin:(id)a;
 - (BOOL) unregisterPlugin:(id)a;
 - (BOOL) updateSINFWithData:(id)aforApplication:(id)boptions:(id)cerror:(^@)d;
 - (BOOL) invalidateIconCache:(id)a;
 - (void) clearAdvertisingIdentifier;
 - (void) _clearCachedAdvertisingIdentifier;
 - (id) deviceIdentifierForAdvertising;
 - (id) deviceIdentifierForVendor;
 - (id) installProgressForBundleID:(id)amakeSynchronous:(unsigned char)b;
 - (BOOL) _LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)ainternal:(BOOL)buser:(BOOL)c;
 - (void) _LSClearSchemaCaches;
 - (id) URLOverrideForURL:(id)a;
 - (BOOL) openURL:(id)a;
 - (id) allInstalledApplications;
 - (void) removeObserver:(id)a;
 - (void) addObserver:(id)a;
 - (BOOL) openSensitiveURL:(id)awithOptions:(id)b;
 - (id) applicationsWithAudioComponents;


@end
