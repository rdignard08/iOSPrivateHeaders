
@protocol NSCopying, NSSecureCoding;
@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding> {

    _UIVisualEffectConfig* _effectConfig;
    _UIBackdropViewSettings* _effectSettings;
}
@property (nonatomic, assign, readonly) _UIVisualEffectConfig* effectConfig;
@property (nonatomic, assign, readonly) _UIBackdropViewSettings* effectSettings;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) effectConfig;
 - (id) effectSettings;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
