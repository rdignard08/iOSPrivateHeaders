
@protocol UIPickerTableViewContainerDelegate, UITableViewDataSource;
@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {

    @"UIPickerTableView" _topTable;
    @"UIPickerTableView" _middleTable;
    @"UIPickerTableView" _bottomTable;
    @"UIView" _topContainerView;
    @"UIView" _middleContainerView;
    @"UIView" _bottomContainerView;
    d _middleBarHeight;
    d _rowHeight;
    @"UIPickerView" _pickerView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _tableFrame;
    {CATransform3D="m11"d"m12"d"m13"d"m14"d"m21"d"m22"d"m23"d"m24"d"m31"d"m32"d"m33"d"m34"d"m41"d"m42"d"m43"d"m44"d} _perspectiveTransform;
    @"UIColor" __textColor;
    d _leftHitTestExtension;
    d _rightHitTestExtension;
}

 - (void) dealloc;
 - (id) _allVisibleCells;
 - (BOOL) _pointLiesWithinEffectiveTableBounds:({CGPoint=dd})a;
 - (id) _visibleCellClosestToPoint:({CGPoint=dd})ainView:(id)b;
 - (id) _preferredTable;
 - (void) reloadData;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atableFrame:({CGRect={CGPoint=dd}{CGSize=dd}})bmiddleBarHeight:(d)crowHeight:(d)dpickerView:(id)etransform:({CATransform3D=dddddddddddddddd})f;
 - (void) _setTextColor:(id)a;
 - (void) setRowHeight:(d)a;
 - (q) numberOfRowsInSection:(q)a;
 - (id) cellForRowAtIndexPath:(id)a;
 - (q) selectionBarRow;
 - (void) clearDataSourceAndDelegate;
 - (void) setAllowsMultipleSelection:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _tableFrame;
 - (void) setLeftHitTestExtension:(d)a;
 - (void) setRightHitTestExtension:(d)a;
 - (d) rowHeight;
 - (void) setSelectionBarRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) selectRow:(q)aanimated:(BOOL)bnotify:(BOOL)c;
 - ({_NSRange=QQ}) _visibleGlobalRows;
 - (BOOL) _containsTable:(id)a;
 - (BOOL) isRowChecked:(q)a;
 - (id) _textColor;
 - (void) _sendCheckedRow:(q)ainTableView:(id)bchecked:(BOOL)c;
 - (BOOL) _soundsEnabled;
 - (BOOL) _usesCheckSelection;
 - (void) _pickerTableViewDidChangeContentOffset:(id)a;
 - (void) pickerTableView:(id)adidChangeSelectionBarRowFrom:(q)bto:(q)c;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) beginUpdates;
 - (void) endUpdates;
 - (BOOL) _scrollRowAtIndexPathToSelectionBar:(id)aanimated:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionBarRect;
 - (id) _createContainerViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _createTableViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acontainingFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) _centerTableInContainer:(id)a;
 - (d) _horizontalBiasForEndTables;
 - ({CATransform3D=dddddddddddddddd}) _transformForTableWithPerspectiveTranslationX:(d)a;
 - ({CATransform3D=dddddddddddddddd}) _transformForTableWithTranslationX:(d)a;
 - (void) _moveTableViewIfNecessary:(id)atoContentOffset:({CGPoint=dd})b;
 - ({CATransform3D=dddddddddddddddd}) perspectiveTransform;
 - (void) setPerspectiveTransform:({CATransform3D=dddddddddddddddd})a;
 - (d) leftHitTestExtension;
 - (d) rightHitTestExtension;


@end
