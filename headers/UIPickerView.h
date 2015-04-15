
@protocol UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource;
@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource> {

    @"NSMutableArray" _tables;
    @"UIView" _topFrame;
    @"NSMutableArray" _dividers;
    @"NSMutableArray" _selectionBars;
    @"<UIPickerViewDataSource>" _dataSource;
    @"<UIPickerViewDelegate>" _delegate;
    @"UIView" _backgroundView;
    q _numberOfComponents;
    @"UIImageView" _topGradient;
    @"UIImageView" _bottomGradient;
    @"UIView" _foregroundView;
    @"CALayer" _maskGradientLayer;
    @"UIView" _topLineView;
    @"UIView" _bottomLineView;
    {?="needsLayout"b1"delegateRespondsToNumberOfComponentsInPickerView"b1"delegateRespondsToNumberOfRowsInComponent"b1"delegateRespondsToDidSelectRow"b1"delegateRespondsToViewForRow"b1"delegateRespondsToTitleForRow"b1"delegateRespondsToAttributedTitleForRow"b1"delegateRespondsToWidthForComponent"b1"delegateRespondsToRowHeightForComponent"b1"showsSelectionBar"b1"allowsMultipleSelection"b1"allowSelectingCells"b1"soundsDisabled"b1"usesCheckedSelection"b1"skipsBackground"b1} _pickerViewFlags;
    BOOL _usesModernStyle;
    @"UIColor" _textColor;
    @"UIColor" _textShadowColor;
    @"_UIPickerViewTestParameters" _currentTestParameters;
    BOOL _isInLayoutSubviews;
    BOOL _magnifierEnabled;
}
 + ({CGSize=dd}) sizeThatFits:({CGSize=dd})aforInterfaceOrientation:(q)b;
 + ({CGSize=dd}) defaultSizeForCurrentOrientation;
 + ({CGSize=dd}) sizeForCurrentOrientationThatFits:({CGSize=dd})a;
 + (id) _modernCenterCellFont;
 + (id) _modernNonCenterCellFont;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) pickerImageNamePrefix;
 - (id) _orientationImageSuffix;
 - (BOOL) _isLandscapeOrientation;
 - (BOOL) _shouldDrawWithModernStyle;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (q) numberOfComponents;
 - (q) selectedRowInComponent:(q)a;
 - (void) _selectRow:(q)ainComponent:(q)banimated:(BOOL)cnotify:(BOOL)d;
 - (void) _updateSound;
 - (void) setAlpha:(d)a;
 - (void) didMoveToWindow;
 - (void) _updateSelectedRows;
 - (void) reloadAllComponents;
 - (q) _delegateNumberOfComponents;
 - (void) reloadData;
 - (void) reloadComponent:(q)a;
 - (id) _selectionBarSuffix;
 - (id) _popoverSuffix;
 - (id) imageForPickerPiece:(i)a;
 - ({CGSize=dd}) defaultSize;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (q) columnForTableView:(id)a;
 - (d) _tableRowHeight;
 - ({CATransform3D=dddddddddddddddd}) _perspectiveTransform;
 - (void) _setTextColor:(id)a;
 - (d) _delegateRowHeightForComponent:(q)a;
 - (void) layoutSubviews;
 - (id) tableViewForColumn:(q)a;
 - (q) numberOfRowsInComponent:(q)a;
 - (BOOL) _drawsBackground;
 - (id) _createViewForPickerPiece:(i)a;
 - (d) _delegateWidthForComponent:(q)aofCount:(i)bwithSizeLeft:(d)c;
 - (d) _wheelShift;
 - (BOOL) _usesModernStyle;
 - (id) createDividerWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _createColumnWithTableFrame:({CGRect={CGPoint=dd}{CGSize=dd}})arowHeight:(d)b;
 - (id) _createTableWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforComponent:(q)b;
 - (void) setAllowsMultipleSelection:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionBarRectForHeight:(d)a;
 - (BOOL) _magnifierEnabled;
 - (void) _addMagnifierLinesForRowHeight:(d)a;
 - (void) _resetSelectionOfTables;
 - (q) _delegateNumberOfRowsInComponent:(q)a;
 - ({CGSize=dd}) _sizeThatFits:({CGSize=dd})a;
 - (void) _updateWithOldSize:({CGSize=dd})anewSize:({CGSize=dd})b;
 - (void) _noteScrollingFinishedForComponent:(q)a;
 - (void) _sendSelectionChangedForComponent:(q)anotify:(BOOL)b;
 - (void) _sendSelectionChangedFromTable:(id)anotify:(BOOL)b;
 - (void) selectRow:(q)ainComponent:(q)banimated:(BOOL)c;
 - (id) _textColor;
 - (id) _delegateAttributedTitleForRow:(q)aforComponent:(q)b;
 - (id) _delegateTitleForRow:(q)aforComponent:(q)b;
 - (void) _iterateOnCurrentTest;
 - (void) _completeCurrentTest;
 - (void) _sendCheckedRow:(q)ainTableView:(id)bchecked:(BOOL)c;
 - (BOOL) _soundsEnabled;
 - (BOOL) _usesCheckSelection;
 - (void) _performScrollTest:(id)awithIterations:(q)browsToScroll:(q)cinComponent:(q)d;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) setSoundsEnabled:(BOOL)a;
 - (void) reloadDataForColumn:(i)a;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedWidth;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (d) scrollAnimationDuration;
 - ({CGSize=dd}) rowSizeForComponent:(q)a;
 - (q) numberOfRowsInColumn:(q)a;
 - (id) viewForRow:(q)aforComponent:(q)b;
 - (void) reloadAllPickerPieces;
 - (void) setShowsSelectionIndicator:(BOOL)a;
 - (BOOL) showsSelectionIndicator;
 - (BOOL) allowsMultipleSelection;
 - (void) _setUsesCheckedSelection:(BOOL)a;
 - (BOOL) _usesCheckedSelection;
 - (void) _setDrawsBackground:(BOOL)a;
 - ({_NSRange=QQ}) visibleRowsForColumn:(i)a;
 - (i) selectedRowForColumn:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _effectiveTableViewFrameForColumn:(q)a;
 - (void) selectRow:(i)ainColumn:(i)banimated:(BOOL)c;
 - (void) _setMagnifierEnabled:(BOOL)a;
 - (void) _setUsesModernStyle:(BOOL)a;
 - (id) _highlightColor;
 - (void) _setHighlightColor:(id)a;
 - (id) _textShadowColor;
 - (void) _setTextShadowColor:(id)a;
 - (BOOL) _isInLayoutSubviews;
 - (void) _setInLayoutSubviews:(BOOL)a;
 - (BOOL) isAccessibilityElementByDefault;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (q) numberOfColumns;
 - (void) setBackgroundColor:(id)a;
 - (id) dataSource;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsLayout;
 - (void) setDataSource:(id)a;
 - (void) reload;
 - (id) _contentView;
 - (void) setHidden:(BOOL)a;


@end
