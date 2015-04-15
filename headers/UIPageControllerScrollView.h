
@interface UIPageControllerScrollView : UIScrollView {

    @"UIPageController" _pageController;
}

 - (void) layoutSubviews;
 - (void) _scrollViewWillBeginDragging;
 - (void) _scrollViewDidEndDraggingWithDeceleration:(BOOL)a;
 - (void) _scrollViewDidEndDecelerating;
 - (unsigned long long) _abuttedPagingEdges;
 - (void) _scrollViewAnimationEnded:(id)afinished:(BOOL)b;
 - (id) pageController;
 - (void) setPageController:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
