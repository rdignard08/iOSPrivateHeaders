
@interface CISmartToneFilter : CIFilter {

    CIImage* inputImage;
    NSNumber* inputExposure;
    NSNumber* inputContrast;
    NSNumber* inputBrightness;
    NSNumber* inputShadows;
    NSNumber* inputHighlights;
    NSNumber* inputBlack;
    NSNumber* inputUseCube;
    CIImage* _cubeImage;
    CIContext* _cubeContext;
}
 + (id) customAttributes;

 - (void) dealloc;
 - (void) setValue:(id)a forKey:(id)b ;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (BOOL) _isIdentity;
 - (void) setInputContrast:(id)a ;
 - (void) setInputBrightness:(id)a ;
 - (id) inputBrightness;
 - (id) inputContrast;
 - (id) inputUseCube;
 - (id) _kernelBneg;
 - (id) _kernelBpos;
 - (id) _kernelH;
 - (id) _kernelC;
 - (id) inputExposure;
 - (void) setInputExposure:(id)a ;
 - (id) inputShadows;
 - (void) setInputShadows:(id)a ;
 - (id) inputHighlights;
 - (void) setInputHighlights:(id)a ;
 - (id) inputBlack;
 - (void) setInputBlack:(id)a ;
 - (void) setInputUseCube:(id)a ;


@end
