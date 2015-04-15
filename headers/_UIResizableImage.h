
@interface _UIResizableImage : UIImage {

    BOOL _alwaysStretches;
    BOOL _isSubimage;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _subimageInsets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _capInsets;
}
 + (BOOL) supportsSecureCoding;

 - (BOOL) isEqual:(id)a;
 - (void) _configureImage:(id)a;
 - (BOOL) _isResizable;
 - ({UIEdgeInsets=dddd}) capInsets;
 - (void) _setCapInsets:({UIEdgeInsets=dddd})a;
 - (void) _setAlwaysStretches:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentStretchInPixels;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentInsetsInPixels:({UIEdgeInsets=dddd})aemptySizeFallback:(@?)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectInPixels;
 - (BOOL) _suppressesAccessibilityHairlineThickening;
 - (id) initWithImage:(id)acapInsets:({UIEdgeInsets=dddd})b;
 - (void) _setSubimageInsets:({UIEdgeInsets=dddd})a;
 - (BOOL) _isSubimage;
 - (BOOL) _isTiledWhenStretchedToSize:({CGSize=dd})a;
 - (id) _resizableImageWithCapMask:(int)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (long long) resizingMode;


@end
