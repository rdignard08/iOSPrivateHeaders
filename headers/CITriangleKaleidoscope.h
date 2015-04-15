
@interface CITriangleKaleidoscope : CIFilter {

    @"CIImage" inputImage;
    @"CIVector" inputPoint;
    @"NSNumber" inputSize;
    @"NSNumber" inputRotation;
    @"NSNumber" inputDecay;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputPoint:(id)a;
 - (id) inputPoint;
 - (void) setInputRotation:(id)a;
 - (void) setInputSize:(id)a;
 - (void) setInputDecay:(id)a;
 - (id) _geomKernel;
 - (id) _colorKernel;
 - (id) inputSize;
 - (id) inputRotation;
 - (id) inputDecay;


@end
