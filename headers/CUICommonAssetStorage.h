
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

 - (id) initWithPath:(id)a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) enumerateKeysAndObjectsUsingBlock:(@?)a ;
 - (id) uuid;
 - (id) path;
 - (unsigned int) colorSpaceID;
 - (r^{_renditionkeyfmt=III[0I]}) keyFormat;
 - (long long) maximumRenditionKeyTokenCount;
 - (BOOL) usesCUISystemThemeRenditionKey;
 - (id) zeroCodeGlyphList;
 - (id) initWithPath:(id)a forWriting:(BOOL)b ;
 - (void) _initDefaultHeaderVersion:(double)a versionString:(r*)b ;
 - (void) _swapHeader;
 - (void) _bringHeaderInfoUpToDate;
 - (void) _swapKeyFormat;
 - (long long) _storagefileTimestamp;
 - (BOOL) assetExistsForKeyData:(r^v)a length:(unsigned long long)b ;
 - (id) assetKeysMatchingBlock:(@?)a ;
 - (BOOL) swapped;
 - (void) _swapRenditionKeyArray:(^S)a ;
 - (id) assetForKey:(id)a ;
 - ({_renditionkeytoken=SS}) _swapRenditionKeyToken:({_renditionkeytoken=SS})a ;
 - (void) _swapZeroCodeInformation:(^{?=II})a ;
 - (id) _zeroCodeListFromTree:(r^v)a ;
 - (r^{FontValue=[128c]f}) _fontValueForFontType:(id)a ;
 - (unsigned int) storageVersion;
 - (unsigned int) coreuiVersion;
 - (unsigned int) schemaVersion;
 - (long long) storageTimestamp;
 - (int) keySemantics;
 - (id) keyFormatData;
 - (unsigned int) renditionCount;
 - (unsigned int) associatedChecksum;
 - (BOOL) assetExistsForKey:(id)a ;
 - (id) allAssetKeys;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(r*)a hotSpot:(^{CGPoint=dd})b ;
 - (id) allRenditionNames;
 - (id) renditionNameForKeyList:(^{_renditionkeytoken=SS})a ;
 - (id) zeroCodeBezelList;
 - (BOOL) getColor:(^{_colordef=II{_rgbquad=b8b8b8b8}})a forName:(r*)b ;
 - (BOOL) hasColorForName:(r*)a ;
 - (BOOL) getFontName:(^@)a baselineOffset:(^f)b forFontType:(id)c ;
 - (BOOL) getBaselineOffset:(^f)a forFontType:(id)b ;
 - (float) fontSizeForFontSizeType:(id)a ;
 - (id) _dataForIdentifier:(unsigned int)a fromDebugTree:(^v)b ;
 - (id) _constantNameForIdentifier:(unsigned int)a fromDebugTree:(^v)b ;
 - (id) _displayNameForIdentifier:(unsigned int)a fromDebugTree:(^v)b ;
 - (id) constantNameForElementID:(long long)a ;
 - (id) displayNameForElementID:(long long)a ;
 - (id) constantNameForPartID:(long long)a ;
 - (id) displayNameForPartID:(long long)a ;
 - (r*) versionString;


@end
