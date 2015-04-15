
@interface _UIQueuingScrollView : UIScrollView {

    @"<_UIQueuingScrollViewDelegate>" _qDelegate;
    @"<_UIQueuingScrollViewDataSource>" _qDataSource;
    long long _navigationOrientation;
    @"NSArray" _views;
    @"NSArray" _wrapperViews;
    @"UIView" _pendingVisibleView;
    double _pageSpacing;
    @"NSMutableArray" _viewStateQueue;
    @"NSMutableArray" _completionStateQueue;
    BOOL _manualScrollInProgress;
    {?="delegateInterestedInPendingScrolls"b1"delegateInterestedInCommittedScrolls"b1"delegateInterestedInCompletedScrolls"b1"delegateInterestedInBailedOutScrolls"b1"delegateInterestedFinishedScrolling"b1"delegateCanVetoSubviewLayout"b1"dataSourceSuppliesBeforeView"b1"dataSourceSuppliesAfterView"b1"dataSourceInterestedInFlushedViews"b1} _delegateFlags;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _disabledScrollingRegion;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})aanimated:(BOOL)b;
 - (void) _scrollViewDidEndDraggingWithDeceleration:(BOOL)a;
 - (void) _scrollViewDidEndDecelerating;
 - (unsigned long long) _abuttedPagingEdges;
 - (BOOL) _gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (void) _scrollViewAnimationEnded:(id)afinished:(BOOL)b;
 - (id) _visibleView;
 - (void) setPageSpacing:(double)a;
 - (double) pageSpacing;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})anavigationOrientation:(long long)b;
 - (void) setQDelegate:(id)a;
 - (void) setQDataSource:(id)a;
 - (void) _setFrameAndApplyPageSpacing:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _invalidateOffscreenViews;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) disabledScrollingRegion;
 - (void) setDisabledScrollingRegion:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) visibleView;
 - (BOOL) isPreviousScrollCompatibleWithScrollInDirection:(long long)a;
 - (void) setView:(id)adirection:(long long)banimated:(BOOL)ccompletion:(@?)d;
 - (BOOL) isManualScrollInProgress;
 - (void) _boundsDidChangeToSize:({CGSize=dd})a;
 - (BOOL) _isScrollInProgress:(BOOL)a;
 - (long long) _navigationDirectionForActiveScroll:(BOOL)a;
 - (void) _didScrollWithAnimation:(BOOL)aforce:(BOOL)b;
 - (void) _didEndManualScroll;
 - (void) _didEndDraggingManualScroll;
 - (void) _didEndProgrammaticScroll;
 - (void) _adjustContentInsets;
 - (BOOL) _dataSourceProvidesViews;
 - (id) _viewAtIndex:(long long)aloadingIfNecessary:(BOOL)bupdatingContents:(BOOL)canimated:(BOOL)d;
 - (id) _viewBefore:(BOOL)aview:(id)b;
 - (void) _flushView:(id)aanimated:(BOOL)b;
 - (void) _setWrappedViewAtIndex:(long long)awithView:(id)b;
 - (id) _viewBeforeView:(id)a;
 - (id) _viewAfterView:(id)a;
 - (id) _dequeueViewForIndex:(long long)a;
 - (id) _requestViewForIndex:(long long)a;
 - (void) _replaceViews:(id)aupdatingContents:(BOOL)badjustContentInsets:(BOOL)canimated:(BOOL)d;
 - (void) _cleanUpCompletionState:(id)adidFinish:(BOOL)bdidComplete:(BOOL)c;
 - (void) _notifyDelegateDidEndManualScroll:(BOOL)atoRevealView:(id)bdirection:(long long)canimated:(BOOL)ddidFinish:(BOOL)edidComplete:(BOOL)f;
 - (void) _enqueueCompletionState:(id)a;
 - (void) _notifyDelegateWillManuallyScroll:(BOOL)atoRevealView:(id)bconcealingView:(id)canimated:(BOOL)d;
 - (void) _notifyDelegateDidCommitManualScroll:(BOOL)atoRevealView:(id)bconcealView:(id)cdirection:(long long)danimated:(BOOL)ecanComplete:(BOOL)f;
 - (void) _enqueueAnimatedScrollInDirection:(long long)awithView:(id)bcompletion:(@?)c;
 - (long long) _navigationDirectionFromCurrentOffset;
 - (BOOL) _isDeceleratingInOppositionToNavigationDirection:(long long)a;
 - (void) _commitGestureDrivenScrollRevealingView:(id)aconcealingView:(id)binDirection:(long long)ccanComplete:(BOOL)d;
 - (void) _notifyDelegateDidBailoutOfScrollAndRevealedView:(id)a;
 - (void) _didEndScroll:(BOOL)a;
 - (void) _notifyDelegateDidFinishScrolling;
 - (id) qDelegate;
 - (id) qDataSource;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
