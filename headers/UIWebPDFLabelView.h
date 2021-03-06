
@interface UIWebPDFLabelView : UIView {

    UILabel* _label;
    _UIBackdropView* _backdropView;
    NSTimer* _timer;
    unsigned long long currentPageIndex;
}

 - (void) dealloc;
 - (void) setText:(id)a ;
 - (void) sizeToFit;
 - (void) fadeOut;
 - (void) clearTimer;
 - (BOOL) isTimerInstalled;
 - (unsigned long long) currentPageIndex;
 - (void) setCurrentPageIndex:(unsigned long long)a ;
 - (void) showNowInSuperView:(id)a atOrigin:({CGPoint=dd})b withText:(id)c animated:(BOOL)d ;
 - (double) _fadeOutDuration;
 - (void) _makeRoundedCorners;
 - (double) _fadeOutDelay;
 - (void) _fadeOutAnimationDidStop:(id)a finished:(id)b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
