
@interface _UILegibilityCachedShadow : NSObject {

    @"_UILegibilitySettings" _settings;
    d _strength;
    @"UIImage" _shadow;
}
@property (nonatomic, retain, readwrite) _UILegibilitySettings* settings;
@property (nonatomic, assign, readwrite) NSNumber* strength;
@property (nonatomic, retain, readwrite) UIImage* shadow;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) settings;
 - (void) setSettings:(id)a;
 - (d) strength;
 - (BOOL) matchesSettings:(id)astrength:(d)b;
 - (void) setStrength:(d)a;
 - (void) setShadow:(id)a;
 - (id) shadow;


@end
