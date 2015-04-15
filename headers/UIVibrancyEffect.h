
@interface UIVibrancyEffect : UIVisualEffect {

    q _blurStyle;
}
 + (BOOL) supportsSecureCoding;
 + (id) effectForBlurEffect:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) effectConfig;
 - (id) effectConfigForQuality:(q)a;
 - (id) _lowQualityEffectConfig;
 - (id) _highQualityEffectConfig;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
