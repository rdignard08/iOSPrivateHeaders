
@interface CIPhotoEffect : CIFilter {

    CIImage* inputImage;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;


@end
