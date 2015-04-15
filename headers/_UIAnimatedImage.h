
@interface _UIAnimatedImage : UIImage {

    @"NSArray" _images;
    d _duration;
}
 + (BOOL) supportsSecureCoding;

 - (d) duration;
 - (void) dealloc;
 - (Q) hash;
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
 - (id) initWithImages:(id)aduration:(d)b;
 - (id) resizableImageWithCapInsets:({UIEdgeInsets=dddd})aresizingMode:(q)b;
 - (void) _setAlignmentRectInsets:({UIEdgeInsets=dddd})a;
 - (id) _bezeledImageWithShadowRed:(d)agreen:(d)bblue:(d)calpha:(d)dfillRed:(d)egreen:(d)fblue:(d)galpha:(d)hdrawShadow:(BOOL)i;
 - (id) _doubleBezeledImageWithExteriorShadowRed:(d)agreen:(d)bblue:(d)calpha:(d)dinteriorShadowRed:(d)egreen:(d)fblue:(d)galpha:(d)hfillRed:(d)igreen:(d)jblue:(d)kalpha:(d)l;
 - (id) _imageScaledToProportion:(d)ainterpolationQuality:(i)b;
 - (id) _imageWithStylePresets:(id)awithTintColor:(id)b;
 - (id) _selectedTabBarItemImageWithTintColor:(id)ametrics:(q)bstyle:(q)cforScreenScale:(d)d;
 - (id) _unselectedTabBarItemImageWithTintColor:(id)ametrics:(q)bstyle:(q)cforScreenScale:(d)d;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (q) resizingMode;


@end
