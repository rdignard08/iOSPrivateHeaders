
@protocol NSCopying;
@interface UIKBRenderConfig : NSObject <NSCopying> {

    BOOL _useEmojiStyles;
    BOOL _lightKeyboard;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _lightKeycapOpacity;
}
@property (nonatomic, assign, readwrite) NSNumber* lightKeyboard;
@property (nonatomic, assign, readwrite) NSNumber* blurRadius;
@property (nonatomic, assign, readwrite) NSNumber* blurSaturation;
@property (nonatomic, assign, readwrite) NSNumber* keycapOpacity;
@property (nonatomic, assign, readwrite) NSNumber* lightKeycapOpacity;
@property (nonatomic, assign, readonly) NSNumber* whiteText;
@property (nonatomic, assign, readonly) NSNumber* backdropStyle;
 + (long long) backdropStyleForStyle:(long long)a;
 + (id) defaultConfig;
 + (id) defaultEmojiConfig;
 + (id) darkConfig;
 + (id) configForAppearance:(long long)ainputMode:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (BOOL) whiteText;
 - (double) blurRadius;
 - (void) setBlurRadius:(double)a;
 - (long long) backdropStyle;
 - (void) setBlurSaturation:(double)a;
 - (void) setLightKeyboard:(BOOL)a;
 - (void) setKeycapOpacity:(double)a;
 - (void) setLightKeycapOpacity:(double)a;
 - (BOOL) lightKeyboard;
 - (double) keycapOpacity;
 - (double) lightKeycapOpacity;
 - (double) blurSaturation;


@end
