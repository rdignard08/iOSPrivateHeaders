
@interface CUIPSDLayerRef : CUIPSDLayerBaseRef {

}

 - (void) dealloc;
 - (id) gradient;
 - (id) initWithImageRef:(id)alayerIndex:(I)b;
 - (^{CGImage=}) createCGImage;
 - (id) imageIsZeroSizeImage:(^B)a;
 - (id) imageFromSlice:(I)a;
 - (id) imageFromSlice:(I)aisEmptyImage:(^B)b;
 - (id) patternFromSlice:(I)a;
 - (id) patternFromSlice:(I)aisZeroSizeImage:(^B)b;
 - (id) maskFromSlice:(I)a;
 - (id) fillSample;
 - (id) layerEffects;
 - (id) colorFill;
 - (id) image;


@end
