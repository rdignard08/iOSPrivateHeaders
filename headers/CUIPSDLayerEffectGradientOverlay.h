
@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent {

    CUIPSDGradient* _gradient;
}

 - (void) dealloc;
 - (id) init;
 - (id) gradient;
 - (void) setGradient:(id)a ;
 - (BOOL) updateLayerEffectPreset:(id)a error:(^@)b ;
 - (id) initWithEffectFromPreset:(id)a atIndex:(unsigned int)b ;
 - (unsigned int) effectType;


@end
