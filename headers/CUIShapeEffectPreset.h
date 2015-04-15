
@interface CUIShapeEffectPreset : NSObject {

    [35{?="effectType"I"effectParameter"I"effectValue"(?="floatValue"d"intValue"Q"colorValue"{_rgbcolor="r"C"g"C"b"C}"angleValue"s"enumValue"I)}] _parameterList;
    [8I] _effectIndex;
    d _scaleFactor;
}
 + (id) requiredEffectParametersForEffectType:(I)a;

 - (id) init;
 - (id) CUIEffectDataRepresentation;
 - (id) initWithEffectScale:(d)a;
 - (Q) effectCount;
 - (I) effectTypeAtIndex:(Q)a;
 - (id) layerEffectsRepresentation;
 - (void) addDropShadowWithColorRed:(I)agreen:(I)bblue:(I)copacity:(d)dblur:(i)espread:(i)foffset:(i)gangle:(i)h;
 - ((?=dQ{_rgbcolor=CCC}sI)) valueForParameter:(I)ainEffectAtIndex:(Q)b;
 - (void) addInnerShadowWithColorRed:(I)agreen:(I)bblue:(I)copacity:(d)dblur:(i)eoffset:(i)fangle:(i)gblendMode:(I)h;
 - (void) addInnerGlowWithColorRed:(I)agreen:(I)bblue:(I)copacity:(d)dblur:(i)eblendMode:(I)f;
 - (void) addOuterGlowWithColorRed:(I)agreen:(I)bblue:(I)copacity:(d)dblur:(i)espread:(i)f;
 - (void) addColorFillWithRed:(I)agreen:(I)bblue:(I)copacity:(d)dblendMode:(I)e;
 - (void) addGradientFillWithTopColorRed:(I)agreen:(I)bblue:(I)cbottomColorRed:(I)dgreen:(I)eblue:(I)fopacity:(d)g;
 - (void) addBevelEmbossWithHighlightColorRed:(I)agreen:(I)bblue:(I)copacity:(d)dshadowColorRed:(I)egreen:(I)fblue:(I)gopacity:(d)hblur:(i)isoften:(i)j;
 - (void) _insertEffectTuple:({?=II(?=dQ{_rgbcolor=CCC}sI)})aatEffectIndex:(Q)b;
 - (void) addValue:((?=dQ{_rgbcolor=CCC}sI))aforParameter:(I)bwithEffectType:(I)catEffectIndex:(Q)d;
 - (void) addValue:((?=dQ{_rgbcolor=CCC}sI))aforParameter:(I)bwithNewEffectType:(I)c;
 - (void) appendValue:((?=dQ{_rgbcolor=CCC}sI))aforParameter:(I)bwithEffectType:(I)c;
 - (void) addFloatValue:(d)aforParameter:(I)bwithNewEffectType:(I)c;
 - (void) addColorValueRed:(I)agreen:(I)bblue:(I)cforParameter:(I)dwithNewEffectType:(I)e;
 - (void) appendFloatValue:(d)aforParameter:(I)bwithEffectType:(I)c;
 - (void) appendEnumValue:(I)aforParameter:(I)bwithEffectType:(I)c;
 - (void) appendColorValueRed:(I)agreen:(I)bblue:(I)cforParameter:(I)dwithEffectType:(I)e;
 - (void) appendIntValue:(Q)aforParameter:(I)bwithEffectType:(I)c;
 - (void) appendAngleValue:(q)aforParameter:(I)bwithEffectType:(I)c;
 - (d) effectScale;
 - (void) getEffectTuples:(^^{?})acount:(^Q)batEffectIndex:(Q)c;
 - (void) addIntValue:(Q)aforParameter:(I)bwithNewEffectType:(I)c;
 - (void) addEnumValue:(I)aforParameter:(I)bwithNewEffectType:(I)c;
 - (void) addShapeOpacityWithOpacity:(d)a;
 - (void) addOutputOpacityWithOpacity:(d)a;
 - (void) addExtraShadowWithColorRed:(I)agreen:(I)bblue:(I)copacity:(d)dblur:(i)espread:(i)foffset:(i)gangle:(i)h;
 - (Q) _parameterCount;
 - (id) initWithConstantPreset:(r^{?=QQQQ[35{?=II(?=dQ{_rgbcolor=CCC}sI)}]})a;


@end
