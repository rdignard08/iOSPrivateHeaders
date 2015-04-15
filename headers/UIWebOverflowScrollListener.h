
@protocol UIScrollViewDelegate;
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {

    UIWebOverflowScrollView* _scrollView;
}

 - (void) scrollViewWillBeginDragging:(id)a;
 - (void) scrollViewDidEndDragging:(id)awillDecelerate:(BOOL)b;
 - (void) scrollViewDidEndDecelerating:(id)a;
 - (void) scrollViewDidScrollToTop:(id)a;
 - (void) _didCompleteScrolling;
 - (id) initWithScrollView:(id)a;


@end
