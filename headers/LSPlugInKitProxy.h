
@protocol NSSecureCoding;
@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {

    @"NSDictionary" _infoPlist;
    @"LSBundleProxy" _parentBundle;
    I _parentBundleID;
    BOOL _isOnSystemPartition;
    @"NSString" _pluginIdentifier;
    @"NSString" _protocol;
    @"NSUUID" _pluginUUID;
    @"NSDictionary" _pluginKitDictionary;
    @"NSDate" _registrationDate;
}
 + (id) plugInKitProxyForPlugin:(I)a;
 + (id) pluginKitProxyForUUID:(id)a;
 + (id) plugInKitProxyForUUID:(id)abundleIdentifier:(id)bpluginIdentifier:(id)cversion:(id)dbundleURL:(id)e;
 + (id) pluginKitProxyForIdentifier:(id)a;
 + (id) pluginKitProxyForURL:(id)a;
 + (BOOL) supportsSecureCoding;

 - (id) localizedName;
 - (id) iconDataForVariant:(i)a;
 - (id) localizedShortName;
 - (id) _initWithPlugin:(I)a;
 - (id) _initWithUUID:(id)abundleIdentifier:(id)bpluginIdentifier:(id)cversion:(id)dbundleURL:(id)e;
 - (id) pluginIdentifier;
 - (id) pluginUUID;
 - (id) containingBundle;
 - (id) infoPlist;
 - (id) registrationDate;
 - (BOOL) isOnSystemPartition;
 - (id) appStoreReceiptURL;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) pluginKitDictionary;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) protocol;


@end
