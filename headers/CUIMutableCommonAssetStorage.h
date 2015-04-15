
@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {

}

 - (void) setUuid:(id)a;
 - (id) initWithPath:(id)a;
 - (void) setColorSpaceID:(unsigned int)a;
 - (void) setAsset:(id)aforKey:(r^v)bwithLength:(unsigned long long)c;
 - (void) removeAssetForKey:(r^v)awithLength:(unsigned long long)b;
 - (void) _setZeroCodeInfo:({?=II})aforKey:(r^v)bwithLength:(unsigned long long)cinTree:(r^v)d;
 - (BOOL) writeToDiskAndCompact:(BOOL)a;
 - (void) setKeyFormatData:(id)a;
 - (void) setKeySemantics:(int)a;
 - (void) setStorageVersion:(unsigned int)a;
 - (void) setSchemaVersion:(unsigned int)a;
 - (void) setRenditionCount:(unsigned int)a;
 - (void) setAssociatedChecksum:(unsigned int)a;
 - (void) setAsset:(id)aforKey:(id)b;
 - (void) setColor:({_rgbquad=b8b8b8b8})aforName:(r*)bexcludeFromFilter:(BOOL)c;
 - (void) setFontName:(id)abaselineOffset:(float)bforFontSelector:(id)c;
 - (void) setFontSize:(float)aforFontSizeSelector:(id)b;
 - (void) removeAssetForKey:(id)a;
 - (void) setRenditionKey:(r^{_renditionkeytoken=SS})ahotSpot:({CGPoint=dd})bforName:(r*)c;
 - (void) setZeroCodeGlyphInformation:({?=II})aforKey:(r^v)bwithLength:(unsigned long long)c;
 - (void) setZeroCodeBezelInformation:({?=II})aforKey:(r^v)bwithLength:(unsigned long long)c;
 - (BOOL) writeToDisk;
 - (void) _setConstantName:(id)adisplayName:(id)bforID:(unsigned int)cinDebugTree:(^v)d;
 - (void) setConstantName:(id)adisplayName:(id)bforElementID:(long long)c;
 - (void) setConstantName:(id)adisplayName:(id)bforPartID:(long long)c;
 - (void) setVersionString:(r*)a;


@end
