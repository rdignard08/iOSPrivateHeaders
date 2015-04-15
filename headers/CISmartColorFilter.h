
@interface CISmartColorFilter : CIFilter {

    CIImage inputImage;
    NSNumber inputVibrancy;
    NSNumber inputContrast;
    NSNumber inputCast;
    NSNumber inputUseCube;
    CIImage _cubeImage;
    CIContext _cubeContext;
}
 + (id) customAttributes;

 - (void) dealloc;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (void) setInputContrast:(id)a;
 - (id) inputContrast;
 - (id) inputUseCube;
 - (void) setInputUseCube:(id)a;
 - (id) _kernelV_lt1;
 - (id) _kernelV_gt1;
 - (id) _kernelCPos;
 - (id) _kernelCNeg;
 - (id) _kernelCast;
 - (id) inputVibrancy;
 - (void) setInputVibrancy:(id)a;
 - (id) inputCast;
 - (void) setInputCast:(id)a;


@end
