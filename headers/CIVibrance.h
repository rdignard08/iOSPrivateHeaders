
@protocol _CIFilterProperties;
@interface CIVibrance : CIFilter <_CIFilterProperties> {

    CIImage* inputImage;
    NSNumber* inputAmount;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (BOOL) _isIdentity;
 - (id) _outputProperties;
 - (id) _initFromProperties:(id)a ;
 - (void) setInputAmount:(id)a ;
 - (id) _kernelNeg;
 - (id) _kernelPos;
 - (id) inputAmount;


@end
