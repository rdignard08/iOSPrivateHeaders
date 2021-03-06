
@interface LSBundleProxy : LSResourceProxy {

    unsigned long long _bundleFlags;
    unsigned long long _plistContentFlags;
    NSURL* _bundleURL;
    NSURL* _appStoreReceiptURL;
    NSString* _localizedShortName;
    NSString* _bundleExecutable;
    NSString* _bundleVersion;
    NSString* _bundleType;
    NSString* _signerIdentity;
    NSDictionary* _entitlements;
    NSDictionary* _environmentVariables;
    NSDictionary* _groupContainerURLs;
    NSUUID* _cacheGUID;
    NSArray* _machOUUIDs;
    BOOL _foundBackingBundle;
    unsigned long long _sequenceNumber;
}
 + (id) bundleProxyForURL:(id)a;
 + (id) bundleProxyForIdentifier:(id)a;

 - (BOOL) foundBackingBundle;
 - (id) containerURL;
 - (id) dataContainerURL;
 - (unsigned char) _createContext:(^{LSContext=^{LSDatabase}})a andGetBundle:(^I)b withData:(r^^{LSBundleData})c ;
 - (id) _plistValueForKey:(id)a ;
 - (id) bundleType;
 - (id) _initWithBundleUnit:(unsigned int)a bundleType:(unsigned long long)b BundleID:(id)c localizedName:(id)d bundleContainerURL:(id)e dataContainerURL:(id)f resourcesDirectoryURL:(id)g iconsDictionary:(id)h iconFileNames:(id)i version:(id)j ;
 - (void) setLocalizedShortName:(id)a ;
 - (id) bundleVersion;
 - (id) signerIdentity;
 - (id) entitlements;
 - (id) environmentVariables;
 - (id) cacheGUID;
 - (id) localizedShortName;
 - (unsigned long long) sequenceNumber;
 - (id) machOUUIDs;
 - (id) bundleExecutable;
 - (id) bundleURL;
 - (id) appStoreReceiptURL;
 - (id) groupContainerURLs;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) bundleIdentifier;
 - (id) bundleContainerURL;


@end
