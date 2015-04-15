
@interface CUIMutablePSDImageRef : CUIPSDImageRef {

}

 - (void) setFileURL:(id)a;
 - (id) initWithPixelWidth:(unsigned long long)apixelHeight:(unsigned long long)b;
 - (void) addLayoutMetricsChannel:(id)a;
 - (void) addOrUpdateSlicesWithSliceRects:(id)a;
 - (void) addLayer:(id)a;
 - (^{__CFData=}) copyDefaultICCProfileData;
 - (unsigned int) psdLayerBlendModeForCGBlendMode:(int)a;
 - (^{PSDGradient=ddBBBdddi{PSDColorRGBA=dddd}{vector<PSDGradientColorStop, std::__1::allocator<PSDGradientColorStop> >=^{PSDGradientColorStop}^{PSDGradientColorStop}{__compressed_pair<PSDGradientColorStop *, std::__1::allocator<PSDGradientColorStop> >=^{PSDGradientColorStop}}}{vector<PSDGradientOpacityStop, std::__1::allocator<PSDGradientOpacityStop> >=^{PSDGradientOpacityStop}^{PSDGradientOpacityStop}{__compressed_pair<PSDGradientOpacityStop *, std::__1::allocator<PSDGradientOpacityStop> >=^{PSDGradientOpacityStop}}}}) newPSDGradientFromCUIPSDGradient:(id)a;
 - (unsigned int) newUInt32CArray:(^^I)awithNSArray:(id)bprependNumber:(id)cappendNumber:(id)d;
 - (unsigned int) newSliceRectsArray:(^^{PSDRect})awithSliceRects:(id)b;
 - (unsigned int) newSliceRectsArray:(^^{PSDRect})awithXCutPositions:(id)byCutPositions:(id)c;
 - (BOOL) saveWithCompletionHandler:(@?)a;
 - (void) insertLayoutMetricsChannel:(id)aatIndex:(unsigned int)b;
 - (void) deleteLayoutMetricsChannelAtIndex:(unsigned int)a;
 - (void) insertLayer:(id)aatIndex:(unsigned int)b;
 - (void) deleteLayerAtIndex:(unsigned int)a;
 - (void) addOrUpdateSlicesWithXCutPositions:(id)ayCutPositions:(id)b;
 - (void) updateSliceName:(id)aatIndex:(unsigned int)b;
 - (BOOL) saveToURL:(id)acompletionHandler:(@?)b;


@end
