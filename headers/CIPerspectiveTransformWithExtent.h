
@interface CIPerspectiveTransformWithExtent : CIFilter {

    CIImage* inputImage;
    CIVector* inputExtent;
    CIVector* inputTopLeft;
    CIVector* inputTopRight;
    CIVector* inputBottomRight;
    CIVector* inputBottomLeft;
}
 + (id) customAttributes;

 - (void) setInputExtent:(id)a;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputExtent;
 - (id) _kernel;
 - (id) inputTopLeft;
 - (void) setInputTopLeft:(id)a;
 - (id) inputTopRight;
 - (void) setInputTopRight:(id)a;
 - (id) inputBottomRight;
 - (void) setInputBottomRight:(id)a;
 - (id) inputBottomLeft;
 - (void) setInputBottomLeft:(id)a;


@end
