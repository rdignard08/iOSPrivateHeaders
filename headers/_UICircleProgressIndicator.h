
@interface _UICircleProgressIndicator : UIView {

    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    UIImage* _borderImage;
    UIImage* _centerImage;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _centerImageInsets;
    CADisplayLink* _displayLink;
    UIImage* _fillImage;
    BOOL _highlighted;
    UIImageView* _indeterminateView;
    BOOL _isAnimating;
    double _progress;
    UIColor* _unhighlightedBackgroundColor;
}
 + (id) _fillImage;
 + (id) _borderImage;
 + (id) _indeterminateImage;

 - (BOOL) isIndeterminate;
 - (double) progress;
 - (void) setProgress:(double)a;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) tintColorDidChange;
 - (void) setHighlighted:(BOOL)a;
 - (BOOL) isHighlighted;
 - (void) setImageInsets:({UIEdgeInsets=dddd})a;
 - ({UIEdgeInsets=dddd}) imageInsets;
 - (void) setProgress:(double)aanimated:(BOOL)b;
 - (void) _startIndeterminateAnimation;
 - (void) _animateValueOnDisplayLink:(id)a;
 - (void) setBorderImage:(id)a;
 - (void) setFillImage:(id)a;
 - (void) setIndeterminate:(BOOL)a;
 - (void) _setHidesBorderView:(BOOL)a;
 - (id) borderImage;
 - (id) fillImage;
 - (void) setImage:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) image;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
