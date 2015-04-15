
@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {

}

 - (void) setUuid:(id)a ;
 - (id) initWithPath:(id)a ;
 - (void) setColorSpaceID:(unsigned int)a ;
 - (void) setAsset:(id)a forKey:(r^v)b withLength:(unsigned long long)c ;
 - (void) removeAssetForKey:(r^v)a withLength:(unsigned long long)b ;
 - (void) _setZeroCodeInfo:({?=II})a forKey:(r^v)b withLength:(unsigned long long)c inTree:(r^v)d ;
 - (BOOL) writeToDiskAndCompact:(BOOL)a ;
 - (void) setKeyFormatData:(id)a ;
 - (void) setKeySemantics:(int)a ;
 - (void) setStorageVersion:(unsigned int)a ;
 - (void) setSchemaVersion:(unsigned int)a ;
 - (void) setRenditionCount:(unsigned int)a ;
 - (void) setAssociatedChecksum:(unsigned int)a ;
 - (void) setAsset:(id)a forKey:(id)b ;
 - (void) setColor:({_rgbquad=b8b8b8b8})a forName:(r*)b excludeFromFilter:(BOOL)c ;
 - (void) setFontName:(id)a baselineOffset:(float)b forFontSelector:(id)c ;
 - (void) setFontSize:(float)a forFontSizeSelector:(id)b ;
 - (void) removeAssetForKey:(id)a ;
 - (void) setRenditionKey:(r^{_renditionkeytoken=SS})a hotSpot:({CGPoint=dd})b forName:(r*)c ;
 - (void) setZeroCodeGlyphInformation:({?=II})a forKey:(r^v)b withLength:(unsigned long long)c ;
 - (void) setZeroCodeBezelInformation:({?=II})a forKey:(r^v)b withLength:(unsigned long long)c ;
 - (BOOL) writeToDisk;
 - (void) _setConstantName:(id)a displayName:(id)b forID:(unsigned int)c inDebugTree:(^v)d ;
 - (void) setConstantName:(id)a displayName:(id)b forElementID:(long long)c ;
 - (void) setConstantName:(id)a displayName:(id)b forPartID:(long long)c ;
 - (void) setVersionString:(r*)a ;


@end
