
@interface CILanczosScaleTransform : CIFilter {

    CIImage inputImage;
    NSNumber inputScale;
    NSNumber inputAspectRatio;
}
 + (id) customAttributes;

 - (void) setInputScale:(id)a;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) inputScale;
 - (BOOL) _isIdentity;
 - (void) setInputAspectRatio:(id)a;
 - (id) inputAspectRatio;


@end
