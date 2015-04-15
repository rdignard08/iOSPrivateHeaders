
@interface CILumaMap : CIFilter {

    CIImage* inputImage;
    CIImage* _tableImage;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (r*) lumaTable;


@end
