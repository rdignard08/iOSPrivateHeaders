
@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent {

    int _blendMode;
    double _opacity;
    CUIColor* _color;
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
 - (BOOL) updateLayerEffectPreset:(id)a error:(^@)b ;
 - (id) initWithEffectFromPreset:(id)a atIndex:(unsigned int)b ;
 - (unsigned long long) blurSize;
 - (unsigned long long) spread;
 - (unsigned int) effectType;
 - (id) color;
 - (double) opacity;
 - (void) setOpacity:(double)a ;


@end
