
@protocol CUIStructuredThemeStorage, CUIStructuredThemeStorage2;
@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {

    @"NSMutableDictionary" _cache;
    @"CUICommonAssetStorage" _store;
    @"NSLock" _cacheLock;
    @"NSLock" _storeLock;
    Q _themeIndex;
    @"NSString" _bundleID;
    @"NSCache" _assetExistanceCache;
    @"NSCache" _assetFPOStatus;
}

 - (id) initWithPath:(id)a;
 - (void) dealloc;
 - (id) initWithURL:(id)a;
 - (id) debugDescription;
 - (id) bundleID;
 - (Q) colorSpaceID;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})a;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)a;
 - (r^{_renditionkeyfmt=III[0I]}) keyFormat;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})a;
 - (id) copyKeySignatureForKey:(r^{_renditionkeytoken=SS})awithBytesNoCopy:(*)blength:(Q)c;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})ausingKeySignature:(id)b;
 - (void) clearRenditionCache;
 - (q) maximumRenditionKeyTokenCount;
 - (BOOL) usesCUISystemThemeRenditionKey;
 - (id) allImageNames;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)acursorHotSpot:(^{CGPoint=dd})b;
 - (id) imagesWithName:(id)a;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})aisFPO:(^B)b;
 - (id) zeroCodeGlyphList;
 - (id) debugDescriptionForKeyList:(r^{_renditionkeytoken=SS})a;
 - (BOOL) assetExistsForKey:(^{_renditionkeytoken=SS})a;
 - (BOOL) getFontName:(^@)abaselineOffset:(^d)bforFontType:(id)c;
 - (d) fontSizeForFontSizeType:(id)a;
 - (id) constantNameForElementID:(q)a;
 - (id) displayNameForElementID:(q)a;
 - (id) constantNameForPartID:(q)a;
 - (id) displayNameForPartID:(q)a;
 - (BOOL) _formatStorageKeyArrayBytes:(^v)alength:(Q)bfromKey:(^{_renditionkeytoken=SS})c;
 - (void) _updateKeyWithCompatibilityMapping:(^{_renditionkeytoken=SS})a;
 - (id) _newRenditionKeyDataFromKey:(^{_renditionkeytoken=SS})a;
 - (void) _getKeyForAssetClosestToKey:(^{_renditionkeytoken=SS})afoundAsset:(^B)b;
 - (r^{_renditionkeyfmt=III[0I]}) renditionKeyFormat;
 - (id) lookupAssetForKey:(^{_renditionkeytoken=SS})a;
 - (void) _getKeyForAssetInOtherLookGroupClosestToKey:(^{_renditionkeytoken=SS})afoundAsset:(^B)b;
 - (BOOL) _canGetRenditionWithKey:(r^{_renditionkeytoken=SS})aisFPO:(^B)blookForSubstitutions:(BOOL)c;
 - (BOOL) getPhysicalColor:(^{_colordef=II{_rgbquad=b8b8b8b8}})awithName:(id)b;
 - (BOOL) hasPhysicalColorWithName:(id)a;
 - (I) documentFormatVersion;
 - (I) distilledInCoreUIVersion;
 - (I) authoredWithSchemaVersion;
 - (id) baseGradationKeySignatureForKey:(r^{_renditionkeytoken=SS})a;
 - (id) copyLookupKeySignatureForKey:(r^{_renditionkeytoken=SS})a;
 - (id) keySignatureForKey:(r^{_renditionkeytoken=SS})a;
 - (id) themeStore;
 - (id) convertRenditionKeyToKeyData:(^{_renditionkeytoken=SS})a;
 - (id) prefilteredAssetDataForKey:(^{_renditionkeytoken=SS})a;
 - (void) setThemeIndex:(Q)a;


@end
