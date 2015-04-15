
@interface UIRefreshControl : UIControl {

    q _style;
    @"_UIRefreshControlContentView" _contentView;
    @"UIScrollView" _scrollView;
    d _refreshControlHeight;
    d _visibleHeight;
    d _snappingHeight;
    d _additionalTopInset;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _appliedInsets;
    i _refreshControlState;
}
 + (Class) _contentViewClassForStyle:(q)a;
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
 - (d) _refreshControlHeight;
 - (BOOL) _isApplyingInsets;
 - (i) refreshControlState;
 - (void) _removeInsets;
 - (void) _addInsets;
 - (void) beginRefreshing;
 - (void) endRefreshing;
 - ({UIEdgeInsets=dddd}) _appliedInsets;
 - (id) initWithStyle:(q)a;
 - (id) _attributedTitle;
 - (void) _setAttributedTitle:(id)a;
 - (id) attributedTitle;
 - (d) _visibleHeight;
 - (void) _updateSnappingHeight;
 - (void) setRefreshControlState:(i)a;
 - (void) _resizeToFitContents;
 - (void) _removeInsetHeight:(d)a;
 - (void) _addInsetHeight:(d)a;
 - (d) revealedFraction;
 - (i) _recomputeNewState;
 - (void) _updateHiddenStateIfNeeded;
 - (void) _updateConcealingMask;
 - ({CGPoint=dd}) _originForContentOffset:({CGPoint=dd})a;
 - (d) _visibleHeightForContentOffset:({CGPoint=dd})aorigin:({CGPoint=dd})b;
 - (void) _setVisibleHeight:(d)a;
 - (d) _stiffnessForVelocity:(d)a;
 - (void) _setRefreshControlState:(i)anotify:(BOOL)b;
 - (BOOL) _canTransitionFromState:(i)atoState:(i)b;
 - (BOOL) isRefreshing;
 - (d) _snappingHeight;
 - (d) _scrollViewHeight;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setBackgroundColor:(id)a;
 - (q) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _contentView;


@end
