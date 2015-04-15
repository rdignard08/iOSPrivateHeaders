
@interface _UIQueuingScrollView : UIScrollView {

    @"<_UIQueuingScrollViewDelegate>" _qDelegate;
    @"<_UIQueuingScrollViewDataSource>" _qDataSource;
    q _navigationOrientation;
    @"NSArray" _views;
    @"NSArray" _wrapperViews;
    @"UIView" _pendingVisibleView;
    d _pageSpacing;
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
 - (Q) _abuttedPagingEdges;
 - (BOOL) _gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (void) _scrollViewAnimationEnded:(id)afinished:(BOOL)b;
 - (id) _visibleView;
 - (void) setPageSpacing:(d)a;
 - (d) pageSpacing;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})anavigationOrientation:(q)b;
 - (void) setQDelegate:(id)a;
 - (void) setQDataSource:(id)a;
 - (void) _setFrameAndApplyPageSpacing:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _invalidateOffscreenViews;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) disabledScrollingRegion;
 - (void) setDisabledScrollingRegion:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) visibleView;
 - (BOOL) isPreviousScrollCompatibleWithScrollInDirection:(q)a;
 - (void) setView:(id)adirection:(q)banimated:(BOOL)ccompletion:(@?)d;
 - (BOOL) isManualScrollInProgress;
 - (void) _boundsDidChangeToSize:({CGSize=dd})a;
 - (BOOL) _isScrollInProgress:(BOOL)a;
 - (q) _navigationDirectionForActiveScroll:(BOOL)a;
 - (void) _didScrollWithAnimation:(BOOL)aforce:(BOOL)b;
 - (void) _didEndManualScroll;
 - (void) _didEndDraggingManualScroll;
 - (void) _didEndProgrammaticScroll;
 - (void) _adjustContentInsets;
 - (BOOL) _dataSourceProvidesViews;
 - (id) _viewAtIndex:(q)aloadingIfNecessary:(BOOL)bupdatingContents:(BOOL)canimated:(BOOL)d;
 - (id) _viewBefore:(BOOL)aview:(id)b;
 - (void) _flushView:(id)aanimated:(BOOL)b;
 - (void) _setWrappedViewAtIndex:(q)awithView:(id)b;
 - (id) _viewBeforeView:(id)a;
 - (id) _viewAfterView:(id)a;
 - (id) _dequeueViewForIndex:(q)a;
 - (id) _requestViewForIndex:(q)a;
 - (void) _replaceViews:(id)aupdatingContents:(BOOL)badjustContentInsets:(BOOL)canimated:(BOOL)d;
 - (void) _cleanUpCompletionState:(id)adidFinish:(BOOL)bdidComplete:(BOOL)c;
 - (void) _notifyDelegateDidEndManualScroll:(BOOL)atoRevealView:(id)bdirection:(q)canimated:(BOOL)ddidFinish:(BOOL)edidComplete:(BOOL)f;
 - (void) _enqueueCompletionState:(id)a;
 - (void) _notifyDelegateWillManuallyScroll:(BOOL)atoRevealView:(id)bconcealingView:(id)canimated:(BOOL)d;
 - (void) _notifyDelegateDidCommitManualScroll:(BOOL)atoRevealView:(id)bconcealView:(id)cdirection:(q)danimated:(BOOL)ecanComplete:(BOOL)f;
 - (void) _enqueueAnimatedScrollInDirection:(q)awithView:(id)bcompletion:(@?)c;
 - (q) _navigationDirectionFromCurrentOffset;
 - (BOOL) _isDeceleratingInOppositionToNavigationDirection:(q)a;
 - (void) _commitGestureDrivenScrollRevealingView:(id)aconcealingView:(id)binDirection:(q)ccanComplete:(BOOL)d;
 - (void) _notifyDelegateDidBailoutOfScrollAndRevealedView:(id)a;
 - (void) _didEndScroll:(BOOL)a;
 - (void) _notifyDelegateDidFinishScrolling;
 - (id) qDelegate;
 - (id) qDataSource;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end