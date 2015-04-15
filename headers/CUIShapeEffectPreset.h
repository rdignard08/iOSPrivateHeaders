
@interface CUIShapeEffectPreset : NSObject {

    [35{?="effectType"I"effectParameter"I"effectValue"(?="floatValue"d"intValue"Q"colorValue"{_rgbcolor="r"C"g"C"b"C}"angleValue"s"enumValue"I)}] _parameterList;
    [8I] _effectIndex;
    double _scaleFactor;
}
 + (id) requiredEffectParametersForEffectType:(unsigned int)a;

 - (id) init;
 - (id) CUIEffectDataRepresentation;
 - (id) initWithEffectScale:(double)a ;
 - (unsigned long long) effectCount;
 - (unsigned int) effectTypeAtIndex:(unsigned long long)a ;
 - (id) layerEffectsRepresentation;
 - (void) addDropShadowWithColorRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c opacity:(double)d blur:(int)e spread:(int)f offset:(int)g angle:(int)h ;
 - ((?=dQ{_rgbcolor=CCC}sI)) valueForParameter:(unsigned int)a inEffectAtIndex:(unsigned long long)b ;
 - (void) addInnerShadowWithColorRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c opacity:(double)d blur:(int)e offset:(int)f angle:(int)g blendMode:(unsigned int)h ;
 - (void) addInnerGlowWithColorRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c opacity:(double)d blur:(int)e blendMode:(unsigned int)f ;
 - (void) addOuterGlowWithColorRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c opacity:(double)d blur:(int)e spread:(int)f ;
 - (void) addColorFillWithRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c opacity:(double)d blendMode:(unsigned int)e ;
 - (void) addGradientFillWithTopColorRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c bottomColorRed:(unsigned int)d green:(unsigned int)e blue:(unsigned int)f opacity:(double)g ;
 - (void) addBevelEmbossWithHighlightColorRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c opacity:(double)d shadowColorRed:(unsigned int)e green:(unsigned int)f blue:(unsigned int)g opacity:(double)h blur:(int)i soften:(int)j ;
 - (void) _insertEffectTuple:({?=II(?=dQ{_rgbcolor=CCC}sI)})a atEffectIndex:(unsigned long long)b ;
 - (void) addValue:((?=dQ{_rgbcolor=CCC}sI))a forParameter:(unsigned int)b withEffectType:(unsigned int)c atEffectIndex:(unsigned long long)d ;
 - (void) addValue:((?=dQ{_rgbcolor=CCC}sI))a forParameter:(unsigned int)b withNewEffectType:(unsigned int)c ;
 - (void) appendValue:((?=dQ{_rgbcolor=CCC}sI))a forParameter:(unsigned int)b withEffectType:(unsigned int)c ;
 - (void) addFloatValue:(double)a forParameter:(unsigned int)b withNewEffectType:(unsigned int)c ;
 - (void) addColorValueRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c forParameter:(unsigned int)d withNewEffectType:(unsigned int)e ;
 - (void) appendFloatValue:(double)a forParameter:(unsigned int)b withEffectType:(unsigned int)c ;
 - (void) appendEnumValue:(unsigned int)a forParameter:(unsigned int)b withEffectType:(unsigned int)c ;
 - (void) appendColorValueRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c forParameter:(unsigned int)d withEffectType:(unsigned int)e ;
 - (void) appendIntValue:(unsigned long long)a forParameter:(unsigned int)b withEffectType:(unsigned int)c ;
 - (void) appendAngleValue:(long long)a forParameter:(unsigned int)b withEffectType:(unsigned int)c ;
 - (double) effectScale;
 - (void) getEffectTuples:(^^{?})a count:(^Q)b atEffectIndex:(unsigned long long)c ;
 - (void) addIntValue:(unsigned long long)a forParameter:(unsigned int)b withNewEffectType:(unsigned int)c ;
 - (void) addEnumValue:(unsigned int)a forParameter:(unsigned int)b withNewEffectType:(unsigned int)c ;
 - (void) addShapeOpacityWithOpacity:(double)a ;
 - (void) addOutputOpacityWithOpacity:(double)a ;
 - (void) addExtraShadowWithColorRed:(unsigned int)a green:(unsigned int)b blue:(unsigned int)c opacity:(double)d blur:(int)e spread:(int)f offset:(int)g angle:(int)h ;
 - (unsigned long long) _parameterCount;
 - (id) initWithConstantPreset:(r^{?=QQQQ[35{?=II(?=dQ{_rgbcolor=CCC}sI)}]})a ;


@end
