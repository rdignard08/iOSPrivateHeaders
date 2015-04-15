
@interface LSBundleProxy : LSResourceProxy {

    Q _bundleFlags;
    Q _plistContentFlags;
    @"NSURL" _bundleURL;
    @"NSURL" _appStoreReceiptURL;
    @"NSString" _localizedShortName;
    @"NSString" _bundleExecutable;
    @"NSString" _bundleVersion;
    @"NSString" _bundleType;
    @"NSString" _signerIdentity;
    @"NSDictionary" _entitlements;
    @"NSDictionary" _environmentVariables;
    @"NSDictionary" _groupContainerURLs;
    @"NSUUID" _cacheGUID;
    @"NSArray" _machOUUIDs;
    BOOL _foundBackingBundle;
    Q _sequenceNumber;
}
 + (id) bundleProxyForURL:(id)a;
 + (id) bundleProxyForIdentifier:(id)a;

 - (BOOL) foundBackingBundle;
 - (id) containerURL;
 - (id) dataContainerURL;
 - (C) _createContext:(^{LSContext=^{LSDatabase}})aandGetBundle:(^I)bwithData:(r^^{LSBundleData})c;
 - (id) _plistValueForKey:(id)a;
 - (id) bundleType;
 - (id) _initWithBundleUnit:(I)abundleType:(Q)bBundleID:(id)clocalizedName:(id)dbundleContainerURL:(id)edataContainerURL:(id)fresourcesDirectoryURL:(id)giconsDictionary:(id)hiconFileNames:(id)iversion:(id)j;
 - (void) setLocalizedShortName:(id)a;
 - (id) bundleVersion;
 - (id) signerIdentity;
 - (id) entitlements;
 - (id) environmentVariables;
 - (id) cacheGUID;
 - (id) localizedShortName;
 - (Q) sequenceNumber;
 - (id) machOUUIDs;
 - (id) bundleExecutable;
 - (id) bundleURL;
 - (id) appStoreReceiptURL;
 - (id) groupContainerURLs;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) bundleIdentifier;
 - (id) bundleContainerURL;


@end
