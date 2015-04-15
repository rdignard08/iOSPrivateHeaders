
@interface CUIPSDImageRef : NSObject {

    NSString* _path;
    BOOL _parsedForLayers;
    int _file;
    ^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C} _psd;
    _CUIPSDSublayerInfo* _rootLayers;
}
 + (BOOL) isValidPSDResourceAtPath:(id)awithLayerCount:(^I)b;
 + (BOOL) isValidPSDResourceAtPath:(id)a;
 + (BOOL) isValidPSDResourceAtPath:(id)awithLayerCount:(^I)bvalidateLayers:(BOOL)c;
 + (BOOL) isValidPSDResourceAtPath:(id)awithImageInfo:(^{_PSDImageInfo=IISSSi})b;

 - (id) initWithPath:(id)a ;
 - ({CGSize=dd}) size;
 - (void) dealloc;
 - (void) finalize;
 - (id) path;
 - (BOOL) openImageFile;
 - (BOOL) loadPSDFileWithLayers:(BOOL)a ;
 - (^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C}) _psdFileWithLayers:(BOOL)a ;
 - (^{CGImage=}) _copyCGImageAtAbsoluteIndex:(unsigned int)a ;
 - (id) _imageAtAbsoluteIndex:(unsigned int)a isZeroSizeImage:(^B)b ;
 - (id) _imageFromSlice:(unsigned int)a atAbsoluteIndex:(unsigned int)b isEmptyImage:(^B)c ;
 - (id) _patternFromSlice:(unsigned int)a atAbsoluteIndex:(unsigned int)b isZeroSizeImage:(^B)c ;
 - (id) _createMaskFromSlice:(unsigned int)a atAbsoluteIndex:(unsigned int)b ;
 - (^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C}) psdFileForComposite;
 - (^{CGImage=}) createCompositeCGImage;
 - (id) imageFromRef:(^{CGImage=})a ;
 - (^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C}) psdFile;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsAtAbsoluteIndex:(unsigned int)a ;
 - (int) _layerIndexFromLayerNames:(id)a indexRangeBegin:(int)b indexRangeEnd:(int)c isTopLevel:(BOOL)d ;
 - (id) maskFromCompositeAlphaChannel:(long long)a ;
 - ({?={CGSize=dd}{CGSize=dd}{CGSize=dd}}) metricsInMask:(id)a forRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (BOOL) _visibilityAtAbsoluteIndex:(unsigned int)a ;
 - (id) _layerRefAtAbsoluteIndex:(unsigned int)a ;
 - (id) _layerInfo;
 - (id) _namesOfSublayers:(id)a ;
 - ({_PSDImageInfo=IISSSi}) imageInfo;
 - (id) _fillSampleAtAbsoluteIndex:(unsigned int)a ;
 - (id) _gradientAtAbsoluteIndex:(unsigned int)a ;
 - (id) _copySublayerInfoAtAbsoluteIndex:(unsigned int)a atRoot:(BOOL)b ;
 - (BOOL) _treatDividerAsLayer;
 - (int) cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned int)a ;
 - (^{CGImage=}) createCGImageAtLayer:(unsigned int)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsAtLayer:(unsigned int)a ;
 - (^{CGColorSpace=}) copyColorSpace;
 - (id) fillSampleAtLayer:(unsigned int)a ;
 - (id) colorFromDocumentColor:(^d)a ;
 - (id) _colorOverlayFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a ;
 - (id) _gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned int)a ;
 - (id) _dropShadowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a ;
 - (id) _innerShadowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a ;
 - (id) _innerGlowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a ;
 - (id) _outerGlowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a ;
 - (id) _bevelEmbossFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a ;
 - (id) imageAtLayer:(unsigned int)a ;
 - (id) imageAtLayer:(unsigned int)a isZeroSizeImage:(^B)b ;
 - (id) imageFromSlice:(unsigned int)a atLayer:(unsigned int)b ;
 - (id) imageFromSlice:(unsigned int)a atAbsoluteLayer:(unsigned int)b ;
 - (id) imageFromSlice:(unsigned int)a atLayer:(unsigned int)b isEmptyImage:(^B)c ;
 - (id) patternFromSlice:(unsigned int)a atLayer:(unsigned int)b ;
 - (id) patternFromSlice:(unsigned int)a atLayer:(unsigned int)b isZeroSizeImage:(^B)c ;
 - (id) maskFromSlice:(unsigned int)a atLayer:(unsigned int)b ;
 - (id) compositeImage;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsForSlice:(unsigned int)a ;
 - (int) absoluteLayerIndexFromLayerNames:(id)a ;
 - ({?={CGSize=dd}{CGSize=dd}{CGSize=dd}}) metricsInAlphaChannel:(long long)a forRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (BOOL) visibilityAtLayer:(unsigned int)a ;
 - (id) layerRefAtIndex:(unsigned int)a ;
 - (unsigned int) numberOfLayers;
 - (unsigned int) numberOfSlices;
 - (unsigned int) numberOfChannels;
 - (id) layerNames;
 - (id) metadataString;
 - (id) gradientAtLayer:(unsigned int)a ;
 - (unsigned int) _absoluteIndexOfRootLayer:(unsigned int)a ;
 - (^{CPSDLayerRecord=^^?^{CPSDFile}IIIIS{vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo> >=^{CPSDChannelLengthInfo}^{CPSDChannelLengthInfo}{__compressed_pair<CPSDChannelLengthInfo *, std::__1::allocator<CPSDChannelLengthInfo> >=^{CPSDChannelLengthInfo}}}IICCCCI{CPSDLayerMaskData=^^?^{CPSDFile}IIIIICCSIIIICC}{CPSDLayerBlendingRanges=^^?^{CPSDFile}III{vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo> >=^{CPSDChannelBlendingInfo}^{CPSDChannelBlendingInfo}{__compressed_pair<CPSDChannelBlendingInfo *, std::__1::allocator<CPSDChannelBlendingInfo> >=^{CPSDChannelBlendingInfo}}}}[256c]{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}) _psdLayerRecordAtAbsoluteIndex:(unsigned int)a ;
 - (void) _logInvalidAbsoluteIndex:(unsigned int)a psd:(^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C})b ;
 - (id) _nameAtAbsoluteIndex:(unsigned int)a ;
 - (double) _opacityAtAbsoluteIndex:(unsigned int)a ;
 - (double) _fillOpacityAtAbsoluteIndex:(unsigned int)a ;
 - (int) _blendModeAtAbsluteIndex:(unsigned int)a ;
 - (id) _layerEffectsAtAbsoluteIndex:(unsigned int)a ;


@end
