
@interface CIColorCube : CIFilter {

    CIImage* inputImage;
    NSNumber* inputCubeDimension;
    NSData* inputCubeData;
    CIImage* _cubeImage;
}
 + (id) customAttributes;

 - (void) dealloc;
 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputCubeData:(id)a;
 - (void) setInputCubeDimension:(id)a;
 - (BOOL) _checkInputs;
 - (id) cubeImage;
 - (id) inputCubeDimension;
 - (id) inputCubeData;


@end
