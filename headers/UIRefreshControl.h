
@interface UIRefreshControl : UIControl {

    long long _style;
    @"_UIRefreshControlContentView" _contentView;
    @"UIScrollView" _scrollView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _appliedInsets;
    int _refreshControlState;
}
 + (Class) _contentViewClassForStyle:(long long)a;
 + (id) _defaultColor;

 - (void) af_beginRefreshing;
 - (void) af_endRefreshing;
 - (void) setRefreshingWithStateOfTask:(id)a;
 - (void) setRefreshingWithStateOfOperation:(id)a;
 - (void) _update;
 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a;
 - (void) setAttributedTitle:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) tintColor;
 - (void) setTintColor:(id)a;
 - (void) sizeToFit;
 - (void) didMoveToSuperview;
 - (void) willMoveToSuperview:(id)a;
 - (void) _didScroll;
 - (void) _setTintColor:(id)a;
 - (id) _tintColor;
 - (double) _refreshControlHeight;
 - (BOOL) _isApplyingInsets;
 - (int) refreshControlState;
 - (void) _removeInsets;
 - (void) _addInsets;
 - (void) beginRefreshing;
 - (void) endRefreshing;
 - ({UIEdgeInsets=dddd}) _appliedInsets;
 - (id) initWithStyle:(long long)a;
 - (id) _attributedTitle;
 - (void) _setAttributedTitle:(id)a;
 - (id) attributedTitle;
 - (double) _visibleHeight;
 - (void) _updateSnappingHeight;
 - (void) setRefreshControlState:(int)a;
 - (void) _resizeToFitContents;
 - (void) _removeInsetHeight:(double)a;
 - (void) _addInsetHeight:(double)a;
 - (double) revealedFraction;
 - (int) _recomputeNewState;
 - (void) _updateHiddenStateIfNeeded;
 - (void) _updateConcealingMask;
 - ({CGPoint=dd}) _originForContentOffset:({CGPoint=dd})a;
 - (double) _visibleHeightForContentOffset:({CGPoint=dd})aorigin:({CGPoint=dd})b;
 - (void) _setVisibleHeight:(double)a;
 - (double) _stiffnessForVelocity:(double)a;
 - (void) _setRefreshControlState:(int)anotify:(BOOL)b;
 - (BOOL) _canTransitionFromState:(int)atoState:(int)b;
 - (BOOL) isRefreshing;
 - (double) _snappingHeight;
 - (double) _scrollViewHeight;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setBackgroundColor:(id)a;
 - (long long) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _contentView;


@end
