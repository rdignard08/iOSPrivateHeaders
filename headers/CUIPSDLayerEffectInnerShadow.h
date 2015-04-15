
@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent {

    i _blendMode;
    d _opacity;
    @"CUIColor" _color;
    s _angle;
    Q _distance;
    Q _blurSize;
}

 - (void) dealloc;
 - (id) init;
 - (i) blendMode;
 - (void) setBlendMode:(i)a;
 - (void) setColor:(id)a;
 - (void) setBlurSize:(Q)a;
 - (void) setDistance:(Q)a;
 - (void) setAngle:(s)a;
 - (BOOL) updateLayerEffectPreset:(id)aerror:(^@)b;
 - (id) initWithEffectFromPreset:(id)aatIndex:(I)b;
 - (Q) blurSize;
 - (Q) distance;
 - (s) angle;
 - (I) effectType;
 - (id) color;
 - (d) opacity;
 - (void) setOpacity:(d)a;


@end
