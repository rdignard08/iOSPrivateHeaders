
@interface UIPageController : UIViewController {

    @"NSMutableArray" _viewControllers;
    [3@"UIView"] _wrapperViews;
    [3i] _notificationState;
    @"UIScrollView" _scrollView;
    @"UIPageControl" _pageControl;
    @"<UIPageControllerDelegate>" _delegate;
    i _pageSpacing;
    q _visibleIndex;
    q _pageCount;
    {?="delegateViewControllerAtIndex"b1"delegateWillBeginPaging"b1"delegateDidEndPaging"b1"displaysPageControl"b1"wraps"b1} _pageControllerFlags;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidUnload;
 - (void) viewDidAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(q)a;
 - (id) _nextViewController;
 - (void) willRotateToInterfaceOrientation:(q)aduration:(d)b;
 - (void) willAnimateRotationToInterfaceOrientation:(q)aduration:(d)b;
 - (void) didRotateFromInterfaceOrientation:(q)a;
 - (BOOL) _allowsAutorotation;
 - (id) rotatingHeaderView;
 - (id) rotatingFooterView;
 - (BOOL) _shouldUseOnePartRotation;
 - (void) willAnimateFirstHalfOfRotationToInterfaceOrientation:(q)aduration:(d)b;
 - (void) willAnimateSecondHalfOfRotationFromInterfaceOrientation:(q)aduration:(d)b;
 - (void) _getRotationContentSettings:(^{?=BBBBBdi})a;
 - (void) didAnimateFirstHalfOfRotationToInterfaceOrientation:(q)a;
 - (id) visibleViewController;
 - (q) pageCount;
 - (void) _scrollView:(id)aboundsDidChangeToSize:({CGSize=dd})b;
 - (void) _scrollViewDidScroll:(id)aforceUpdate:(BOOL)b;
 - (void) _scrollViewWillBeginPaging;
 - (void) _scrollViewDidEndPaging;
 - (q) visibleIndex;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scrollViewFrame;
 - (void) _createPageControl;
 - (BOOL) _isViewControllerBeingUnloaded:(id)aatIndex:(q)b;
 - (void) _adjustScrollViewContentInsets;
 - (void) _replaceViewControllerAtIndex:(q)awithViewController:(id)b;
 - (id) _visibleViewController;
 - (void) _setPreviousViewController:(id)a;
 - (void) _setVisibleViewController:(id)a;
 - (void) _notifyVisibleViewController:(i)aanimated:(BOOL)b;
 - (void) _setNextViewController:(id)a;
 - (id) _loadPreviousViewController;
 - (id) _loadVisibleViewControllerAndNotify:(BOOL)a;
 - (id) _loadNextViewController;
 - (id) _previousViewController;
 - (void) _notifyViewController:(id)aofState:(i)bpreviousState:(i)canimated:(BOOL)d;
 - (i) _previousViewControllerNotificationState;
 - (i) _visibleViewControllerNotificationState;
 - (i) _nextViewControllerNotificationState;
 - (void) _notifyPreviousViewController:(i)aanimated:(BOOL)b;
 - (void) _notifyNextViewController:(i)aanimated:(BOOL)b;
 - (BOOL) _hasPreviousViewController;
 - (BOOL) _hasNextViewController;
 - (void) _setNextViewControllerNotificationState:(i)a;
 - (void) _setVisibleViewControllerNotificationState:(i)a;
 - (void) _setPreviousViewControllerNotificationState:(i)a;
 - (void) setVisibleIndex:(q)apreservingLoadedViewControllers:(BOOL)banimated:(BOOL)c;
 - (void) setVisibleIndex:(q)a;
 - (void) reloadViewControllerAtIndex:(q)a;
 - (BOOL) _needToLoadPrevious;
 - (BOOL) _needToLoadNext;
 - (void) setVisibleIndex:(q)aanimated:(BOOL)b;
 - (void) _pageChanged:(id)a;
 - (BOOL) _doesVisibleViewControllerSupportInterfaceOrientation:(q)a;
 - (void) setPageSpacing:(d)a;
 - (d) pageSpacing;
 - (BOOL) _needToLoadVisible;
 - (BOOL) _hasVisibleViewController;
 - (void) setPageCount:(q)a;
 - (BOOL) wraps;
 - (void) setWraps:(BOOL)a;
 - (BOOL) displaysPageControl;
 - (void) setDisplaysPageControl:(BOOL)a;
 - (q) indexOfViewController:(id)a;
 - (id) _pageControllerScrollView;
 - (id) delegate;
 - (id) _scrollView;


@end