
@interface CUIShapeEffectPreset : NSObject {

    [35{?="effectType"I"effectParameter"I"effectValue"(?="floatValue"d"intValue"Q"colorValue"{_rgbcolor="r"C"g"C"b"C}"angleValue"s"enumValue"I)}] _parameterList;
    [8I] _effectIndex;
    double _scaleFactor;
}
 + (id) requiredEffectParametersForEffectType:(unsigned int)a;

 - (id) init;
 - (id) CUIEffectDataRepresentation;
 - (id) initWithEffectScale:(double)a;
 - (unsigned long long) effectCount;
 - (unsigned int) effectTypeAtIndex:(unsigned long long)a;
 - (id) layerEffectsRepresentation;
 - (void) addDropShadowWithColorRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)copacity:(double)dblur:(int)espread:(int)foffset:(int)gangle:(int)h;
 - ((?=dQ{_rgbcolor=CCC}sI)) valueForParameter:(unsigned int)ainEffectAtIndex:(unsigned long long)b;
 - (void) addInnerShadowWithColorRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)copacity:(double)dblur:(int)eoffset:(int)fangle:(int)gblendMode:(unsigned int)h;
 - (void) addInnerGlowWithColorRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)copacity:(double)dblur:(int)eblendMode:(unsigned int)f;
 - (void) addOuterGlowWithColorRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)copacity:(double)dblur:(int)espread:(int)f;
 - (void) addColorFillWithRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)copacity:(double)dblendMode:(unsigned int)e;
 - (void) addGradientFillWithTopColorRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)cbottomColorRed:(unsigned int)dgreen:(unsigned int)eblue:(unsigned int)fopacity:(double)g;
 - (void) addBevelEmbossWithHighlightColorRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)copacity:(double)dshadowColorRed:(unsigned int)egreen:(unsigned int)fblue:(unsigned int)gopacity:(double)hblur:(int)isoften:(int)j;
 - (void) _insertEffectTuple:({?=II(?=dQ{_rgbcolor=CCC}sI)})aatEffectIndex:(unsigned long long)b;
 - (void) addValue:((?=dQ{_rgbcolor=CCC}sI))aforParameter:(unsigned int)bwithEffectType:(unsigned int)catEffectIndex:(unsigned long long)d;
 - (void) addValue:((?=dQ{_rgbcolor=CCC}sI))aforParameter:(unsigned int)bwithNewEffectType:(unsigned int)c;
 - (void) appendValue:((?=dQ{_rgbcolor=CCC}sI))aforParameter:(unsigned int)bwithEffectType:(unsigned int)c;
 - (void) addFloatValue:(double)aforParameter:(unsigned int)bwithNewEffectType:(unsigned int)c;
 - (void) addColorValueRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)cforParameter:(unsigned int)dwithNewEffectType:(unsigned int)e;
 - (void) appendFloatValue:(double)aforParameter:(unsigned int)bwithEffectType:(unsigned int)c;
 - (void) appendEnumValue:(unsigned int)aforParameter:(unsigned int)bwithEffectType:(unsigned int)c;
 - (void) appendColorValueRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)cforParameter:(unsigned int)dwithEffectType:(unsigned int)e;
 - (void) appendIntValue:(unsigned long long)aforParameter:(unsigned int)bwithEffectType:(unsigned int)c;
 - (void) appendAngleValue:(long long)aforParameter:(unsigned int)bwithEffectType:(unsigned int)c;
 - (double) effectScale;
 - (void) getEffectTuples:(^^{?})acount:(^Q)batEffectIndex:(unsigned long long)c;
 - (void) addIntValue:(unsigned long long)aforParameter:(unsigned int)bwithNewEffectType:(unsigned int)c;
 - (void) addEnumValue:(unsigned int)aforParameter:(unsigned int)bwithNewEffectType:(unsigned int)c;
 - (void) addShapeOpacityWithOpacity:(double)a;
 - (void) addOutputOpacityWithOpacity:(double)a;
 - (void) addExtraShadowWithColorRed:(unsigned int)agreen:(unsigned int)bblue:(unsigned int)copacity:(double)dblur:(int)espread:(int)foffset:(int)gangle:(int)h;
 - (unsigned long long) _parameterCount;
 - (id) initWithConstantPreset:(r^{?=QQQQ[35{?=II(?=dQ{_rgbcolor=CCC}sI)}]})a;


@end
