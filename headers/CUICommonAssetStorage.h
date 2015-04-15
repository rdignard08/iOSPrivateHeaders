
@interface CUICommonAssetStorage : NSObject {

    ^{_carheader=IIIII[128c][256c][16C]IIII} _header;
    ^{_renditionkeyfmt=III[0I]} _keyfmt;
    ^v _imagedb;
    ^v _colordb;
    ^v _fontdb;
    ^v _fontsizedb;
    ^v _zcglyphdb;
    ^v _zcbezeldb;
    ^v _facetKeysdb;
    ^v _elementDebugInfoDB;
    ^v _partDebugInfoDB;
    BOOL _swap;
}
 + (void) initialize;

 - (id) initWithPath:(id)a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) enumerateKeysAndObjectsUsingBlock:(@?)a;
 - (id) uuid;
 - (id) path;
 - (I) colorSpaceID;
 - (r^{_renditionkeyfmt=III[0I]}) keyFormat;
 - (q) maximumRenditionKeyTokenCount;
 - (BOOL) usesCUISystemThemeRenditionKey;
 - (id) zeroCodeGlyphList;
 - (id) initWithPath:(id)aforWriting:(BOOL)b;
 - (void) _initDefaultHeaderVersion:(d)aversionString:(r*)b;
 - (void) _swapHeader;
 - (void) _bringHeaderInfoUpToDate;
 - (void) _swapKeyFormat;
 - (q) _storagefileTimestamp;
 - (BOOL) assetExistsForKeyData:(r^v)alength:(Q)b;
 - (id) assetKeysMatchingBlock:(@?)a;
 - (BOOL) swapped;
 - (void) _swapRenditionKeyArray:(^S)a;
 - (id) assetForKey:(id)a;
 - ({_renditionkeytoken=SS}) _swapRenditionKeyToken:({_renditionkeytoken=SS})a;
 - (void) _swapZeroCodeInformation:(^{?=II})a;
 - (id) _zeroCodeListFromTree:(r^v)a;
 - (r^{FontValue=[128c]f}) _fontValueForFontType:(id)a;
 - (I) storageVersion;
 - (I) coreuiVersion;
 - (I) schemaVersion;
 - (q) storageTimestamp;
 - (i) keySemantics;
 - (id) keyFormatData;
 - (I) renditionCount;
 - (I) associatedChecksum;
 - (BOOL) assetExistsForKey:(id)a;
 - (id) allAssetKeys;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(r*)ahotSpot:(^{CGPoint=dd})b;
 - (id) allRenditionNames;
 - (id) renditionNameForKeyList:(^{_renditionkeytoken=SS})a;
 - (id) zeroCodeBezelList;
 - (BOOL) getColor:(^{_colordef=II{_rgbquad=b8b8b8b8}})aforName:(r*)b;
 - (BOOL) hasColorForName:(r*)a;
 - (BOOL) getFontName:(^@)abaselineOffset:(^f)bforFontType:(id)c;
 - (BOOL) getBaselineOffset:(^f)aforFontType:(id)b;
 - (f) fontSizeForFontSizeType:(id)a;
 - (id) _dataForIdentifier:(I)afromDebugTree:(^v)b;
 - (id) _constantNameForIdentifier:(I)afromDebugTree:(^v)b;
 - (id) _displayNameForIdentifier:(I)afromDebugTree:(^v)b;
 - (id) constantNameForElementID:(q)a;
 - (id) displayNameForElementID:(q)a;
 - (id) constantNameForPartID:(q)a;
 - (id) displayNameForPartID:(q)a;
 - (r*) versionString;


@end
