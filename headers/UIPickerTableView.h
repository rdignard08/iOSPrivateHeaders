
@protocol UITableViewDelegate;
@interface UIPickerTableView : UITableView <UITableViewDelegate> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _selectionBarRect;
    q _selectionBarRow;
    @"NSMutableIndexSet" _checkedRows;
    d _lastClickedOffset;
    q _lastSelectedRow;
    BOOL _usesModernStyle;
    @"UIColor" _textColor;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _visibleRect;
    @"NSMutableArray" _referencingCells;
    {?="allowsMultipleSelection"b1"scrollingDirection"b2"didSelectDisabled"b1"skipRowChangeNotifications"b1"scrollingForSelection"b1"pickerViewImplementsSelectionBarChanged"b2"cancellingAnimation"b1"updatingContentInset"b1} _pickerTableFlags;
}

 - (void) dealloc;
 - (id) _pickerView;
 - (void) _setTextColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(q)bvisibleRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) layoutSubviews;
 - (q) selectionBarRow;
 - (BOOL) _usesModernStyle;
 - (void) setSelectionBarRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) selectRow:(q)aanimated:(BOOL)bnotify:(BOOL)c;
 - (BOOL) isRowChecked:(q)a;
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
 - (void) _setSelectionBarRow:(q)a;
 - ({CGPoint=dd}) contentOffsetForRowAtIndexPath:(id)a;
 - (void) _notifyContentOffsetChange;
 - (id) _checkedRows;
 - (BOOL) _scrollRowAtIndexPathToSelectionBar:(id)aanimated:(BOOL)b;
 - (d) _yRangingFromZeroTo:(d)aforUnitY:(d)b;
 - (d) _viewYForUnitY:(d)a;
 - (d) _rotationForCellCenterY:(d)a;
 - (d) _distanceToCenterForY:(d)a;
 - (d) _yForY:(d)a;
 - (d) _unitYForViewY:(d)a;
 - (d) _zForUnitY:(d)a;
 - (void) _setContentOffset:({CGPoint=dd})anotify:(BOOL)b;
 - ({CATransform3D=dddddddddddddddd}) _transformForCellAtY:(d)a;
 - (void) _playClickIfNecessary;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionBarRect;
 - (BOOL) didSelectDisabled:(BOOL)a;
 - (void) _scrollingFinished;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionBarRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) _zCoordinateForYCoordinate:(d)a;
 - (q) lastSelectedRow;
 - (void) setLastSelectedRow:(q)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
