
@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent {

    int _blendMode;
    double _opacity;
    CUIColor* _color;
}

 - (void) dealloc;
 - (id) init;
 - (int) blendMode;
 - (void) setBlendMode:(int)a ;
 - (void) setColor:(id)a ;
 - (BOOL) updateLayerEffectPreset:(id)a error:(^@)b ;
 - (id) initWithEffectFromPreset:(id)a atIndex:(unsigned int)b ;
 - (unsigned int) effectType;
 - (id) color;
 - (double) opacity;
 - (void) setOpacity:(double)a ;


@end
