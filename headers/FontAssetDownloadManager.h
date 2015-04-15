
@interface FontAssetDownloadManager : NSObject {

    {TCFRef<const __CFArray *>="fRef"^{__CFArray}} fDescriptors;
    {TCFRef<const __CFSet *>="fRef"^{__CFSet}} fMandatoryAttributes;
    @? fProgressCallbackBlock;
    @"NSMutableDictionary" fProgressParams;
    @"NSMutableDictionary" fDownloadOptions;
    @"NSSet" fPreciousFontLanguages;
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
 - (BOOL) callProgressCallbak:(I)a;
 - (id) getUnmatchedDescriptors;
 - (id) mobileAssetsForUnmatched:(id)aandFontFilePaths:(id)b;
 - (Q) calculateDownloadSize:(id)a;
 - (void) setProgressParam:(id)aforKey:(id)b;
 - (BOOL) executeDownloadingFontAssets:(id)aforDescriptors:(id)bandFontFilePaths:(id)c;
 - (id) doFinalMatching;
 - (id) availableMobileAssets:(BOOL)aerror:(^@)b;
 - (id) extractMatchingAssetsForDescriptor:(^{__CTFontDescriptor=})afrom:(id)bwithFailInfo:(^B)candFontFilePaths:(id)d;
 - (void) setDownloadOptionsForMobileAsset;
 - (BOOL) assetStalled:(id)a;
 - (void) setGarbageCollectionBehaviorForAsset:(id)a;
 - (BOOL) activateFontsFromAssetURL:(id)a;
 - (id) preciousFontLanguages;
 - (id) initWithDescriptors:(^{__CFArray=})aandMandatoryAttributes:(^{__CFSet=})bwithBlock:(@?)c;
 - (void) downloadFontAssets;


@end
