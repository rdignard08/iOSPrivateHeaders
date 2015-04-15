
@interface ASAsset : NSObject {

    NSString _assetType;
    NSDictionary _attributes;
    NSDictionary _downloadOptions;
    NSString _clientName;
    NSString _identifier;
    @? _progressHandler;
    ^{__MobileAsset={__CFRuntimeBase=Q[4C]I}^{__CFString}^{__CFDictionary}^{__MobileAssetQuery}^{__MobileAssetQuery}C} _cfAsset;
}
@property (nonatomic, retain, readwrite) NSString* clientName;
@property (nonatomic, assign, readonly) NSDictionary* fullAttributes;
@property (nonatomic, assign, readonly) NSString* assetType;
@property (nonatomic, assign, readonly) NSDictionary* attributes;
@property (nonatomic, assign, readonly) NSNumber* state;
@property (nonatomic, assign, readonly) NSURL* localURL;
@property (nonatomic, assign, readwrite) NSNumber* garbageCollectionBehavior;
@property (nonatomic, copy, readwrite) NSNumber* progressHandler;
@property (nonatomic, retain, readwrite) NSDictionary* downloadOptions;

 - (long long) _formatVersion;
 - (long long) _contentVersion;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (long long) state;
 - (id) identifier;
 - (id) attributes;
 - (id) _getLocalAttribute:(id)a;
 - (long long) assetStateForStateString:(id)a;
 - (^{__MobileAsset={__CFRuntimeBase=Q[4C]I}^{__CFString}^{__CFDictionary}^{__MobileAssetQuery}^{__MobileAssetQuery}C}) mobileAsset;
 - (BOOL) requiredDiskSpaceIsAvailableForDownloadOptions:(id)arequiredBytes:(^q)berror:(^@)c;
 - (void) setDownloadOptions:(id)a;
 - (@?) progressHandler;
 - (void) _downloadWithOptions:(id)ashouldFireCallback:(BOOL)b;
 - (BOOL) pauseDownloadAndReturnError:(^@)a;
 - (BOOL) resumeDownloadAndReturnError:(^@)a;
 - (BOOL) cancelDownloadAndReturnError:(^@)a;
 - (BOOL) purgeAndReturnError:(^@)a;
 - (long long) garbageCollectionBehavior;
 - (BOOL) requiredDiskSpaceIsAvailable:(^q)aerror:(^@)b;
 - (void) adjustDownloadOptions:(id)acompletion:(@?)b;
 - (void) cancelDownload:(@?)a;
 - (void) purge:(@?)a;
 - (id) assetType;
 - (id) downloadOptions;
 - (id) initWithAssetType:(id)aattributes:(id)b;
 - (id) clientName;
 - (void) setClientName:(id)a;
 - (id) fullAttributes;
 - (BOOL) isPresentOnDisk;
 - (void) resumeDownload:(@?)a;
 - (void) pauseDownload:(@?)a;
 - (void) setProgressHandler:(@?)a;
 - (void) beginDownloadWithOptions:(id)a;
 - (id) localURL;
 - (void) setGarbageCollectionBehavior:(long long)a;


@end
