
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {

    UIView* _arrowView;
    UIView* _leftCapView;
    UIView* _rightCapView;
    _UIBackdropView* _blurView;
    NSArray* _dimmingViews;
    UIColor* _popoverBackgroundColor;
    double _arrowOffset;
    unsigned long long _arrowDirection;
    long long _backgroundStyle;
    BOOL _arrowVisible;
    BOOL useShortMode;
    BOOL _debugMode;
    double _dimmingViewTopEdgeInset;
}
 + (double) arrowHeight;
 + (double) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) motionEnded:(long long)awithEvent:(id)b;
 - (BOOL) isPinned;
 - (void) motionBegan:(long long)awithEvent:(id)b;
 - (void) motionCancelled:(long long)awithEvent:(id)b;
 - ({CGSize=dd}) _shadowOffset;
 - (unsigned long long) arrowDirection;
 - (void) setArrowDirection:(unsigned long long)a;
 - (double) _shadowRadius;
 - (void) _loadNecessaryViews;
 - (double) minNonPinnedOffset;
 - (double) maxNonPinnedOffset;
 - (BOOL) isRightArrowPinnedToTop;
 - (BOOL) isRightArrowPinnedToBottom;
 - (BOOL) useShortMode;
 - (void) _layoutArrowViewsUpOrDown;
 - (void) _layoutArrowViewsLeftOrRight;
 - (void) _layoutArrowViewsNone;
 - ({UIEdgeInsets=dddd}) _shadowInsets;
 - (double) _shadowOpacity;
 - (id) _shadowPath;
 - (BOOL) hasComponentViews;
 - (BOOL) wouldPinForOffset:(double)a;
 - (void) setBackgroundStyle:(long long)a;
 - (void) setArrowOffset:(double)a;
 - (double) arrowOffset;
 - (void) setDimmingViewTopEdgeInset:(double)a;
 - (long long) backgroundStyle;
 - (void) setBackgroundStyle:(long long)aanimated:(BOOL)b;
 - (id) popoverBackgroundColor;
 - (void) setPopoverBackgroundColor:(id)a;
 - (BOOL) isArrowVisible;
 - (void) setArrowVisible:(BOOL)a;
 - (void) setArrowVisible:(BOOL)aanimated:(BOOL)b;
 - (void) setUseShortMode:(BOOL)a;
 - (BOOL) isDebugModeEnabled;
 - (void) setDebugModeEnabled:(BOOL)a;
 - (double) dimmingViewTopEdgeInset;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
