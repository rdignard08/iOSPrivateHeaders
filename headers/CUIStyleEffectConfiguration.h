
@protocol NSCopying;
@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {

    q _state;
    q _presentationState;
    q _value;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
}
@property (nonatomic, assign, readwrite) NSNumber* state;
@property (nonatomic, assign, readwrite) NSNumber* presentationState;
@property (nonatomic, assign, readwrite) NSNumber* value;
@property (nonatomic, assign, readwrite) NSNumber* useSimplifiedEffect;
@property (nonatomic, assign, readwrite) NSNumber* foregroundColorShouldTintEffects;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) setForegroundColorShouldTintEffects:(BOOL)a;
 - (id) init;
 - (q) state;
 - (void) setState:(q)a;
 - (void) setValue:(q)a;
 - (q) value;
 - (void) setUseSimplifiedEffect:(BOOL)a;
 - (q) presentationState;
 - (BOOL) useSimplifiedEffect;
 - (BOOL) shouldIgnoreForegroundColor;
 - (BOOL) shouldRespectOutputBlending;
 - (void) setPresentationState:(q)a;
 - (BOOL) foregroundColorShouldTintEffects;


@end
