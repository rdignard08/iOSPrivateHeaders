
@interface CUIMutablePSDImageRef : CUIPSDImageRef {

}

 - (void) setFileURL:(id)a;
 - (id) initWithPixelWidth:(Q)apixelHeight:(Q)b;
 - (void) addLayoutMetricsChannel:(id)a;
 - (void) addOrUpdateSlicesWithSliceRects:(id)a;
 - (void) addLayer:(id)a;
 - (^{__CFData=}) copyDefaultICCProfileData;
 - (I) psdLayerBlendModeForCGBlendMode:(i)a;
 - (^{PSDGradient=ddBBBdddi{PSDColorRGBA=dddd}{vector<PSDGradientColorStop, std::__1::allocator<PSDGradientColorStop> >=^{PSDGradientColorStop}^{PSDGradientColorStop}{__compressed_pair<PSDGradientColorStop *, std::__1::allocator<PSDGradientColorStop> >=^{PSDGradientColorStop}}}{vector<PSDGradientOpacityStop, std::__1::allocator<PSDGradientOpacityStop> >=^{PSDGradientOpacityStop}^{PSDGradientOpacityStop}{__compressed_pair<PSDGradientOpacityStop *, std::__1::allocator<PSDGradientOpacityStop> >=^{PSDGradientOpacityStop}}}}) newPSDGradientFromCUIPSDGradient:(id)a;
 - (I) newUInt32CArray:(^^I)awithNSArray:(id)bprependNumber:(id)cappendNumber:(id)d;
 - (I) newSliceRectsArray:(^^{PSDRect})awithSliceRects:(id)b;
 - (I) newSliceRectsArray:(^^{PSDRect})awithXCutPositions:(id)byCutPositions:(id)c;
 - (BOOL) saveWithCompletionHandler:(@?)a;
 - (void) insertLayoutMetricsChannel:(id)aatIndex:(I)b;
 - (void) deleteLayoutMetricsChannelAtIndex:(I)a;
 - (void) insertLayer:(id)aatIndex:(I)b;
 - (void) deleteLayerAtIndex:(I)a;
 - (void) addOrUpdateSlicesWithXCutPositions:(id)ayCutPositions:(id)b;
 - (void) updateSliceName:(id)aatIndex:(I)b;
 - (BOOL) saveToURL:(id)acompletionHandler:(@?)b;


@end
