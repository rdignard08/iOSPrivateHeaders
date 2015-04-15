
@interface _UIQueuingScrollView : UIScrollView {

    <_UIQueuingScrollViewDelegate>* _qDelegate;
    <_UIQueuingScrollViewDataSource>* _qDataSource;
    long long _navigationOrientation;
    NSArray* _views;
    NSArray* _wrapperViews;
    UIView* _pendingVisibleView;
    double _pageSpacing;
    NSMutableArray* _viewStateQueue;
    NSMutableArray* _completionStateQueue;
    BOOL _manualScrollInProgress;
    {?="delegateInterestedInPendingScrolls"b1"delegateInterestedInCommittedScrolls"b1"delegateInterestedInCompletedScrolls"b1"delegateInterestedInBailedOutScrolls"b1"delegateInterestedFinishedScrolling"b1"delegateCanVetoSubviewLayout"b1"dataSourceSuppliesBeforeView"b1"dataSourceSuppliesAfterView"b1"dataSourceInterestedInFlushedViews"b1} _delegateFlags;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _disabledScrollingRegion;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})a animated:(BOOL)b ;
 - (void) _scrollViewDidEndDraggingWithDeceleration:(BOOL)a ;
 - (void) _scrollViewDidEndDecelerating;
 - (unsigned long long) _abuttedPagingEdges;
 - (BOOL) _gestureRecognizer:(id)a shouldReceiveTouch:(id)b ;
 - (void) _scrollViewAnimationEnded:(id)a finished:(BOOL)b ;
 - (id) _visibleView;
 - (void) setPageSpacing:(double)a ;
 - (double) pageSpacing;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a navigationOrientation:(long long)b ;
 - (void) setQDelegate:(id)a ;
 - (void) setQDataSource:(id)a ;
 - (void) _setFrameAndApplyPageSpacing:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _invalidateOffscreenViews;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) disabledScrollingRegion;
 - (void) setDisabledScrollingRegion:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) visibleView;
 - (BOOL) isPreviousScrollCompatibleWithScrollInDirection:(long long)a ;
 - (void) setView:(id)a direction:(long long)b animated:(BOOL)c completion:(@?)d ;
 - (BOOL) isManualScrollInProgress;
 - (void) _boundsDidChangeToSize:({CGSize=dd})a ;
 - (BOOL) _isScrollInProgress:(BOOL)a ;
 - (long long) _navigationDirectionForActiveScroll:(BOOL)a ;
 - (void) _didScrollWithAnimation:(BOOL)a force:(BOOL)b ;
 - (void) _didEndManualScroll;
 - (void) _didEndDraggingManualScroll;
 - (void) _didEndProgrammaticScroll;
 - (void) _adjustContentInsets;
 - (BOOL) _dataSourceProvidesViews;
 - (id) _viewAtIndex:(long long)a loadingIfNecessary:(BOOL)b updatingContents:(BOOL)c animated:(BOOL)d ;
 - (id) _viewBefore:(BOOL)a view:(id)b ;
 - (void) _flushView:(id)a animated:(BOOL)b ;
 - (void) _setWrappedViewAtIndex:(long long)a withView:(id)b ;
 - (id) _viewBeforeView:(id)a ;
 - (id) _viewAfterView:(id)a ;
 - (id) _dequeueViewForIndex:(long long)a ;
 - (id) _requestViewForIndex:(long long)a ;
 - (void) _replaceViews:(id)a updatingContents:(BOOL)b adjustContentInsets:(BOOL)c animated:(BOOL)d ;
 - (void) _cleanUpCompletionState:(id)a didFinish:(BOOL)b didComplete:(BOOL)c ;
 - (void) _notifyDelegateDidEndManualScroll:(BOOL)a toRevealView:(id)b direction:(long long)c animated:(BOOL)d didFinish:(BOOL)e didComplete:(BOOL)f ;
 - (void) _enqueueCompletionState:(id)a ;
 - (void) _notifyDelegateWillManuallyScroll:(BOOL)a toRevealView:(id)b concealingView:(id)c animated:(BOOL)d ;
 - (void) _notifyDelegateDidCommitManualScroll:(BOOL)a toRevealView:(id)b concealView:(id)c direction:(long long)d animated:(BOOL)e canComplete:(BOOL)f ;
 - (void) _enqueueAnimatedScrollInDirection:(long long)a withView:(id)b completion:(@?)c ;
 - (long long) _navigationDirectionFromCurrentOffset;
 - (BOOL) _isDeceleratingInOppositionToNavigationDirection:(long long)a ;
 - (void) _commitGestureDrivenScrollRevealingView:(id)a concealingView:(id)b inDirection:(long long)c canComplete:(BOOL)d ;
 - (void) _notifyDelegateDidBailoutOfScrollAndRevealedView:(id)a ;
 - (void) _didEndScroll:(BOOL)a ;
 - (void) _notifyDelegateDidFinishScrolling;
 - (id) qDelegate;
 - (id) qDataSource;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
