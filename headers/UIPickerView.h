
@protocol UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource;
@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource> {

    @"NSMutableArray" _tables;
    @"UIView" _topFrame;
    @"NSMutableArray" _dividers;
    @"NSMutableArray" _selectionBars;
    @"<UIPickerViewDataSource>" _dataSource;
    @"<UIPickerViewDelegate>" _delegate;
    @"UIView" _backgroundView;
    long long _numberOfComponents;
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
 + ({CGSize=dd}) sizeThatFits:({CGSize=dd})aforInterfaceOrientation:(long long)b;
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
 - (long long) numberOfComponents;
 - (long long) selectedRowInComponent:(long long)a;
 - (void) _selectRow:(long long)ainComponent:(long long)banimated:(BOOL)cnotify:(BOOL)d;
 - (void) _updateSound;
 - (void) setAlpha:(double)a;
 - (void) didMoveToWindow;
 - (void) _updateSelectedRows;
 - (void) reloadAllComponents;
 - (long long) _delegateNumberOfComponents;
 - (void) reloadData;
 - (void) reloadComponent:(long long)a;
 - (id) _selectionBarSuffix;
 - (id) _popoverSuffix;
 - (id) imageForPickerPiece:(int)a;
 - ({CGSize=dd}) defaultSize;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (long long) columnForTableView:(id)a;
 - (double) _tableRowHeight;
 - ({CATransform3D=dddddddddddddddd}) _perspectiveTransform;
 - (void) _setTextColor:(id)a;
 - (double) _delegateRowHeightForComponent:(long long)a;
 - (void) layoutSubviews;
 - (id) tableViewForColumn:(long long)a;
 - (long long) numberOfRowsInComponent:(long long)a;
 - (BOOL) _drawsBackground;
 - (id) _createViewForPickerPiece:(int)a;
 - (double) _delegateWidthForComponent:(long long)aofCount:(int)bwithSizeLeft:(double)c;
 - (double) _wheelShift;
 - (BOOL) _usesModernStyle;
 - (id) createDividerWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _createColumnWithTableFrame:({CGRect={CGPoint=dd}{CGSize=dd}})arowHeight:(double)b;
 - (id) _createTableWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforComponent:(long long)b;
 - (void) setAllowsMultipleSelection:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionBarRectForHeight:(double)a;
 - (BOOL) _magnifierEnabled;
 - (void) _addMagnifierLinesForRowHeight:(double)a;
 - (void) _resetSelectionOfTables;
 - (long long) _delegateNumberOfRowsInComponent:(long long)a;
 - ({CGSize=dd}) _sizeThatFits:({CGSize=dd})a;
 - (void) _updateWithOldSize:({CGSize=dd})anewSize:({CGSize=dd})b;
 - (void) _noteScrollingFinishedForComponent:(long long)a;
 - (void) _sendSelectionChangedForComponent:(long long)anotify:(BOOL)b;
 - (void) _sendSelectionChangedFromTable:(id)anotify:(BOOL)b;
 - (void) selectRow:(long long)ainComponent:(long long)banimated:(BOOL)c;
 - (id) _textColor;
 - (id) _delegateAttributedTitleForRow:(long long)aforComponent:(long long)b;
 - (id) _delegateTitleForRow:(long long)aforComponent:(long long)b;
 - (void) _iterateOnCurrentTest;
 - (void) _completeCurrentTest;
 - (void) _sendCheckedRow:(long long)ainTableView:(id)bchecked:(BOOL)c;
 - (BOOL) _soundsEnabled;
 - (BOOL) _usesCheckSelection;
 - (void) _performScrollTest:(id)awithIterations:(long long)browsToScroll:(long long)cinComponent:(long long)d;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) setSoundsEnabled:(BOOL)a;
 - (void) reloadDataForColumn:(int)a;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedWidth;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (double) scrollAnimationDuration;
 - ({CGSize=dd}) rowSizeForComponent:(long long)a;
 - (long long) numberOfRowsInColumn:(long long)a;
 - (id) viewForRow:(long long)aforComponent:(long long)b;
 - (void) reloadAllPickerPieces;
 - (void) setShowsSelectionIndicator:(BOOL)a;
 - (BOOL) showsSelectionIndicator;
 - (BOOL) allowsMultipleSelection;
 - (void) _setUsesCheckedSelection:(BOOL)a;
 - (BOOL) _usesCheckedSelection;
 - (void) _setDrawsBackground:(BOOL)a;
 - ({_NSRange=QQ}) visibleRowsForColumn:(int)a;
 - (int) selectedRowForColumn:(int)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _effectiveTableViewFrameForColumn:(long long)a;
 - (void) selectRow:(int)ainColumn:(int)banimated:(BOOL)c;
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
 - (long long) numberOfColumns;
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
