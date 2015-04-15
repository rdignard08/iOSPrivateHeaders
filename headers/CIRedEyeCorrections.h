
@protocol _CIFilterProperties;
@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {

    CIImage* inputImage;
    NSString* inputCameraModel;
    NSArray* inputCorrectionInfo;
}

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (BOOL) _isIdentity;
 - (id) _outputProperties;
 - (id) _initFromProperties:(id)a;
 - (void) setInputCorrectionInfo:(id)a;
 - (void) setInputCameraModel:(id)a;
 - (id) inputCameraModel;
 - (id) inputCorrectionInfo;


@end
