
@interface UICalloutView : UIControl {

    @"UIImageView" _leftCap;
    @"UIImageView" _rightCap;
    @"UIImageView" _topAnchor;
    @"UIImageView" _bottomAnchor;
    @"UIImageView" _leftBackground;
    @"UIImageView" _rightBackground;
    @"UILabel" _title;
    @"UILabel" _subtitle;
    @"UILabel" _temporary;
    @"UIView" _leftView;
    @"UIView" _rightView;
    {?="origin"{CGPoint="x"d"y"d}"offset"{CGPoint="x"d"y"d}"position"i"desiredPoint"{CGPoint="x"d"y"d}"desiredBounds"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}} _anchor;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    id _delegate;
    {?="animated"b1"didMoveCalled"b1"hasPendingAnimatedLayout"b1"canAnchorFromBottom"b1"reserved"b28} _flags;
    @"NSMutableArray" _fadeInViews;
    @"NSMutableArray" _fadeOutViews;
    @"NSTimer" _layoutAnimationTimer;
    d _maximumWidth;
}
 + (d) defaultHeight;
 + (id) _backgroundImage;
 + (id) _bottomAnchorImage;
 + (id) _leftCapImage;
 + (id) _rightCapImage;
 + (id) _topAnchorImage;
 + (id) sharedCalloutView;

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) animationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (id) hitTest:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) _fadeViewsIn:(BOOL)a;
 - (void) setMaximumWidth:(d)a;
 - (d) maximumWidth;
 - (void) addTarget:(id)aaction:(SEL)b;
 - (id) subtitle;
 - (void) _setLeftView:(id)a;
 - (void) _layoutSubviews:(BOOL)a;
 - (void) _scheduleViewToFadeOut:(id)a;
 - (void) _scheduleLayoutAnimation;
 - (void) _scheduleViewToFadeIn:(id)a;
 - (void) _setRightView:(id)a;
 - (void) completeBounceAnimation;
 - (void) _setLayoutAnimationTimer:(id)a;
 - (void) _layoutAnimation;
 - (void) setLeftView:(id)aanimated:(BOOL)b;
 - (void) setRightView:(id)aanimated:(BOOL)b;
 - (void) setSubtitle:(id)aanimated:(BOOL)b;
 - (void) getActualAnchorPoint:(^{CGPoint=dd})aframe:(^{CGRect={CGPoint=dd}{CGSize=dd}})bposition:(^i)cforDesiredAnchorPoint:({CGPoint=dd})dboundaryRect:({CGRect={CGPoint=dd}{CGSize=dd}})e;
 - (void) _setOriginForScale:(d)a;
 - (void) _markDidMoveCalled;
 - (d) UICalloutViewCapHeight;
 - (d) UICalloutViewCapPaddingTop;
 - (d) UICalloutViewLayoutDuration;
 - (d) UICalloutViewButtonPadding;
 - (d) UICalloutViewHorizontalMargin;
 - (d) UICalloutViewHorizontalPadding;
 - (d) UICalloutViewVerticalMargin;
 - (d) UICalloutViewMinimumWidth;
 - (void) setLeftView:(id)a;
 - (void) setRightView:(id)a;
 - (void) setSubtitle:(id)a;
 - (void) setTemporaryTitle:(id)a;
 - (id) temporaryTitle;
 - (q) titleLineBreakMode;
 - (void) setTitleLineBreakMode:(q)a;
 - (q) subtitleLineBreakMode;
 - (void) setSubtitleLineBreakMode:(q)a;
 - (q) titleTextAlignment;
 - (void) setTitleTextAlignment:(q)a;
 - (q) subtitleTextAlignment;
 - (void) setSubtitleTextAlignment:(q)a;
 - (void) setCanAnchorFromBottom:(BOOL)a;
 - (BOOL) canAnchorFromBottom;
 - (void) setAnchorPoint:({CGPoint=dd})aboundaryRect:({CGRect={CGPoint=dd}{CGSize=dd}})banimate:(BOOL)c;
 - (void) fadeOutWithDuration:(d)a;
 - (id) leftView;
 - (id) rightView;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGPoint=dd}) anchorPoint;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a;
 - (void) removeTarget:(id)a;


@end
