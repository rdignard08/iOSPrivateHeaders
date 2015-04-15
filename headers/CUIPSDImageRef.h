
@interface CUIPSDImageRef : NSObject {

    @"NSString" _path;
    BOOL _parsedForLayers;
    i _file;
    ^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C} _psd;
    @"_CUIPSDSublayerInfo" _rootLayers;
}
 + (BOOL) isValidPSDResourceAtPath:(id)awithLayerCount:(^I)b;
 + (BOOL) isValidPSDResourceAtPath:(id)a;
 + (BOOL) isValidPSDResourceAtPath:(id)awithLayerCount:(^I)bvalidateLayers:(BOOL)c;
 + (BOOL) isValidPSDResourceAtPath:(id)awithImageInfo:(^{_PSDImageInfo=IISSSi})b;

 - (id) initWithPath:(id)a;
 - ({CGSize=dd}) size;
 - (void) dealloc;
 - (void) finalize;
 - (id) path;
 - (BOOL) openImageFile;
 - (BOOL) loadPSDFileWithLayers:(BOOL)a;
 - (^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C}) _psdFileWithLayers:(BOOL)a;
 - (^{CGImage=}) _copyCGImageAtAbsoluteIndex:(I)a;
 - (id) _imageAtAbsoluteIndex:(I)aisZeroSizeImage:(^B)b;
 - (id) _imageFromSlice:(I)aatAbsoluteIndex:(I)bisEmptyImage:(^B)c;
 - (id) _patternFromSlice:(I)aatAbsoluteIndex:(I)bisZeroSizeImage:(^B)c;
 - (id) _createMaskFromSlice:(I)aatAbsoluteIndex:(I)b;
 - (^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C}) psdFileForComposite;
 - (^{CGImage=}) createCompositeCGImage;
 - (id) imageFromRef:(^{CGImage=})a;
 - (^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C}) psdFile;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsAtAbsoluteIndex:(I)a;
 - (i) _layerIndexFromLayerNames:(id)aindexRangeBegin:(i)bindexRangeEnd:(i)cisTopLevel:(BOOL)d;
 - (id) maskFromCompositeAlphaChannel:(q)a;
 - ({?={CGSize=dd}{CGSize=dd}{CGSize=dd}}) metricsInMask:(id)aforRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) _visibilityAtAbsoluteIndex:(I)a;
 - (id) _layerRefAtAbsoluteIndex:(I)a;
 - (id) _layerInfo;
 - (id) _namesOfSublayers:(id)a;
 - ({_PSDImageInfo=IISSSi}) imageInfo;
 - (id) _fillSampleAtAbsoluteIndex:(I)a;
 - (id) _gradientAtAbsoluteIndex:(I)a;
 - (id) _copySublayerInfoAtAbsoluteIndex:(I)aatRoot:(BOOL)b;
 - (BOOL) _treatDividerAsLayer;
 - (i) cgBlendModeForPSDLayerOrLayerEffectBlendMode:(I)a;
 - (^{CGImage=}) createCGImageAtLayer:(I)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsAtLayer:(I)a;
 - (^{CGColorSpace=}) copyColorSpace;
 - (id) fillSampleAtLayer:(I)a;
 - (id) colorFromDocumentColor:(^d)a;
 - (id) _colorOverlayFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a;
 - (id) _gradientOverlayFromLayerEffectsAtAbsoluteIndex:(I)a;
 - (id) _dropShadowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a;
 - (id) _innerShadowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a;
 - (id) _innerGlowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a;
 - (id) _outerGlowFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a;
 - (id) _bevelEmbossFromLayerEffectsInfo:(^{CPSDObjectEffectsLayerInfo=^^?^{CPSDFile}IQ*II^{CPSDAdditionalLayerInfoItem}{CPSDString=I^S}*III{vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}^{CPSDActionKeyedItem}{__compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> >=^{CPSDActionKeyedItem}}}II})a;
 - (id) imageAtLayer:(I)a;
 - (id) imageAtLayer:(I)aisZeroSizeImage:(^B)b;
 - (id) imageFromSlice:(I)aatLayer:(I)b;
 - (id) imageFromSlice:(I)aatAbsoluteLayer:(I)b;
 - (id) imageFromSlice:(I)aatLayer:(I)bisEmptyImage:(^B)c;
 - (id) patternFromSlice:(I)aatLayer:(I)b;
 - (id) patternFromSlice:(I)aatLayer:(I)bisZeroSizeImage:(^B)c;
 - (id) maskFromSlice:(I)aatLayer:(I)b;
 - (id) compositeImage;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsForSlice:(I)a;
 - (i) absoluteLayerIndexFromLayerNames:(id)a;
 - ({?={CGSize=dd}{CGSize=dd}{CGSize=dd}}) metricsInAlphaChannel:(q)aforRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) visibilityAtLayer:(I)a;
 - (id) layerRefAtIndex:(I)a;
 - (I) numberOfLayers;
 - (I) numberOfSlices;
 - (I) numberOfChannels;
 - (id) layerNames;
 - (id) metadataString;
 - (id) gradientAtLayer:(I)a;
 - (I) _absoluteIndexOfRootLayer:(I)a;
 - (^{CPSDLayerRecord=^^?^{CPSDFile}IIIIS{vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo> >=^{CPSDChannelLengthInfo}^{CPSDChannelLengthInfo}{__compressed_pair<CPSDChannelLengthInfo *, std::__1::allocator<CPSDChannelLengthInfo> >=^{CPSDChannelLengthInfo}}}IICCCCI{CPSDLayerMaskData=^^?^{CPSDFile}IIIIICCSIIIICC}{CPSDLayerBlendingRanges=^^?^{CPSDFile}III{vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo> >=^{CPSDChannelBlendingInfo}^{CPSDChannelBlendingInfo}{__compressed_pair<CPSDChannelBlendingInfo *, std::__1::allocator<CPSDChannelBlendingInfo> >=^{CPSDChannelBlendingInfo}}}}[256c]{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}) _psdLayerRecordAtAbsoluteIndex:(I)a;
 - (void) _logInvalidAbsoluteIndex:(I)apsd:(^{CPSDFile=^^?^{CPSDFile}*IICIISQSS*^{CPSDChannelLengthInfo}^*S^vC{CPSDHeader=^^?^{CPSDFile}IS[6C]SIISS}{CPSDColorModeData=^^?^{CPSDFile}I*}{CPSDImageResources=^^?^{CPSDFile}I^{CPSDImageResourceBlock}}{CPSDLayerAndMaskInfo=^^?^{CPSDFile}I{CPSDLayerInfo=^^?^{CPSDFile}IS{vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}^{CPSDLayerRecord}{__compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> >=^{CPSDLayerRecord}}}{vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}^^{CPSDLayerChannelGroup}{__compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> >=^^{CPSDLayerChannelGroup}}}}{CPSDGlobalLayerMaskInfo=^^?^{CPSDFile}IS[4S]SCI}{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}C})b;
 - (id) _nameAtAbsoluteIndex:(I)a;
 - (d) _opacityAtAbsoluteIndex:(I)a;
 - (d) _fillOpacityAtAbsoluteIndex:(I)a;
 - (i) _blendModeAtAbsluteIndex:(I)a;
 - (id) _layerEffectsAtAbsoluteIndex:(I)a;


@end
