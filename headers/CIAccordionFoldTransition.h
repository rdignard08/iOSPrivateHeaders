
@interface CIAccordionFoldTransition : CIFilter {

    CIImage inputImage;
    CIImage inputTargetImage;
    NSNumber inputBottomHeight;
    NSNumber inputNumberOfFolds;
    NSNumber inputFoldShadowAmount;
    NSNumber inputTime;
}
 + (id) customAttributes;

 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a;
 - (id) _kernel;
 - (void) setInputTime:(id)a;
 - (id) inputTargetImage;
 - (void) setInputTargetImage:(id)a;
 - (id) _kernelWarpS;
 - (id) _kernelWarpT;
 - (id) _kernelMix;
 - (id) inputBottomHeight;
 - (void) setInputBottomHeight:(id)a;
 - (id) inputNumberOfFolds;
 - (void) setInputNumberOfFolds:(id)a;
 - (id) inputFoldShadowAmount;
 - (void) setInputFoldShadowAmount:(id)a;
 - (id) inputTime;


@end
