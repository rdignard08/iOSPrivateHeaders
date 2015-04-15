
@interface PEPServiceConfiguration : NSObject {

    @"NSString" _cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (void) _postNotification;
 - (BOOL) registerNetworkDefaultsForAppIDs:(id)aforceUpdate:(BOOL)b;
 - (void) _updateDefaults:(id)a;
 - (BOOL) registerNetworkDefaultsForAppID:(id)a;


@end
