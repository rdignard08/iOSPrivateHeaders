
@interface _UILegibilityView : UIView {

    BOOL _hidesImage;
    _UILegibilitySettings* _settings;
    UIImage* _image;
    UIImage* _shadowImage;
    double _strength;
    UIImageView* _imageView;
    UIImageView* _shadowImageView;
    CAFilter* _imageColorFilter;
    CAFilter* _shadowImageColorFilter;
    long long _options;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (id) settings;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a ;
 - (id) imageView;
 - (id) initWithSettings:(id)a strength:(double)b image:(id)c shadowImage:(id)d ;
 - (void) setImage:(id)a shadowImage:(id)b ;
 - (void) setSettings:(id)a ;
 - (id) initWithSettings:(id)a strength:(double)b image:(id)c ;
 - (id) initWithStyle:(long long)a image:(id)b ;
 - (double) strength;
 - (void) setStrength:(double)a ;
 - (id) initWithStyle:(long long)a image:(id)b shadowImage:(id)c ;
 - (id) initWithSettings:(id)a strength:(double)b image:(id)c shadowImage:(id)d options:(long long)e ;
 - (void) setSettings:(id)a image:(id)b shadowImage:(id)c ;
 - (id) shadowImageView;
 - (void) setImageView:(id)a ;
 - (void) setShadowImageView:(id)a ;
 - (BOOL) usesColorFilters;
 - (id) imageColorFilter;
 - (void) setImageColorFilter:(id)a ;
 - (id) drawingColor;
 - (id) shadowImageColorFilter;
 - (void) setShadowImageColorFilter:(id)a ;
 - (void) updateImage;
 - (BOOL) usesSecondaryColor;
 - (void) setHidesImage:(BOOL)a ;
 - (void) setStyle:(long long)a image:(id)b shadowImage:(id)c ;
 - (void) updateForChangedSettings:(id)a ;
 - (BOOL) hidesImage;
 - (void) setOptions:(long long)a ;
 - (long long) options;
 - (void) setImage:(id)a ;
 - (long long) style;
 - (id) image;


@end
