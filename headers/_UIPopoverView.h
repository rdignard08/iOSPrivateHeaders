
@interface _UIPopoverView : UIView {

    UIView* _contentView;
    UIPopoverBackgroundView* _backgroundView;
    Class _backgroundViewClass;
    UIImageView* _toolbarShine;
    BOOL _showsBackgroundComponentHighlights;
    BOOL _showsBackgroundViewHighlight;
    BOOL _showsContentViewHighlight;
    UIActionSheet* _presentedActionSheet;
    UIPopoverController* _popoverController;
    double __dimmingViewTopEdgeInset;
}
 + (id) popoverViewContainingView:(id)a;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (BOOL) _needsLayoutOnAnimatedFrameChangeForNewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) willMoveToWindow:(id)a;
 - (int) _style;
 - (id) backgroundView;
 - (id) viewController;
 - (void) setUseToolbarShine:(BOOL)a;
 - (id) toolbarShine;
 - (BOOL) _allowsCustomizationOfContent;
 - (void) setPopoverController:(id)a;
 - (unsigned long long) arrowDirection;
 - (void) setArrowDirection:(unsigned long long)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _snapshotBounds;
 - (id) popoverController;
 - (void) setBackgroundStyle:(long long)a;
 - (void) setArrowOffset:(double)a;
 - (double) arrowOffset;
 - (long long) backgroundStyle;
 - (id) popoverBackgroundColor;
 - (void) setPopoverBackgroundColor:(id)a;
 - (double) _dimmingViewTopEdgeInset;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})abackgroundViewClass:(Class)bembeddedInView:(BOOL)c;
 - (id) standardChromeView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})abackgroundViewClass:(Class)b;
 - (void) _layoutToolbarShine;
 - (void) setPresentedActionSheet:(id)a;
 - (void) _setDimmingViewTopEdgeInset:(double)a;
 - (void) _setPopoverContentView:(id)a;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aarrowOffset:(double)b;
 - (void) _setCornerRadius:(double)a;
 - (void) _showArrow;
 - (void) _hideArrow;
 - (id) _viewForModalPresentationOfViewController:(id)a;
 - (BOOL) _isIgnoringTapsInDimmingView;
 - (void) _setIgnoreTapsInDimmingView:(BOOL)a;
 - (BOOL) toolbarIsVisible;
 - (void) _presentationInPopoverDidBeginForViewController:(id)a;
 - (void) _presentationInPopoverWillEndForViewController:(id)a;
 - (void) _presentationInPopoverWillBeginForViewController:(id)a;
 - (void) _presentationInPopoverDidEndForViewController:(id)a;
 - (BOOL) showsBackgroundComponentHighlights;
 - (void) setShowsBackgroundComponentHighlights:(BOOL)a;
 - (BOOL) showsBackgroundViewHighlight;
 - (void) setShowsBackgroundViewHighlight:(BOOL)a;
 - (BOOL) showsContentViewHighlight;
 - (void) setShowsContentViewHighlight:(BOOL)a;
 - (id) presentedActionSheet;
 - (id) contentView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
