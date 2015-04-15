
@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent {

    unsigned long long _blurSize;
    unsigned long long _softenSize;
    short _angle;
    unsigned long long _altitude;
    unsigned int _direction;
    int _highlightBlendMode;
    CUIColor* _highlightColor;
    double _highlightOpacity;
    int _shadowBlendMode;
    CUIColor* _shadowColor;
    double _shadowOpacity;
}

 - (void) dealloc;
 - (id) init;
 - (void) setShadowColor:(id)a ;
 - (void) setBlurSize:(unsigned long long)a ;
 - (void) setAngle:(short)a ;
 - (void) setSoftenSize:(unsigned long long)a ;
 - (void) setAltitude:(unsigned long long)a ;
 - (void) setHighlightBlendMode:(int)a ;
 - (void) setHighlightColor:(id)a ;
 - (void) setHighlightOpacity:(double)a ;
 - (void) setShadowBlendMode:(int)a ;
 - (void) setDirection:(unsigned int)a ;
 - (unsigned int) direction;
 - (BOOL) updateLayerEffectPreset:(id)a error:(^@)b ;
 - (id) initWithEffectFromPreset:(id)a atIndex:(unsigned int)b ;
 - (unsigned long long) blurSize;
 - (short) angle;
 - (id) highlightColor;
 - (int) highlightBlendMode;
 - (int) shadowBlendMode;
 - (unsigned long long) softenSize;
 - (double) highlightOpacity;
 - (unsigned int) effectType;
 - (double) shadowOpacity;
 - (id) shadowColor;
 - (unsigned long long) altitude;
 - (void) setShadowOpacity:(double)a ;


@end
