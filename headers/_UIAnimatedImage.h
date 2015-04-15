
@interface _UIAnimatedImage : UIImage {

    NSArray _images;
    double _duration;
}
 + (BOOL) supportsSecureCoding;

 - (double) duration;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) _isResizable;
 - ({UIEdgeInsets=dddd}) capInsets;
 - (void) _setAlwaysStretches:(BOOL)a;
 - (id) _initWithOtherImage:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentStretchInPixels;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectInPixels;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (id) resizableImageWithCapInsets:({UIEdgeInsets=dddd})a;
 - (BOOL) _isTiledWhenStretchedToSize:({CGSize=dd})a;
 - (id) images;
 - (id) initWithImages:(id)aduration:(double)b;
 - (id) resizableImageWithCapInsets:({UIEdgeInsets=dddd})aresizingMode:(long long)b;
 - (void) _setAlignmentRectInsets:({UIEdgeInsets=dddd})a;
 - (id) _bezeledImageWithShadowRed:(double)agreen:(double)bblue:(double)calpha:(double)dfillRed:(double)egreen:(double)fblue:(double)galpha:(double)hdrawShadow:(BOOL)i;
 - (id) _doubleBezeledImageWithExteriorShadowRed:(double)agreen:(double)bblue:(double)calpha:(double)dinteriorShadowRed:(double)egreen:(double)fblue:(double)galpha:(double)hfillRed:(double)igreen:(double)jblue:(double)kalpha:(double)l;
 - (id) _imageScaledToProportion:(double)ainterpolationQuality:(int)b;
 - (id) _imageWithStylePresets:(id)awithTintColor:(id)b;
 - (id) _selectedTabBarItemImageWithTintColor:(id)ametrics:(long long)bstyle:(long long)cforScreenScale:(double)d;
 - (id) _unselectedTabBarItemImageWithTintColor:(id)ametrics:(long long)bstyle:(long long)cforScreenScale:(double)d;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (long long) resizingMode;


@end
