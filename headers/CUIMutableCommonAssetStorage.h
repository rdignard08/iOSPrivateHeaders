
@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {

}

 - (void) setUuid:(id)a;
 - (id) initWithPath:(id)a;
 - (void) setColorSpaceID:(I)a;
 - (void) setAsset:(id)aforKey:(r^v)bwithLength:(Q)c;
 - (void) removeAssetForKey:(r^v)awithLength:(Q)b;
 - (void) _setZeroCodeInfo:({?=II})aforKey:(r^v)bwithLength:(Q)cinTree:(r^v)d;
 - (BOOL) writeToDiskAndCompact:(BOOL)a;
 - (void) setKeyFormatData:(id)a;
 - (void) setKeySemantics:(i)a;
 - (void) setStorageVersion:(I)a;
 - (void) setSchemaVersion:(I)a;
 - (void) setRenditionCount:(I)a;
 - (void) setAssociatedChecksum:(I)a;
 - (void) setAsset:(id)aforKey:(id)b;
 - (void) setColor:({_rgbquad=b8b8b8b8})aforName:(r*)bexcludeFromFilter:(BOOL)c;
 - (void) setFontName:(id)abaselineOffset:(f)bforFontSelector:(id)c;
 - (void) setFontSize:(f)aforFontSizeSelector:(id)b;
 - (void) removeAssetForKey:(id)a;
 - (void) setRenditionKey:(r^{_renditionkeytoken=SS})ahotSpot:({CGPoint=dd})bforName:(r*)c;
 - (void) setZeroCodeGlyphInformation:({?=II})aforKey:(r^v)bwithLength:(Q)c;
 - (void) setZeroCodeBezelInformation:({?=II})aforKey:(r^v)bwithLength:(Q)c;
 - (BOOL) writeToDisk;
 - (void) _setConstantName:(id)adisplayName:(id)bforID:(I)cinDebugTree:(^v)d;
 - (void) setConstantName:(id)adisplayName:(id)bforElementID:(q)c;
 - (void) setConstantName:(id)adisplayName:(id)bforPartID:(q)c;
 - (void) setVersionString:(r*)a;


@end
