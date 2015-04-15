
@interface UIWebPDFLabelView : UIView {

    @"UILabel" _label;
    @"_UIBackdropView" _backdropView;
    @"NSTimer" _timer;
    Q currentPageIndex;
}

 - (void) dealloc;
 - (void) setText:(id)a;
 - (void) sizeToFit;
 - (void) fadeOut;
 - (void) clearTimer;
 - (BOOL) isTimerInstalled;
 - (Q) currentPageIndex;
 - (void) setCurrentPageIndex:(Q)a;
 - (void) showNowInSuperView:(id)aatOrigin:({CGPoint=dd})bwithText:(id)canimated:(BOOL)d;
 - (d) _fadeOutDuration;
 - (void) _makeRoundedCorners;
 - (d) _fadeOutDelay;
 - (void) _fadeOutAnimationDidStop:(id)afinished:(id)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
