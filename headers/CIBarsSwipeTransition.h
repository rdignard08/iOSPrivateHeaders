
@interface CIBarsSwipeTransition : CIFilter {

    CIImage* inputImage;
    CIImage* inputTargetImage;
    NSNumber* inputAngle;
    NSNumber* inputWidth;
    NSNumber* inputBarOffset;
    NSNumber* inputTime;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a ;
 - (void) setInputWidth:(id)a ;
 - (id) inputWidth;
 - (void) setInputTime:(id)a ;
 - (id) inputTargetImage;
 - (void) setInputTargetImage:(id)a ;
 - (void) setInputBarOffset:(id)a ;
 - (id) inputBarOffset;
 - (id) inputTime;


@end
