
@interface UIVibrancyEffect : UIVisualEffect {

    long long _blurStyle;
}
 + (BOOL) supportsSecureCoding;
 + (id) effectForBlurEffect:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) effectConfig;
 - (id) effectConfigForQuality:(long long)a ;
 - (id) _lowQualityEffectConfig;
 - (id) _highQualityEffectConfig;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
