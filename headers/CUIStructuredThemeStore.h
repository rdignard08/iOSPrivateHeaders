
@protocol CUIStructuredThemeStorage, CUIStructuredThemeStorage2;
@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {

    NSMutableDictionary* _cache;
    CUICommonAssetStorage* _store;
    NSLock* _cacheLock;
    NSLock* _storeLock;
    unsigned long long _themeIndex;
    NSString* _bundleID;
    NSCache* _assetExistanceCache;
    NSCache* _assetFPOStatus;
}

 - (id) initWithPath:(id)a;
 - (void) dealloc;
 - (id) initWithURL:(id)a;
 - (id) debugDescription;
 - (id) bundleID;
 - (unsigned long long) colorSpaceID;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})a;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)a;
 - (r^{_renditionkeyfmt=III[0I]}) keyFormat;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})a;
 - (id) copyKeySignatureForKey:(r^{_renditionkeytoken=SS})awithBytesNoCopy:(char*)blength:(unsigned long long)c;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})ausingKeySignature:(id)b;
 - (void) clearRenditionCache;
 - (long long) maximumRenditionKeyTokenCount;
 - (BOOL) usesCUISystemThemeRenditionKey;
 - (id) allImageNames;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)acursorHotSpot:(^{CGPoint=dd})b;
 - (id) imagesWithName:(id)a;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})aisFPO:(^B)b;
 - (id) zeroCodeGlyphList;
 - (id) debugDescriptionForKeyList:(r^{_renditionkeytoken=SS})a;
 - (BOOL) assetExistsForKey:(^{_renditionkeytoken=SS})a;
 - (BOOL) getFontName:(^@)abaselineOffset:(^d)bforFontType:(id)c;
 - (double) fontSizeForFontSizeType:(id)a;
 - (id) constantNameForElementID:(long long)a;
 - (id) displayNameForElementID:(long long)a;
 - (id) constantNameForPartID:(long long)a;
 - (id) displayNameForPartID:(long long)a;
 - (BOOL) _formatStorageKeyArrayBytes:(^v)alength:(unsigned long long)bfromKey:(^{_renditionkeytoken=SS})c;
 - (void) _updateKeyWithCompatibilityMapping:(^{_renditionkeytoken=SS})a;
 - (id) _newRenditionKeyDataFromKey:(^{_renditionkeytoken=SS})a;
 - (void) _getKeyForAssetClosestToKey:(^{_renditionkeytoken=SS})afoundAsset:(^B)b;
 - (r^{_renditionkeyfmt=III[0I]}) renditionKeyFormat;
 - (id) lookupAssetForKey:(^{_renditionkeytoken=SS})a;
 - (void) _getKeyForAssetInOtherLookGroupClosestToKey:(^{_renditionkeytoken=SS})afoundAsset:(^B)b;
 - (BOOL) _canGetRenditionWithKey:(r^{_renditionkeytoken=SS})aisFPO:(^B)blookForSubstitutions:(BOOL)c;
 - (BOOL) getPhysicalColor:(^{_colordef=II{_rgbquad=b8b8b8b8}})awithName:(id)b;
 - (BOOL) hasPhysicalColorWithName:(id)a;
 - (unsigned int) documentFormatVersion;
 - (unsigned int) distilledInCoreUIVersion;
 - (unsigned int) authoredWithSchemaVersion;
 - (id) baseGradationKeySignatureForKey:(r^{_renditionkeytoken=SS})a;
 - (id) copyLookupKeySignatureForKey:(r^{_renditionkeytoken=SS})a;
 - (id) keySignatureForKey:(r^{_renditionkeytoken=SS})a;
 - (id) themeStore;
 - (id) convertRenditionKeyToKeyData:(^{_renditionkeytoken=SS})a;
 - (id) prefilteredAssetDataForKey:(^{_renditionkeytoken=SS})a;
 - (void) setThemeIndex:(unsigned long long)a;


@end
