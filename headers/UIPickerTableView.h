
@protocol UITableViewDelegate;
@interface UIPickerTableView : UITableView <UITableViewDelegate> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _selectionBarRect;
    long long _selectionBarRow;
    @"NSMutableIndexSet" _checkedRows;
    double _lastClickedOffset;
    long long _lastSelectedRow;
    BOOL _usesModernStyle;
    @"UIColor" _textColor;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _visibleRect;
    @"NSMutableArray" _referencingCells;
    {?="allowsMultipleSelection"b1"scrollingDirection"b2"didSelectDisabled"b1"skipRowChangeNotifications"b1"scrollingForSelection"b1"pickerViewImplementsSelectionBarChanged"b2"cancellingAnimation"b1"updatingContentInset"b1} _pickerTableFlags;
}

 - (void) dealloc;
 - (id) _pickerView;
 - (void) _setTextColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(long long)bvisibleRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) layoutSubviews;
 - (long long) selectionBarRow;
 - (BOOL) _usesModernStyle;
 - (void) setSelectionBarRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) selectRow:(long long)aanimated:(BOOL)bnotify:(BOOL)c;
 - (BOOL) isRowChecked:(long long)a;
 - (id) _textColor;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (id) tableView:(id)awillSelectRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (void) scrollViewWillBeginDragging:(id)a;
 - (void) scrollViewWillEndDragging:(id)awithVelocity:({CGPoint=dd})btargetContentOffset:(N^{CGPoint=dd})c;
 - (void) scrollViewDidEndDragging:(id)awillDecelerate:(BOOL)b;
 - (void) scrollViewDidEndDecelerating:(id)a;
 - (void) scrollViewDidEndScrollingAnimation:(id)a;
 - (BOOL) scrollViewShouldScrollToTop:(id)a;
 - (void) _setUsesModernStyle:(BOOL)a;
 - (void) setContentOffset:({CGPoint=dd})a;
 - (BOOL) _beginTrackingWithEvent:(id)a;
 - (void) _scrollViewAnimationEnded:(id)afinished:(BOOL)b;
 - (void) _updateContentInsets;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _visibleBounds;
 - (BOOL) _shouldWrapCells;
 - (void) _rectChangedWithNewSize:({CGSize=dd})aoldSize:({CGSize=dd})b;
 - (id) _containerView;
 - (id) _anyDateLabel;
 - (void) _setSelectionBarRow:(long long)a;
 - ({CGPoint=dd}) contentOffsetForRowAtIndexPath:(id)a;
 - (void) _notifyContentOffsetChange;
 - (id) _checkedRows;
 - (BOOL) _scrollRowAtIndexPathToSelectionBar:(id)aanimated:(BOOL)b;
 - (double) _yRangingFromZeroTo:(double)aforUnitY:(double)b;
 - (double) _viewYForUnitY:(double)a;
 - (double) _rotationForCellCenterY:(double)a;
 - (double) _distanceToCenterForY:(double)a;
 - (double) _yForY:(double)a;
 - (double) _unitYForViewY:(double)a;
 - (double) _zForUnitY:(double)a;
 - (void) _setContentOffset:({CGPoint=dd})anotify:(BOOL)b;
 - ({CATransform3D=dddddddddddddddd}) _transformForCellAtY:(double)a;
 - (void) _playClickIfNecessary;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionBarRect;
 - (BOOL) didSelectDisabled:(BOOL)a;
 - (void) _scrollingFinished;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionBarRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (double) _zCoordinateForYCoordinate:(double)a;
 - (long long) lastSelectedRow;
 - (void) setLastSelectedRow:(long long)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
