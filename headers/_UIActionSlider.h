
@protocol UIGestureRecognizerDelegate;
@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate> {

    UIView _contentView;
    UIView _trackDodgeView;
    UIView _trackBackgroundView;
    _UIBackdropView _trackBlurView;
    UIView _trackSolidView;
    _UIActionSliderKnob _knobView;
    UIImageView _knobImageView;
    UIView<_UIActionSliderLabel> _trackLabel;
    UIPanGestureRecognizer _slideGestureRecognizer;
    {CGPoint="x"d"y"d} _slideGestureInitialPoint;
    double _knobPosition;
    double _trackWidthProportion;
    BOOL _showingTrackLabel;
    BOOL _animating;
    long long _style;
    long long _textStyle;
    NSString _trackText;
    UIFont _trackFont;
    double _trackTextBaselineFromBottom;
    <_UIActionSliderDelegate> _delegate;
    double _knobWidth;
    double _cachedTrackMaskWidth;
    _UIVibrantSettings _vibrantSettings;
    {CGSize="width"d"height"d} _knobImageOffset;
    {CGSize="width"d"height"d} _trackSize;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _knobInsets;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) didMoveToSuperview;
 - (BOOL) isAnimating;
 - (void) setAnimating:(BOOL)a;
 - (id) _knobView;
 - (id) vibrantSettings;
 - (void) setVibrantSettings:(id)a;
 - (id) knobColor;
 - (void) setKnobColor:(id)a;
 - (void) _knobPanGesture:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})avibrantSettings:(id)b;
 - (void) setCachedTrackMaskWidth:(double)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) knobRect;
 - (void) _makeTrackLabel;
 - (double) _knobWidth;
 - (double) _knobHorizontalPosition;
 - (double) _knobVerticalInset;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _trackFrame;
 - (double) _knobMinXInset;
 - (id) trackText;
 - (double) trackTextBaselineFromBottom;
 - ({CGSize=dd}) trackSize;
 - (void) _hideTrackLabel:(BOOL)a;
 - (void) setTrackWidthProportion:(double)a;
 - (void) _showTrackLabel;
 - (void) updateAllTrackMasks;
 - (double) knobWidth;
 - ({UIEdgeInsets=dddd}) knobInsets;
 - (double) _knobMinX;
 - (double) _knobAvailableX;
 - (double) _knobMaxXInset;
 - (double) _knobMaxX;
 - (double) trackWidthProportion;
 - (id) trackFont;
 - (double) cachedTrackMaskWidth;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) trackTextRect;
 - (id) trackMaskPath;
 - (void) setMaskPath:(^{CGPath=})aonView:(id)b;
 - (id) trackMaskImage;
 - (void) setMaskFromImage:(id)aonView:(id)b;
 - (BOOL) isShowingTrackLabel;
 - (void) setShowingTrackLabel:(BOOL)a;
 - (void) setKnobPosition:(double)a;
 - (void) _slideCompleted:(BOOL)a;
 - (id) knobMaskPath;
 - (id) knobImage;
 - (void) setKnobImage:(id)a;
 - (void) setKnobImageOffset:({CGSize=dd})a;
 - (void) setTrackText:(id)a;
 - (void) setTrackFont:(id)a;
 - (void) setTrackSize:({CGSize=dd})a;
 - (id) trackLabel;
 - (void) setKnobWidth:(double)a;
 - (void) setKnobInsets:({UIEdgeInsets=dddd})a;
 - (void) openTrackAnimated:(BOOL)a;
 - (void) closeTrackAnimated:(BOOL)a;
 - ({CGSize=dd}) knobImageOffset;
 - (void) setTrackTextBaselineFromBottom:(double)a;
 - (id) slideGestureRecognizer;
 - (double) knobPosition;
 - (id) delegate;
 - (void) setBackgroundColor:(id)a;
 - (void) setTextStyle:(long long)a;
 - (long long) textStyle;
 - (long long) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) backgroundColor;
 - (void) setStyle:(long long)a;


@end
