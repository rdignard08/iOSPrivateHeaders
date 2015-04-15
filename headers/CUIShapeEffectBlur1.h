
@interface CUIShapeEffectBlur1 : CIFilter {

    CIImage* inputImage;
    CIImage* inputFill;
    CIVector* inputOffset;
    NSNumber* inputRadius;
    CIColor* inputGlowColorInner;
    CIColor* inputGlowColorOuter;
    CIColor* inputShadowColorInner;
    CIColor* inputShadowColorOuter;
    NSNumber* inputShadowBlurInner;
    NSNumber* inputShadowBlurOuter;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (void) setInputRadius:(id)a ;
 - (id) inputRadius;
 - (id) _kernel;
 - (void) setInputOffset:(id)a ;
 - (id) inputOffset;
 - (void) setInputShadowColorOuter:(id)a ;
 - (void) setInputShadowColorInner:(id)a ;
 - (void) setInputGlowColorOuter:(id)a ;
 - (void) setInputGlowColorInner:(id)a ;
 - (void) setInputShadowBlurOuter:(id)a ;
 - (void) setInputShadowBlurInner:(id)a ;
 - (id) inputFill;
 - (void) setInputFill:(id)a ;
 - (id) inputGlowColorInner;
 - (id) inputGlowColorOuter;
 - (id) inputShadowColorInner;
 - (id) inputShadowColorOuter;
 - (id) inputShadowBlurInner;
 - (id) inputShadowBlurOuter;


@end
