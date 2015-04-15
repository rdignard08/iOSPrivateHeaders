
@interface CUIPSDLayerRef : CUIPSDLayerBaseRef {

}

 - (void) dealloc;
 - (id) gradient;
 - (id) initWithImageRef:(id)a layerIndex:(unsigned int)b ;
 - (^{CGImage=}) createCGImage;
 - (id) imageIsZeroSizeImage:(^B)a ;
 - (id) imageFromSlice:(unsigned int)a ;
 - (id) imageFromSlice:(unsigned int)a isEmptyImage:(^B)b ;
 - (id) patternFromSlice:(unsigned int)a ;
 - (id) patternFromSlice:(unsigned int)a isZeroSizeImage:(^B)b ;
 - (id) maskFromSlice:(unsigned int)a ;
 - (id) fillSample;
 - (id) layerEffects;
 - (id) colorFill;
 - (id) image;


@end
