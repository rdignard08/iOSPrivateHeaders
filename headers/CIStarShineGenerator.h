
@interface CIStarShineGenerator : CIFilter {

    CIVector* inputCenter;
    CIColor* inputColor;
    NSNumber* inputRadius;
    NSNumber* inputCrossScale;
    NSNumber* inputCrossAngle;
    NSNumber* inputCrossOpacity;
    NSNumber* inputCrossWidth;
    NSNumber* inputEpsilon;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (void) setInputRadius:(id)a;
 - (id) inputRadius;
 - (id) _kernel;
 - (id) inputCenter;
 - (void) setInputCenter:(id)a;
 - (void) setInputColor:(id)a;
 - (id) inputColor;
 - (void) setInputCrossScale:(id)a;
 - (void) setInputCrossAngle:(id)a;
 - (void) setInputCrossOpacity:(id)a;
 - (void) setInputCrossWidth:(id)a;
 - (void) setInputEpsilon:(id)a;
 - (id) inputEpsilon;
 - (id) inputCrossAngle;
 - (id) inputCrossScale;
 - (id) inputCrossWidth;
 - (id) inputCrossOpacity;


@end
