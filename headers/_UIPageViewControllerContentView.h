
@interface _UIPageViewControllerContentView : UIView {

    UIPageViewController* _pageViewController;
    _UIQueuingScrollView* _scrollView;
    UIPageControl* _pageControl;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) scrollView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scrollViewFrame;
 - (double) _pageSpacing;
 - (void) _setupPageControl:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a andPageViewController:(id)b ;
 - (void) invalidatePageViewController;
 - (id) pageControl;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
