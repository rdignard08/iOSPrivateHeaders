
@interface CILinearBlur : CIFilter {

    CIImage* inputImage;
    NSNumber* inputRadius;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (void) setInputRadius:(id)a ;
 - (BOOL) _isIdentity;
 - (id) inputRadius;
 - (id) _blur:(id)a pass:(int)b weightsFactor:(float)c ;


@end
