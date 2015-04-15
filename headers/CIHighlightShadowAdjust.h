
@protocol _CIFilterProperties;
@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {

    @"CIImage" inputImage;
    @"NSNumber" inputRadius;
    @"NSNumber" inputShadowAmount;
    @"NSNumber" inputHighlightAmount;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (void) setInputRadius:(id)a;
 - (BOOL) _isIdentity;
 - (id) inputRadius;
 - (id) _outputProperties;
 - (id) _initFromProperties:(id)a;
 - (void) setInputShadowAmount:(id)a;
 - (void) setInputHighlightAmount:(id)a;
 - (i) bestVersion;
 - (id) _kernelSnoB_v0;
 - (id) _kernelSHnoB_v0;
 - (id) _kernelSH_v0;
 - (id) _kernelSHnoB_v1;
 - (id) _kernelSH_v1;
 - (id) _kernelSHnoB_v2;
 - (id) _kernelSH_v2;
 - (id) inputShadowAmount;
 - (id) inputHighlightAmount;


@end
