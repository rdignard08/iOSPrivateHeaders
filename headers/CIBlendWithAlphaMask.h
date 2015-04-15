
@interface CIBlendWithAlphaMask : CIFilter {

    CIImage* inputImage;
    CIImage* inputBackgroundImage;
    CIImage* inputMaskImage;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _kernel;
 - (id) inputBackgroundImage;
 - (void) setInputBackgroundImage:(id)a ;
 - (id) _kernelNoF;
 - (id) _kernelNoB;
 - (id) inputMaskImage;
 - (void) setInputMaskImage:(id)a ;


@end
