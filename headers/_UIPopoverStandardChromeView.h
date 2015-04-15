
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {

    @"UIView" _arrowView;
    @"UIView" _leftCapView;
    @"UIView" _rightCapView;
    @"_UIBackdropView" _blurView;
    @"NSArray" _dimmingViews;
    @"UIColor" _popoverBackgroundColor;
    d _arrowOffset;
    Q _arrowDirection;
    q _backgroundStyle;
    BOOL _arrowVisible;
    BOOL useShortMode;
    BOOL _debugMode;
    d _dimmingViewTopEdgeInset;
}
 + (d) arrowHeight;
 + (d) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) motionEnded:(q)awithEvent:(id)b;
 - (BOOL) isPinned;
 - (void) motionBegan:(q)awithEvent:(id)b;
 - (void) motionCancelled:(q)awithEvent:(id)b;
 - ({CGSize=dd}) _shadowOffset;
 - (Q) arrowDirection;
 - (void) setArrowDirection:(Q)a;
 - (d) _shadowRadius;
 - (void) _loadNecessaryViews;
 - (d) minNonPinnedOffset;
 - (d) maxNonPinnedOffset;
 - (BOOL) isRightArrowPinnedToTop;
 - (BOOL) isRightArrowPinnedToBottom;
 - (BOOL) useShortMode;
 - (void) _layoutArrowViewsUpOrDown;
 - (void) _layoutArrowViewsLeftOrRight;
 - (void) _layoutArrowViewsNone;
 - ({UIEdgeInsets=dddd}) _shadowInsets;
 - (d) _shadowOpacity;
 - (id) _shadowPath;
 - (BOOL) hasComponentViews;
 - (BOOL) wouldPinForOffset:(d)a;
 - (void) setBackgroundStyle:(q)a;
 - (void) setArrowOffset:(d)a;
 - (d) arrowOffset;
 - (void) setDimmingViewTopEdgeInset:(d)a;
 - (q) backgroundStyle;
 - (void) setBackgroundStyle:(q)aanimated:(BOOL)b;
 - (id) popoverBackgroundColor;
 - (void) setPopoverBackgroundColor:(id)a;
 - (BOOL) isArrowVisible;
 - (void) setArrowVisible:(BOOL)a;
 - (void) setArrowVisible:(BOOL)aanimated:(BOOL)b;
 - (void) setUseShortMode:(BOOL)a;
 - (BOOL) isDebugModeEnabled;
 - (void) setDebugModeEnabled:(BOOL)a;
 - (d) dimmingViewTopEdgeInset;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
