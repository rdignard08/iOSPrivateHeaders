
@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent {

    i _blendMode;
    d _opacity;
    @"CUIColor" _color;
    Q _blurSize;
    Q _spread;
}

 - (void) dealloc;
 - (id) init;
 - (i) blendMode;
 - (void) setBlendMode:(i)a;
 - (void) setColor:(id)a;
 - (void) setBlurSize:(Q)a;
 - (void) setSpread:(Q)a;
 - (BOOL) updateLayerEffectPreset:(id)aerror:(^@)b;
 - (id) initWithEffectFromPreset:(id)aatIndex:(I)b;
 - (Q) blurSize;
 - (Q) spread;
 - (I) effectType;
 - (id) color;
 - (d) opacity;
 - (void) setOpacity:(d)a;


@end
