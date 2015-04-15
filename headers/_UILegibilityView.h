
@interface _UILegibilityView : UIView {

    BOOL _hidesImage;
    @"_UILegibilitySettings" _settings;
    @"UIImage" _image;
    @"UIImage" _shadowImage;
    d _strength;
    @"UIImageView" _imageView;
    @"UIImageView" _shadowImageView;
    @"CAFilter" _imageColorFilter;
    @"CAFilter" _shadowImageColorFilter;
    q _options;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) settings;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a;
 - (id) imageView;
 - (id) initWithSettings:(id)astrength:(d)bimage:(id)cshadowImage:(id)d;
 - (void) setImage:(id)ashadowImage:(id)b;
 - (void) setSettings:(id)a;
 - (id) initWithSettings:(id)astrength:(d)bimage:(id)c;
 - (id) initWithStyle:(q)aimage:(id)b;
 - (d) strength;
 - (void) setStrength:(d)a;
 - (id) initWithStyle:(q)aimage:(id)bshadowImage:(id)c;
 - (id) initWithSettings:(id)astrength:(d)bimage:(id)cshadowImage:(id)doptions:(q)e;
 - (void) setSettings:(id)aimage:(id)bshadowImage:(id)c;
 - (id) shadowImageView;
 - (void) setImageView:(id)a;
 - (void) setShadowImageView:(id)a;
 - (BOOL) usesColorFilters;
 - (id) imageColorFilter;
 - (void) setImageColorFilter:(id)a;
 - (id) drawingColor;
 - (id) shadowImageColorFilter;
 - (void) setShadowImageColorFilter:(id)a;
 - (void) updateImage;
 - (BOOL) usesSecondaryColor;
 - (void) setHidesImage:(BOOL)a;
 - (void) setStyle:(q)aimage:(id)bshadowImage:(id)c;
 - (void) updateForChangedSettings:(id)a;
 - (BOOL) hidesImage;
 - (void) setOptions:(q)a;
 - (q) options;
 - (void) setImage:(id)a;
 - (q) style;
 - (id) image;


@end
