
@protocol NSSecureCoding;
@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {

    unsigned long long _flags;
    NSArray* _privateDocumentIconNames;
    LSApplicationProxy* _privateDocumentTypeOwner;
    NSString* _vendorName;
    NSString* _itemName;
    NSString* _shortVersionString;
    unsigned long long _installType;
    unsigned long long _originalInstallType;
    NSDictionary* _groupContainers;
    NSArray* _externalAccessoryProtocols;
    NSArray* _deviceFamily;
    NSArray* _requiredDeviceCapabilities;
    NSString* _minimumSystemVersion;
    NSString* _sdkVersion;
    NSArray* _directionsModes;
    NSArray* _UIBackgroundModes;
    NSArray* _audioComponents;
    NSArray* _VPNPlugins;
    NSArray* _pluginUUIDs;
    NSArray* _plugInKitPlugins;
    NSArray* _appTags;
    NSString* _applicationDSID;
    NSString* _storeCohortMetadata;
    NSNumber* _storeFront;
    NSString* _sourceAppIdentifier;
    BOOL _isContainerized;
    int _modTime;
    NSUUID* _deviceIdentifierForVendor;
    NSNumber* _staticDiskUsage;
    NSNumber* _dynamicDiskUsage;
    NSNumber* _itemID;
    NSArray* _groupIdentifiers;
    NSString* _teamID;
}
 + (id) applicationProxyWithBundleUnitID:(unsigned int)a;
 + (id) applicationProxyForIdentifier:(id)aplaceholder:(BOOL)b;
 + (id) applicationProxyForIdentifier:(id)a;
 + (id) applicationProxyForBundleURL:(id)a;
 + (id) applicationProxyForIdentifier:(id)aroleIdentifier:(id)b;
 + (id) applicationProxyForItemID:(id)a;
 + (BOOL) supportsSecureCoding;

 - ({CGSize=dd}) _defaultStyleSize:(id)a ;
 - (^{?=i{CGSize=dd}}) _iconVariantDefinitions:(id)a ;
 - (void) setPrivateDocumentIconNames:(id)a ;
 - (void) setPrivateDocumentIconAllowOverride:(BOOL)a ;
 - (void) setPrivateDocumentTypeOwner:(id)a ;
 - (id) plugInKitPlugins;
 - (id) applicationIdentifier;
 - (void) populateNotificationData;
 - (BOOL) isPlaceholder;
 - (BOOL) isAppUpdate;
 - (id) deviceIdentifierForVendor;
 - (id) installProgress;
 - (int) bundleModTime;
 - (BOOL) isBetaApp;
 - (id) localizedName;
 - (BOOL) privateDocumentIconAllowOverride;
 - (id) iconStyleDomain;
 - (id) resourcesDirectoryURL;
 - (id) privateDocumentIconNames;
 - (id) iconDataForVariant:(int)a ;
 - (id) localizedShortName;
 - (id) machOUUIDs;
 - (id) _initWithBundleUnit:(unsigned int)a applicationIdentifier:(id)b ;
 - (BOOL) isContainerized;
 - (BOOL) profileValidated;
 - (BOOL) isNewsstandApp;
 - (id) shortVersionString;
 - (id) itemID;
 - (id) storeCohortMetadata;
 - (id) storeFront;
 - (id) applicationType;
 - (id) roleIdentifier;
 - (id) deviceFamily;
 - (id) minimumSystemVersion;
 - (id) sdkVersion;
 - (id) vendorName;
 - (id) itemName;
 - (id) sourceAppIdentifier;
 - (id) applicationDSID;
 - (id) groupContainers;
 - (id) directionsModes;
 - (id) UIBackgroundModes;
 - (id) externalAccessoryProtocols;
 - (id) VPNPlugins;
 - (id) appTags;
 - (id) requiredDeviceCapabilities;
 - (id) staticDiskUsage;
 - (id) dynamicDiskUsage;
 - (id) installProgressSync;
 - (id) privateDocumentTypeOwner;
 - (BOOL) iconIsPrerendered;
 - (BOOL) fileSharingEnabled;
 - (BOOL) isRestricted;
 - (BOOL) supportsAudiobooks;
 - (BOOL) supportsExternallyPlayableContent;
 - (BOOL) hasSettingsBundle;
 - (BOOL) isInstalled;
 - (BOOL) isPurchasedReDownload;
 - (BOOL) isWatchKitApp;
 - (id) userActivityStringForAdvertisementData:(id)a ;
 - (unsigned long long) installType;
 - (unsigned long long) originalInstallType;
 - (id) groupIdentifiers;
 - (id) teamID;
 - (id) appStoreReceiptURL;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) audioComponents;


@end
