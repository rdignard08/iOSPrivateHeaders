
@interface _UILegibilityCachedShadow : NSObject {

    _UILegibilitySettings* _settings;
    double _strength;
    UIImage* _shadow;
}
@property (nonatomic, retain, readwrite) _UILegibilitySettings* settings;
@property (nonatomic, assign, readwrite) NSNumber* strength;
@property (nonatomic, retain, readwrite) UIImage* shadow;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (id) settings;
 - (void) setSettings:(id)a ;
 - (double) strength;
 - (BOOL) matchesSettings:(id)a strength:(double)b ;
 - (void) setStrength:(double)a ;
 - (void) setShadow:(id)a ;
 - (id) shadow;


@end
