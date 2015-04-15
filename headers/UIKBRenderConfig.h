
@protocol NSCopying;
@interface UIKBRenderConfig : NSObject <NSCopying> {

    BOOL _useEmojiStyles;
    BOOL _lightKeyboard;
    d _blurRadius;
    d _blurSaturation;
    d _keycapOpacity;
    d _lightKeycapOpacity;
}
@property (nonatomic, assign, readwrite) NSNumber* lightKeyboard;
@property (nonatomic, assign, readwrite) NSNumber* blurRadius;
@property (nonatomic, assign, readwrite) NSNumber* blurSaturation;
@property (nonatomic, assign, readwrite) NSNumber* keycapOpacity;
@property (nonatomic, assign, readwrite) NSNumber* lightKeycapOpacity;
@property (nonatomic, assign, readonly) NSNumber* whiteText;
@property (nonatomic, assign, readonly) NSNumber* backdropStyle;
 + (q) backdropStyleForStyle:(q)a;
 + (id) defaultConfig;
 + (id) defaultEmojiConfig;
 + (id) darkConfig;
 + (id) configForAppearance:(q)ainputMode:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (BOOL) whiteText;
 - (d) blurRadius;
 - (void) setBlurRadius:(d)a;
 - (q) backdropStyle;
 - (void) setBlurSaturation:(d)a;
 - (void) setLightKeyboard:(BOOL)a;
 - (void) setKeycapOpacity:(d)a;
 - (void) setLightKeycapOpacity:(d)a;
 - (BOOL) lightKeyboard;
 - (d) keycapOpacity;
 - (d) lightKeycapOpacity;
 - (d) blurSaturation;


@end
