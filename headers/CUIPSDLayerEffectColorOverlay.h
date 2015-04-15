
@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent {

    i _blendMode;
    d _opacity;
    @"CUIColor" _color;
}

 - (void) dealloc;
 - (id) init;
 - (i) blendMode;
 - (void) setBlendMode:(i)a;
 - (void) setColor:(id)a;
 - (BOOL) updateLayerEffectPreset:(id)aerror:(^@)b;
 - (id) initWithEffectFromPreset:(id)aatIndex:(I)b;
 - (I) effectType;
 - (id) color;
 - (d) opacity;
 - (void) setOpacity:(d)a;


@end
