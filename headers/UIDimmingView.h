
@protocol UIGestureRecognizerDelegate;
@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {

    id _delegate;
    UIBarButtonItem* _highlightedBarButtonItem;
    UIImageView* _highlightedImageView;
    UIImageView* _backgroundGlow;
    NSArray* _passthroughViews;
    BOOL _ignoresTouches;
    BOOL _displayed;
    BOOL _inPassthroughHitTest;
    UIColor* _dimmingColor;
    UITapGestureRecognizer* _singleFingerTapRecognizer;
    BOOL _suppressesBackdrops;
}
 + (id) defaultDimmingColor;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) gestureRecognizer:(id)a shouldReceiveTouch:(id)b ;
 - (void) setDimmingColor:(id)a ;
 - (id) dimmingColor;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (id) hitTest:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (BOOL) displayed;
 - (void) setIgnoresTouches:(BOOL)a ;
 - (void) setSuppressesBackdrops:(BOOL)a ;
 - (void) display:(BOOL)a withAnimationDuration:(double)b afterDelay:(double)c ;
 - (id) passthroughViews;
 - (void) setPassthroughViews:(id)a ;
 - (void) display:(BOOL)a ;
 - (void) handleSingleTap:(id)a ;
 - (BOOL) suppressesBackdrops;
 - (id) _backdropViewsToAnimate;
 - (void) dimmingRemovalAnimationDidStop;
 - (void) setHighlightedBarButtonItem:(id)a ;
 - (id) highlightedBarButtonItem;
 - (void) _simulateTap;
 - (BOOL) ignoresTouches;
 - (void) setDisplayed:(BOOL)a ;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) mouseUp:(^{__GSEvent=})a ;


@end
