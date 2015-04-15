
@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent {

    @"CUIPSDGradient" _gradient;
}

 - (void) dealloc;
 - (id) init;
 - (id) gradient;
 - (void) setGradient:(id)a;
 - (BOOL) updateLayerEffectPreset:(id)aerror:(^@)b;
 - (id) initWithEffectFromPreset:(id)aatIndex:(I)b;
 - (I) effectType;


@end