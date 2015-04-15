
@interface FontAssetDownloadManager : NSObject {

    fRef* fDescriptors;
    fRef* fMandatoryAttributes;
    @? fProgressCallbackBlock;
    NSMutableDictionary* fProgressParams;
    NSMutableDictionary* fDownloadOptions;
    NSSet* fPreciousFontLanguages;
}
 + (Class) getASAssetQueryClass;
 + (BOOL) shouldIgnoreFontAsset:(id)a;
 + (BOOL) shouldTryServer;
 + (BOOL) shouldRetryWithServer;
 + (id) enabledKeyboardLanguages;
 + (id) displayNameForCurrentUser:(id)a;
 + (id) availableFontAttributesArray;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (BOOL) callProgressCallbak:(unsigned int)a ;
 - (id) getUnmatchedDescriptors;
 - (id) mobileAssetsForUnmatched:(id)a andFontFilePaths:(id)b ;
 - (unsigned long long) calculateDownloadSize:(id)a ;
 - (void) setProgressParam:(id)a forKey:(id)b ;
 - (BOOL) executeDownloadingFontAssets:(id)a forDescriptors:(id)b andFontFilePaths:(id)c ;
 - (id) doFinalMatching;
 - (id) availableMobileAssets:(BOOL)a error:(^@)b ;
 - (id) extractMatchingAssetsForDescriptor:(^{__CTFontDescriptor=})a from:(id)b withFailInfo:(^B)c andFontFilePaths:(id)d ;
 - (void) setDownloadOptionsForMobileAsset;
 - (BOOL) assetStalled:(id)a ;
 - (void) setGarbageCollectionBehaviorForAsset:(id)a ;
 - (BOOL) activateFontsFromAssetURL:(id)a ;
 - (id) preciousFontLanguages;
 - (id) initWithDescriptors:(^{__CFArray=})a andMandatoryAttributes:(^{__CFSet=})b withBlock:(@?)c ;
 - (void) downloadFontAssets;


@end
