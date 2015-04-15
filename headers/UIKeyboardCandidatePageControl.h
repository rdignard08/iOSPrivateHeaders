
@interface UIKeyboardCandidatePageControl : UIView {

    UIKeyboardCandidateBarSegmentControl* _pageControl;
    BOOL _usingVerticalArrows;
}
 + (id) imageWithColor:(id)asize:({CGSize=dd})b;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) _setRenderConfig:(id)a ;
 - (void) setUseVerticalArrows:(BOOL)a ;
 - (void) _changePage:(id)a ;
 - (void) updatePageControlWithStatus:(BOOL)a rightControlButtonEnabled:(BOOL)b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
