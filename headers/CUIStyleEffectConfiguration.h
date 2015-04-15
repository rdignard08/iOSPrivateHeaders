
@protocol NSCopying;
@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {

    long long _state;
    long long _presentationState;
    long long _value;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
}
@property (nonatomic, assign, readwrite) NSNumber* state;
@property (nonatomic, assign, readwrite) NSNumber* presentationState;
@property (nonatomic, assign, readwrite) NSNumber* value;
@property (nonatomic, assign, readwrite) NSNumber* useSimplifiedEffect;
@property (nonatomic, assign, readwrite) NSNumber* foregroundColorShouldTintEffects;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) setForegroundColorShouldTintEffects:(BOOL)a ;
 - (id) init;
 - (long long) state;
 - (void) setState:(long long)a ;
 - (void) setValue:(long long)a ;
 - (long long) value;
 - (void) setUseSimplifiedEffect:(BOOL)a ;
 - (long long) presentationState;
 - (BOOL) useSimplifiedEffect;
 - (BOOL) shouldIgnoreForegroundColor;
 - (BOOL) shouldRespectOutputBlending;
 - (void) setPresentationState:(long long)a ;
 - (BOOL) foregroundColorShouldTintEffects;


@end
