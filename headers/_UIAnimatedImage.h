
@interface _UIAnimatedImage : UIImage {

    NSArray* _images;
    double _duration;
}
 + (BOOL) supportsSecureCoding;

 - (double) duration;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (BOOL) _isResizable;
 - ({UIEdgeInsets=dddd}) capInsets;
 - (void) _setAlwaysStretches:(BOOL)a ;
 - (id) _initWithOtherImage:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentStretchInPixels;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectInPixels;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (id) resizableImageWithCapInsets:({UIEdgeInsets=dddd})a ;
 - (BOOL) _isTiledWhenStretchedToSize:({CGSize=dd})a ;
 - (id) images;
 - (id) initWithImages:(id)a duration:(double)b ;
 - (id) resizableImageWithCapInsets:({UIEdgeInsets=dddd})a resizingMode:(long long)b ;
 - (void) _setAlignmentRectInsets:({UIEdgeInsets=dddd})a ;
 - (id) _bezeledImageWithShadowRed:(double)a green:(double)b blue:(double)c alpha:(double)d fillRed:(double)e green:(double)f blue:(double)g alpha:(double)h drawShadow:(BOOL)i ;
 - (id) _doubleBezeledImageWithExteriorShadowRed:(double)a green:(double)b blue:(double)c alpha:(double)d interiorShadowRed:(double)e green:(double)f blue:(double)g alpha:(double)h fillRed:(double)i green:(double)j blue:(double)k alpha:(double)l ;
 - (id) _imageScaledToProportion:(double)a interpolationQuality:(int)b ;
 - (id) _imageWithStylePresets:(id)a withTintColor:(id)b ;
 - (id) _selectedTabBarItemImageWithTintColor:(id)a metrics:(long long)b style:(long long)c forScreenScale:(double)d ;
 - (id) _unselectedTabBarItemImageWithTintColor:(id)a metrics:(long long)b style:(long long)c forScreenScale:(double)d ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (long long) resizingMode;


@end
