
@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent {

    Q _blurSize;
    Q _softenSize;
    s _angle;
    Q _altitude;
    I _direction;
    i _highlightBlendMode;
    @"CUIColor" _highlightColor;
    d _highlightOpacity;
    i _shadowBlendMode;
    @"CUIColor" _shadowColor;
    d _shadowOpacity;
}

 - (void) dealloc;
 - (id) init;
 - (void) setShadowColor:(id)a;
 - (void) setBlurSize:(Q)a;
 - (void) setAngle:(s)a;
 - (void) setSoftenSize:(Q)a;
 - (void) setAltitude:(Q)a;
 - (void) setHighlightBlendMode:(i)a;
 - (void) setHighlightColor:(id)a;
 - (void) setHighlightOpacity:(d)a;
 - (void) setShadowBlendMode:(i)a;
 - (void) setDirection:(I)a;
 - (I) direction;
 - (BOOL) updateLayerEffectPreset:(id)aerror:(^@)b;
 - (id) initWithEffectFromPreset:(id)aatIndex:(I)b;
 - (Q) blurSize;
 - (s) angle;
 - (id) highlightColor;
 - (i) highlightBlendMode;
 - (i) shadowBlendMode;
 - (Q) softenSize;
 - (d) highlightOpacity;
 - (I) effectType;
 - (d) shadowOpacity;
 - (id) shadowColor;
 - (Q) altitude;
 - (void) setShadowOpacity:(d)a;


@end
