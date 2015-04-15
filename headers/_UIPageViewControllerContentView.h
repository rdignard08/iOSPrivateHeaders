
@interface _UIPageViewControllerContentView : UIView {

    @"UIPageViewController" _pageViewController;
    @"_UIQueuingScrollView" _scrollView;
    @"UIPageControl" _pageControl;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) scrollView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scrollViewFrame;
 - (d) _pageSpacing;
 - (void) _setupPageControl:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aandPageViewController:(id)b;
 - (void) invalidatePageViewController;
 - (id) pageControl;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
