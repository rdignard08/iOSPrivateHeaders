
@interface CIAreaHistogram : CIFilter {

    CIImage* inputImage;
    CIVector* inputExtent;
    NSNumber* inputScale;
    NSNumber* inputCount;
    CIContext* _context;
}
 + (id) customAttributes;

 - (void) dealloc;
 - (id) outputData;
 - (void) setInputCount:(id)a;
 - (void) setInputScale:(id)a;
 - (void) setInputExtent:(id)a;
 - (id) _outputData:(BOOL)a;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputExtent;
 - (id) inputScale;
 - (id) inputCount;


@end
