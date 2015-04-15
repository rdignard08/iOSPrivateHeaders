
@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent {

    int _blendMode;
    double _opacity;
    CUIColor* _color;
    short _angle;
    unsigned long long _distance;
    unsigned long long _blurSize;
    unsigned long long _spread;
}

 - (void) dealloc;
 - (id) init;
 - (int) blendMode;
 - (void) setBlendMode:(int)a ;
 - (void) setColor:(id)a ;
 - (void) setBlurSize:(unsigned long long)a ;
 - (void) setSpread:(unsigned long long)a ;
 - (void) setDistance:(unsigned long long)a ;
 - (void) setAngle:(short)a ;
 - (BOOL) updateLayerEffectPreset:(id)a error:(^@)b ;
 - (id) initWithEffectFromPreset:(id)a atIndex:(unsigned int)b ;
 - (unsigned long long) blurSize;
 - (unsigned long long) distance;
 - (unsigned long long) spread;
 - (short) angle;
 - (unsigned int) effectType;
 - (id) color;
 - (double) opacity;
 - (void) setOpacity:(double)a ;


@end
