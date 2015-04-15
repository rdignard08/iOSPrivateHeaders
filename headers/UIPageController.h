
@interface UIPageController : UIViewController {

    NSMutableArray _viewControllers;
    UIView _wrapperViews;
    [3i] _notificationState;
    UIScrollView _scrollView;
    UIPageControl _pageControl;
    <UIPageControllerDelegate> _delegate;
    int _pageSpacing;
    long long _visibleIndex;
    long long _pageCount;
    {?="delegateViewControllerAtIndex"b1"delegateWillBeginPaging"b1"delegateDidEndPaging"b1"displaysPageControl"b1"wraps"b1} _pageControllerFlags;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidUnload;
 - (void) viewDidAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(long long)a;
 - (id) _nextViewController;
 - (void) willRotateToInterfaceOrientation:(long long)aduration:(double)b;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)aduration:(double)b;
 - (void) didRotateFromInterfaceOrientation:(long long)a;
 - (BOOL) _allowsAutorotation;
 - (id) rotatingHeaderView;
 - (id) rotatingFooterView;
 - (BOOL) _shouldUseOnePartRotation;
 - (void) willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)aduration:(double)b;
 - (void) willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)aduration:(double)b;
 - (void) _getRotationContentSettings:(^{?=BBBBBdi})a;
 - (void) didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)a;
 - (id) visibleViewController;
 - (long long) pageCount;
 - (void) _scrollView:(id)aboundsDidChangeToSize:({CGSize=dd})b;
 - (void) _scrollViewDidScroll:(id)aforceUpdate:(BOOL)b;
 - (void) _scrollViewWillBeginPaging;
 - (void) _scrollViewDidEndPaging;
 - (long long) visibleIndex;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scrollViewFrame;
 - (void) _createPageControl;
 - (BOOL) _isViewControllerBeingUnloaded:(id)aatIndex:(long long)b;
 - (void) _adjustScrollViewContentInsets;
 - (void) _replaceViewControllerAtIndex:(long long)awithViewController:(id)b;
 - (id) _visibleViewController;
 - (void) _setPreviousViewController:(id)a;
 - (void) _setVisibleViewController:(id)a;
 - (void) _notifyVisibleViewController:(int)aanimated:(BOOL)b;
 - (void) _setNextViewController:(id)a;
 - (id) _loadPreviousViewController;
 - (id) _loadVisibleViewControllerAndNotify:(BOOL)a;
 - (id) _loadNextViewController;
 - (id) _previousViewController;
 - (void) _notifyViewController:(id)aofState:(int)bpreviousState:(int)canimated:(BOOL)d;
 - (int) _previousViewControllerNotificationState;
 - (int) _visibleViewControllerNotificationState;
 - (int) _nextViewControllerNotificationState;
 - (void) _notifyPreviousViewController:(int)aanimated:(BOOL)b;
 - (void) _notifyNextViewController:(int)aanimated:(BOOL)b;
 - (BOOL) _hasPreviousViewController;
 - (BOOL) _hasNextViewController;
 - (void) _setNextViewControllerNotificationState:(int)a;
 - (void) _setVisibleViewControllerNotificationState:(int)a;
 - (void) _setPreviousViewControllerNotificationState:(int)a;
 - (void) setVisibleIndex:(long long)apreservingLoadedViewControllers:(BOOL)banimated:(BOOL)c;
 - (void) setVisibleIndex:(long long)a;
 - (void) reloadViewControllerAtIndex:(long long)a;
 - (BOOL) _needToLoadPrevious;
 - (BOOL) _needToLoadNext;
 - (void) setVisibleIndex:(long long)aanimated:(BOOL)b;
 - (void) _pageChanged:(id)a;
 - (BOOL) _doesVisibleViewControllerSupportInterfaceOrientation:(long long)a;
 - (void) setPageSpacing:(double)a;
 - (double) pageSpacing;
 - (BOOL) _needToLoadVisible;
 - (BOOL) _hasVisibleViewController;
 - (void) setPageCount:(long long)a;
 - (BOOL) wraps;
 - (void) setWraps:(BOOL)a;
 - (BOOL) displaysPageControl;
 - (void) setDisplaysPageControl:(BOOL)a;
 - (long long) indexOfViewController:(id)a;
 - (id) _pageControllerScrollView;
 - (id) delegate;
 - (id) _scrollView;


@end
