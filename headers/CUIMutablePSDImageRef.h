
@interface CUIMutablePSDImageRef : CUIPSDImageRef {

}

 - (void) setFileURL:(id)a ;
 - (id) initWithPixelWidth:(unsigned long long)a pixelHeight:(unsigned long long)b ;
 - (void) addLayoutMetricsChannel:(id)a ;
 - (void) addOrUpdateSlicesWithSliceRects:(id)a ;
 - (void) addLayer:(id)a ;
 - (^{__CFData=}) copyDefaultICCProfileData;
 - (unsigned int) psdLayerBlendModeForCGBlendMode:(int)a ;
 - (^{PSDGradient=ddBBBdddi{PSDColorRGBA=dddd}{vector<PSDGradientColorStop, std::__1::allocator<PSDGradientColorStop> >=^{PSDGradientColorStop}^{PSDGradientColorStop}{__compressed_pair<PSDGradientColorStop *, std::__1::allocator<PSDGradientColorStop> >=^{PSDGradientColorStop}}}{vector<PSDGradientOpacityStop, std::__1::allocator<PSDGradientOpacityStop> >=^{PSDGradientOpacityStop}^{PSDGradientOpacityStop}{__compressed_pair<PSDGradientOpacityStop *, std::__1::allocator<PSDGradientOpacityStop> >=^{PSDGradientOpacityStop}}}}) newPSDGradientFromCUIPSDGradient:(id)a ;
 - (unsigned int) newUInt32CArray:(^^I)a withNSArray:(id)b prependNumber:(id)c appendNumber:(id)d ;
 - (unsigned int) newSliceRectsArray:(^^{PSDRect})a withSliceRects:(id)b ;
 - (unsigned int) newSliceRectsArray:(^^{PSDRect})a withXCutPositions:(id)b yCutPositions:(id)c ;
 - (BOOL) saveWithCompletionHandler:(@?)a ;
 - (void) insertLayoutMetricsChannel:(id)a atIndex:(unsigned int)b ;
 - (void) deleteLayoutMetricsChannelAtIndex:(unsigned int)a ;
 - (void) insertLayer:(id)a atIndex:(unsigned int)b ;
 - (void) deleteLayerAtIndex:(unsigned int)a ;
 - (void) addOrUpdateSlicesWithXCutPositions:(id)a yCutPositions:(id)b ;
 - (void) updateSliceName:(id)a atIndex:(unsigned int)b ;
 - (BOOL) saveToURL:(id)a completionHandler:(@?)b ;


@end
