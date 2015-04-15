
@interface CUIPSDLayerRef : CUIPSDLayerBaseRef {

}

 - (void) dealloc;
 - (id) gradient;
 - (id) initWithImageRef:(id)alayerIndex:(unsigned int)b;
 - (^{CGImage=}) createCGImage;
 - (id) imageIsZeroSizeImage:(^B)a;
 - (id) imageFromSlice:(unsigned int)a;
 - (id) imageFromSlice:(unsigned int)aisEmptyImage:(^B)b;
 - (id) patternFromSlice:(unsigned int)a;
 - (id) patternFromSlice:(unsigned int)aisZeroSizeImage:(^B)b;
 - (id) maskFromSlice:(unsigned int)a;
 - (id) fillSample;
 - (id) layerEffects;
 - (id) colorFill;
 - (id) image;


@end
