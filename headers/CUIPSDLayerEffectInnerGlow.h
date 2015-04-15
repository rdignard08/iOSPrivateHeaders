
@interface CUIPSDLayerEffectInnerGlow : CUIPSDLayerEffectComponent {

    int _blendMode;
    double _opacity;
    @"CUIColor" _color;
    unsigned long long _blurSize;
}

 - (void) dealloc;
 - (id) init;
 - (int) blendMode;
 - (void) setBlendMode:(int)a;
 - (void) setColor:(id)a;
 - (void) setBlurSize:(unsigned long long)a;
 - (BOOL) updateLayerEffectPreset:(id)aerror:(^@)b;
 - (id) initWithEffectFromPreset:(id)aatIndex:(unsigned int)b;
 - (unsigned long long) blurSize;
 - (unsigned int) effectType;
 - (id) color;
 - (double) opacity;
 - (void) setOpacity:(double)a;


@end
