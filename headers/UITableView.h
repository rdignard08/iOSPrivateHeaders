
@protocol UIGestureRecognizerDelegatePrivate, UIScrollViewDelegate, NSCoding;
@interface UITableView : UIScrollView <UIGestureRecognizerDelegatePrivate, UIScrollViewDelegate, NSCoding> {

    @"<UITableViewDataSource>" _dataSource;
    @"UITableViewRowData" _rowData;
    d _rowHeight;
    d _sectionHeaderHeight;
    d _sectionFooterHeight;
    d _estimatedRowHeight;
    d _estimatedSectionHeaderHeight;
    d _estimatedSectionFooterHeight;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _visibleBounds;
    {_NSRange="location"Q"length"Q} _visibleRows;
    @"NSMutableArray" _visibleCells;
    @"NSIndexPath" _firstResponderIndexPath;
    @"UIView" _firstResponderView;
    i _firstResponderViewType;
    @"NSMutableDictionary" _reusableTableCells;
    @"NSMutableDictionary" _nibMap;
    @"NSMutableDictionary" _headerFooterNibMap;
    @"NSMutableDictionary" _nibExternalObjectsTables;
    @"UITableViewCell" _topSeparatorCell;
    @"UIView" _topSeparator;
    @"NSMutableArray" _extraSeparators;
    ^{__CFDictionary=} _visibleHeaderViews;
    ^{__CFDictionary=} _visibleFooterViews;
    @"NSMutableDictionary" _reusableHeaderFooterViews;
    @"NSMutableArray" _highlightedIndexPaths;
    @"NSMutableArray" _selectedIndexPaths;
    q _swipeToDeleteSection;
    q _swipeToDeleteRow;
    @"NSIndexPath" _pendingSelectionIndexPath;
    @"NSMutableArray" _pendingDeselectionIndexPaths;
    @"UIView" _newContentView;
    @"_UITableViewDeleteAnimationSupport" _deleteAnimationSupport;
    @"_UITableViewReorderingSupport" _reorderingSupport;
    @"UIView" _backgroundView;
    @"UIView" _clearBlendingView;
    @"UITableViewWrapperView" _wrapperView;
    @"UITableViewIndex" _index;
    @"UIView" _tableHeaderBackgroundView;
    @"UIView" _tableHeaderView;
    @"UIView" _tableFooterView;
    @"UITableViewCountView" _countLabel;
    @"NSArray" _sectionIndexTitlesForTableView;
    @"UITableViewIndexOverlayIndicatorView" _indexOverlayIndicatorView;
    @"NSTimer" _indexOverlayTimer;
    @"NSTimer" _indexOverlayIndicatorEventIgnoreTimer;
    q _currentIndexTitleIndex;
    @"UITableViewIndexOverlaySelectionView" _indexOverlaySelectionView;
    q _tableReloadingSuspendedCount;
    q _sectionIndexMinimumDisplayRowCount;
    q _updateAnimationCount;
    @"NSMutableArray" _insertItems;
    @"NSMutableArray" _deleteItems;
    @"NSMutableArray" _reloadItems;
    @"NSMutableArray" _moveItems;
    @"UIColor" _separatorColor;
    @"UIColor" _separatorTopShadowColor;
    @"UIColor" _separatorBottomShadowColor;
    @"UIVisualEffect" _separatorEffect;
    @"UIColor" _checkmarkColor;
    @"UIColor" _sectionBorderColor;
    @"UIColor" _indexColor;
    @"UIColor" _indexBackgroundColor;
    @"UIColor" _indexTrackingBackgroundColor;
    @"NSArray" _defaultSectionIndexTitles;
    @"UISwipeGestureRecognizer" _swipeGestureRecognizer;
    @"UIGobblerGestureRecognizer" _swipeToDeleteGobblerGestureRecognizer;
    @"UITableViewCell" _swipeToDeleteCell;
    q _updateCount;
    @"NSIndexPath" _displayingCellContentStringIndexPath;
    @"UILongPressGestureRecognizer" _longPressGestureRecognizer;
    @"NSTimer" _longPressAutoscrollTimer;
    i _longPressAutoscrollDirection;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _sectionContentInset;
    d _sectionBorderWidth;
    @"UITouch" _currentTouch;
    @"UIRefreshControl" _refreshControl;
    @"NSMutableDictionary" _cellClassDict;
    @"NSMutableDictionary" _headerFooterClassDict;
    d _topPadding;
    d _bottomPadding;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _separatorInset;
    id _updateCompletionHandler;
    @"UIImage" _multiSelectCheckmarkImage;
    @"UIImage" _multiSelectNotSelectedImage;
    id _deferredEditingHandler;
    @"NSMutableArray" _hiddenSeparatorIndexPaths;
    @"NSMutableDictionary" _tentativeCells;
    ^{__CFDictionary=} _tentativeHeaderViews;
    ^{__CFDictionary=} _tentativeFooterViews;
    @"NSMutableSet" _clientGesturesRequiringTableGesturesToFail;
    @"_UITableViewUpdateSupport" _currentUpdate;
    {CGPoint="x"d"y"d} _postLayoutContentOffset;
    {_NSRange="location"Q"length"Q} _preReloadVisibleRowRange;
    @"UIWindow" _lastWindow;
    i _focusedViewType;
    {?="dataSourceNumberOfRowsInSection"b1"dataSourceCellForRow"b1"dataSourceNumberOfSectionsInTableView"b1"dataSourceTitleForHeaderInSection"b1"dataSourceTitleForFooterInSection"b1"dataSourceDetailTextForHeaderInSection"b1"dataSourceCommitEditingStyle"b1"dataSourceSectionIndexTitlesForTableView"b1"dataSourceSectionForSectionIndexTitle"b1"dataSourceCanEditRow"b1"dataSourceCanMoveRow"b1"dataSourceCanUpdateRow"b1"dataSourceShouldShowMenu"b1"dataSourceCanPerformAction"b1"dataSourcePerformAction"b1"dataSourceIndexPathForSectionIndexTitle"b1"delegateEditingStyleForRowAtIndexPath"b1"delegateTitleForDeleteConfirmationButtonForRowAtIndexPath"b1"delegateEditActionsForRowAtIndexPath"b1"delegateShouldIndentWhileEditing"b1"dataSourceMoveRow"b1"delegateCellForRow"b1"delegateWillDisplayCell"b1"delegateDidEndDisplayingCell"b1"delegateDidEndDisplayingSectionHeader"b1"delegateDidEndDisplayingSectionFooter"b1"delegateHeightForRow"b1"delegateHeightForSectionHeader"b1"delegateTitleWidthForSectionHeader"b1"delegateHeightForSectionFooter"b1"delegateTitleWidthForSectionFooter"b1"delegateEstimatedHeightForRow"b1"delegateEstimatedHeightForSectionHeader"b1"delegateEstimatedHeightForSectionFooter"b1"delegateViewForHeaderInSection"b1"delegateViewForFooterInSection"b1"delegateDisplayedItemCountForRowCount"b1"delegateDisplayStringForRowCount"b1"delegateAccessoryTypeForRow"b1"delegateAccessoryButtonTappedForRow"b1"delegateWillSelectRow"b1"delegateWillDeselectRow"b1"delegateDidSelectRow"b1"delegateDidDeselectRow"b1"delegateWillBeginEditing"b1"delegateDidEndEditing"b1"delegateWillMoveToRow"b1"delegateIndentationLevelForRow"b1"delegateWantsHeaderForSection"b1"delegateHeightForRowsInSection"b1"delegateMargin"b1"delegateHeaderTitleAlignment"b1"delegateFooterTitleAlignment"b1"delegateFrameForSectionIndexGivenProposedFrame"b1"delegateDidFinishReload"b1"delegateHeightForHeader"b1"delegateHeightForFooter"b1"delegateViewForHeader"b1"delegateViewForFooter"b1"delegateCalloutTargetRectForCell"b1"delegateShouldShowMenu"b1"delegateCanPerformAction"b1"delegatePerformAction"b1"delegateWillBeginReordering"b1"delegateDidEndReordering"b1"delegateDidCancelReordering"b1"delegateWillDisplayHeaderViewForSection"b1"delegateWillDisplayFooterViewForSection"b1"delegateShouldHighlightRow"b1"delegateDidHighlightRow"b1"delegateDidUnhighlightRow"b1"delegateTitleForSwipeAccessory"b1"delegateBackgroundColorForDeleteConfirmationButton"b1"delegateBackgroundColorForSwipeAccessory"b1"delegateDeleteConfirmationButton"b1"delegateSwipeAccessory"b1"delegateSwipeAccessoryPushed"b1"delegateShouldDrawTopSeparatorForSection"b1"delegateWillBeginSwiping"b1"delegateDidEndSwiping"b1"delegateCanFocusRow_deprecated"b1"delegateCanFocusRow"b1"delegateDidFocusRow"b1"delegateDidUnfocusRow"b1"delegateShouldChangeFocusedItem"b1"delegateIndexPathForPreferredFocusedItem"b1"style"b1"separatorStyle"b3"wasEditing"b1"isEditing"b1"isEditingAllRows"b1"scrollsToSelection"b1"reloadSkippedDuringSuspension"b1"updating"b1"displaySkippedDuringSuspension"b1"needsReload"b1"updatingVisibleCellsManually"b1"scheduledUpdateVisibleCells"b1"scheduledUpdateVisibleCellsFrames"b1"warnForForcedCellUpdateDisabled"b1"displayTopSeparator"b1"countStringInsignificantRowCount"b4"needToAdjustExtraSeparators"b1"overlapsSectionHeaderViews"b1"ignoreTouchSelect"b1"lastHighlightedRowActive"b1"reloading"b1"allowsSelection"b1"allowsSelectionDuringEditing"b1"allowsMultipleSelection"b1"allowsMultipleSelectionDuringEditing"b1"showsSelectionImmediatelyOnTouchBegin"b1"indexHidden"b1"indexHiddenForSearch"b1"defaultShowsHorizontalScrollIndicator"b1"defaultShowsVerticalScrollIndicator"b1"sectionIndexTitlesLoaded"b1"tableHeaderViewShouldAutoHide"b1"tableHeaderViewIsHidden"b1"tableHeaderViewWasHidden"b1"tableHeaderViewShouldPin"b1"hideScrollIndicators"b1"sendReloadFinished"b1"keepFirstResponderWhenInteractionDisabled"b1"keepFirstResponderVisibleOnBoundsChange"b1"dontDrawTopShadowInGroupedSections"b1"forceStaticHeadersAndFooters"b1"displaysCellContentStringsOnTapAndHold"b1"displayingCellContentStringCallout"b1"longPressAutoscrollingActive"b1"adjustsRowHeightsForSectionLocation"b1"inInit"b1"inSetBackgroundColor"b1"usingCustomBackgroundView"b1"rowDataIndexPathsAreValidForCurrentCells"b1"committingDelete"b1"didReloadWhileCommittingDelete"b1"editingForSwipeDelete"b1"wasEditingForSwipeToDeleteBeforeSuspendedReload"b1"ignorePinnedTableHeaderUpdates"b1"navigationGestureWasEnabledBeforeSwipeToDelete"b1"didDisableNavigationGesture"b1"separatorsDrawAsOverlay"b1"swipeToDeleteRowIsBeingDeleted"b1"drawsSeparatorAtTopOfSections"b1"separatorBackdropOverlayBlendMode"b3"separatorsDrawInVibrantLightMode"b1"wrapCells"b1"showingIndexIndicatorOverlay"b1"showingIndexSelectionOverlay"b1"loadingOffscreenViews"b1"externalScreenHasTouch"b1"ignoringWheelEventsOnIndexOverlayIndicator"b1"deleteCancelationAnimationInProgress"b1"manuallyManagesSwipeUI"b1"allowsReorderingWhenNotEditing"b1"needsDeleteConfirmationCleanup"b1"resetContentOffsetAfterLayout"b1"cellsSelfSize"b1"usingCustomLayoutMargins"b1"settingDefaultLayoutMargins"b1"deallocating"b1"updateFocusAfterItemAnimations"b1"remembersPreviouslyFocusedItem"b1} _tableFlags;
    @"NSIndexPath" _focusedCellIndexPath;
}
 + (void) initialize;
 + (void) _initializeForIdiom:(q)a;
 + (id) _externalTableBackgroundColor;
 + (id) _externalTableSeparatorColor;
 + (id) _alternateExternalTableBackgroundColor;
 + (id) _alternateExternalSeparatorColor;
 + (id) _alternateUISwitchableSelectorPairs;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) didMoveToWindow;
 - (void) reloadData;
 - (void) setRowHeight:(d)a;
 - (void) setShowsVerticalScrollIndicator:(BOOL)a;
 - (void) layoutSubviews;
 - (q) numberOfRowsInSection:(q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForRowAtIndexPath:(id)a;
 - (id) cellForRowAtIndexPath:(id)a;
 - (void) setAllowsMultipleSelection:(BOOL)a;
 - (d) rowHeight;
 - ({_NSRange=QQ}) _visibleGlobalRows;
 - (id) dequeueReusableCellWithIdentifier:(id)a;
 - (void) scrollViewWillEndDragging:(id)awithVelocity:({CGPoint=dd})btargetContentOffset:(N^{CGPoint=dd})c;
 - (void) scrollViewDidEndDragging:(id)awillDecelerate:(BOOL)b;
 - (void) scrollViewDidEndDecelerating:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (BOOL) allowsMultipleSelection;
 - (BOOL) _gestureRecognizer:(id)ashouldBeRequiredToFailByGestureRecognizer:(id)b;
 - (void) setShowsHorizontalScrollIndicator:(BOOL)a;
 - (id) indexPathForCell:(id)a;
 - (q) numberOfSections;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (void) _wheelChangedWithEvent:(id)a;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (id) preferredFocusedItem;
 - (void) _ensureViewsAreLoadedInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _allowsFocusToLeaveViaHeading:(Q)a;
 - (void) _scrollViewWillEndDraggingWithVelocity:({CGPoint=dd})atargetContentOffset:(^{CGPoint=dd})b;
 - (void) _scrollViewDidEndDraggingWithDeceleration:(BOOL)a;
 - (void) setContentOffset:({CGPoint=dd})a;
 - (void) _getResponderRectsForXAxisMinRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ayMinRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bxMaxRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cyMaxRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})d;
 - (void) _hideIndexOverlay;
 - (void) _willChangeToIdiom:(q)aonScreen:(id)b;
 - (void) _scrollToTopFromTouchAtScreenLocation:({CGPoint=dd})aresultHandler:(@?)b;
 - (BOOL) cancelTouchTracking;
 - (void) _moveWithEvent:(id)a;
 - (BOOL) _shouldResignFirstResponderWithInteractionDisabled;
 - (void) layoutMarginsDidChange;
 - (BOOL) canBecomeFocused;
 - (void) setLayoutMargins:({UIEdgeInsets=dddd})a;
 - (void) _focusedViewWillChange:(id)a;
 - (void) resizeSubviewsWithOldSize:({CGSize=dd})a;
 - (void) _addSubview:(id)apositioned:(q)brelativeTo:(id)c;
 - (void) willMoveToSuperview:(id)a;
 - (id) hitTest:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) _didChangeFromIdiom:(q)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (void) _setIsAncestorOfFirstResponder:(BOOL)a;
 - (id) _scriptingInfo;
 - (void) _setUsesStaticScrollBar:(BOOL)a;
 - (d) _rubberBandOffsetForOffset:(d)amaxOffset:(d)bminOffset:(d)crange:(d)doutside:(^B)e;
 - (BOOL) _beginTrackingWithEvent:(id)a;
 - ({CGPoint=dd}) _contentOffsetForLowFidelityScrollInDirection:({CGPoint=dd})aduration:(^d)b;
 - (void) setContentInset:({UIEdgeInsets=dddd})a;
 - (void) flashScrollIndicators;
 - (BOOL) touchesShouldCancelInContentView:(id)a;
 - ({CGSize=dd}) _contentSize;
 - ({UIEdgeInsets=dddd}) _contentInset;
 - (d) _offsetForRubberBandOffset:(d)amaxOffset:(d)bminOffset:(d)crange:(d)d;
 - (d) _shadowHeightOffset;
 - (void) _addContentSubview:(id)aatBack:(BOOL)b;
 - (BOOL) _scrollsToMakeFirstResponderVisible;
 - (void) _adjustForAutomaticKeyboardInfo:(id)aanimated:(BOOL)blastAdjustment:(^d)c;
 - (id) _scrollTestExtraResults;
 - (BOOL) _gestureRecognizerShouldBegin:(id)a;
 - (BOOL) _manuallyManagesSwipeUI;
 - (id) indexPathForRowAtPoint:({CGPoint=dd})a;
 - (BOOL) _canSwipeCellAtPoint:({CGPoint=dd})a;
 - (id) _swipeToDeleteCell;
 - (BOOL) _swipeCellAtPoint:({CGPoint=dd})a;
 - (void) _setSwipeToDeleteCell:(id)a;
 - (void) _updateWrapperContentInset;
 - (void) _updateSwipeWithDistancePulled:(d)a;
 - (Q) _countStringRowCount;
 - (void) _handleSwipeDelete:(id)a;
 - (void) longPress:(id)a;
 - (id) _swipeGestureRecognizer;
 - (void) _removeTableViewGestureRecognizers;
 - (void) _installTableViewGestureRecognizers;
 - (void) _updateRowData;
 - (id) indexPathForRowAtGlobalRow:(q)a;
 - (BOOL) _estimatesRowHeights;
 - (void) _scheduleAdjustExtraSeparators;
 - (void) _adjustReusableTableCells;
 - (void) _updateContentSize;
 - (id) separatorColor;
 - (void) setSectionBorderColor:(id)a;
 - (void) _ensureRowDataIsLoaded;
 - (d) heightForAutohidingTableHeaderView;
 - (d) heightForTableHeaderViewHiding;
 - (void) _updateShowScrollIndicatorsFlag;
 - (void) _adjustTableHeaderAndFooterViews;
 - (void) _adjustCountLabel;
 - (void) _updateIndexFrame;
 - (void) _updateBackgroundViewFrame;
 - (void) _updateIndexFrameSuppressingChangeNotification:(BOOL)a;
 - (d) _externalIndexWidth;
 - (BOOL) _isShowingIndex;
 - (id) tableHeaderView;
 - (id) _dataSourceSectionIndexTitlesForTableView;
 - (void) _removeIndex;
 - (void) _updateIndexTitles:(id)a;
 - (void) _sectionIndexChanged:(id)a;
 - (void) _sectionIndexTouchesEnded:(id)a;
 - (BOOL) _shouldSetIndexBackgroundColorToTableBackgroundColor;
 - (void) _addIndexToAppropriateContainer;
 - (void) _updateIndexDisplayedTitles;
 - (void) _updateVisibleViewsRightMarginForShowingIndex:(BOOL)a;
 - (void) _updateVisibleCellsNow:(BOOL)aisRecursive:(BOOL)b;
 - (void) _suspendReloads;
 - (id) _arrayForUpdateAction:(i)a;
 - (void) _updateWithItems:(id)aupdateSupport:(id)b;
 - (void) _endSwipeToDeleteRowDidDelete:(BOOL)a;
 - (void) _numberOfRowsDidChange;
 - (void) _adjustExtraSeparators;
 - (void) _resumeReloads;
 - (void) _updateFocusedCellIndexPathIfNecessaryWithLastFocusedRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setFocusedCellIndexPath:(id)a;
 - (BOOL) _shouldUnionVisibleBounds;
 - (BOOL) _usesNewHeaderFooterBehavior;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _visibleBounds;
 - (id) _tableHeaderView:(BOOL)a;
 - (id) _tableFooterView:(BOOL)a;
 - (BOOL) _shouldShowHeadersAndFooters;
 - (void) _reuseHeaderFooterView:(id)aisHeader:(BOOL)bforSection:(q)c;
 - (BOOL) _delegateWantsHeaderForSection:(q)a;
 - (BOOL) _delegateWantsFooterForSection:(q)a;
 - (BOOL) allowsHeaderViewsToFloat;
 - ({UIEdgeInsets=dddd}) _sectionContentInset;
 - (id) _sectionHeaderViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforSection:(q)bfloating:(BOOL)creuseViewIfPossible:(BOOL)dwillDisplay:(BOOL)e;
 - (BOOL) allowsFooterViewsToFloat;
 - (id) _sectionFooterViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforSection:(q)bfloating:(BOOL)creuseViewIfPossible:(BOOL)dwillDisplay:(BOOL)e;
 - (void) _updatePinnedTableHeader;
 - (void) _reuseTableViewCell:(id)awithIndexPath:(id)bdidEndDisplaying:(BOOL)c;
 - (void) _reapTentativeViews;
 - (void) _setNeedsVisibleCellsUpdate:(BOOL)awithFrames:(BOOL)b;
 - ({_NSRange=QQ}) _visibleGlobalRowsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _reorderingSupport;
 - (id) _createPreparedCellForGlobalRow:(q)awillDisplay:(BOOL)b;
 - (BOOL) _shouldDisplayTopSeparator;
 - (void) _updateTableHeadersAndFootersNow:(BOOL)a;
 - (void) _updateVisibleHeadersAndFootersNow:(BOOL)a;
 - (void) _updateIndex;
 - (void) setSeparatorStyle:(q)a;
 - ({CGPoint=dd}) _validContentOffsetForProposedOffset:({CGPoint=dd})a;
 - (BOOL) _shouldDisplayExtraSeparatorsAtOffset:(^d)a;
 - (d) _spacingForExtraSeparators;
 - (d) _defaultMarginWidth;
 - (void) setSeparatorEffect:(id)a;
 - (id) _cellContainerView;
 - (q) globalRowForRowAtIndexPath:(id)a;
 - (void) _hideSeparatorForRowAtIndexPath:(id)a;
 - (void) _showSeparatorForRowBeforeIndexPath:(id)a;
 - (id) _existingCellForRowAtIndexPath:(id)a;
 - (void) _showSeparatorForRowAtIndexPath:(id)a;
 - (id) _deleteConfirmationButtonForRowAtIndexPath:(id)a;
 - (id) _titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a;
 - (id) _swipeAccessoryButtonForRowAtIndexPath:(id)a;
 - (id) _titleForSwipeAccessoryButtonForRowAtIndexPath:(id)a;
 - (id) _swipeActionButtonsForRowAtIndexPath:(id)a;
 - (void) animateDeletionOfRowWithCell:(id)a;
 - ({UIEdgeInsets=dddd}) separatorInset;
 - (d) _headerMarginWidth;
 - (void) _setMarginWidth:(d)a;
 - (d) _headerRightMarginWidth;
 - (d) _footerMarginWidth;
 - (d) _footerRightMarginWidth;
 - (void) _setupSectionView:(id)aisHeader:(BOOL)bforSection:(q)c;
 - (id) _cellReuseMapForType:(i)a;
 - (void) _reuseTableViewSubview:(id)aviewType:(i)b;
 - (void) _updateCellContentStringCallout:(id)a;
 - (void) _beginAnimatingCells;
 - (BOOL) isEditing;
 - (void) _setupCell:(id)aforEditing:(BOOL)batIndexPath:(id)canimated:(BOOL)dupdateSeparators:(BOOL)e;
 - (q) _editingStyleForRowAtIndexPath:(id)a;
 - (BOOL) _shouldIndentWhileEditingForRowAtIndexPath:(id)a;
 - (BOOL) _canMoveRowAtIndexPath:(id)a;
 - (void) _setupCell:(id)aforEditing:(BOOL)batIndexPath:(id)ccanEdit:(BOOL)deditingStyle:(q)eshouldIndentWhileEditing:(BOOL)fshowsReorderControl:(BOOL)gaccessoryType:(q)hanimated:(BOOL)iupdateSeparators:(BOOL)j;
 - (void) setEditing:(BOOL)aanimated:(BOOL)b;
 - (void) _updateAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) _updateBackgroundView;
 - (void) _cellDidShowSelectedBackground:(id)a;
 - (void) _endAnimatingCells;
 - (id) visibleCells;
 - (BOOL) _shouldDrawSeparatorAtTopOfSection:(q)a;
 - (BOOL) _shouldDrawSeparatorAtBottomOfSection:(q)a;
 - (void) _cleanupStateFromDeleteConfirmation;
 - (BOOL) _highlightFirstVisibleRowIfAppropriate;
 - (BOOL) _shouldChangeIndexBasedOnValueChanged;
 - (q) _sectionIndexChangedToIndex:(q)atitle:(id)b;
 - (BOOL) _shouldShowIndexOverlays;
 - (void) _transitionIndexOverlayToVisible:(BOOL)ashouldFadeBackToInvisible:(BOOL)b;
 - (void) _moveSectionIndexTitleIndexToIndex:(q)a;
 - (void) scrollToRowAtIndexPath:(id)aatScrollPosition:(q)banimated:(BOOL)c;
 - (void) _updateFocusedItemToIndexPath:(id)a;
 - (void) _startIndexOverlayTimer;
 - (void) _transitionIndexOverlaySelectionViewToVisible:(BOOL)a;
 - (id) deleteConfirmationIndexPath;
 - (void) _setEditing:(BOOL)aanimated:(BOOL)bforced:(BOOL)c;
 - (void) _sendDidEndEditingForIndexPath:(id)a;
 - (id) _visibleCells;
 - (BOOL) _canEditRowAtIndexPath:(id)a;
 - (void) _sendWillBeginEditingForIndexPath:(id)a;
 - (void) _endDisplayingCellContentStringCallout;
 - (void) _scrollToTopHidingTableHeader:(BOOL)a;
 - (id) sectionIndexColor;
 - (void) setSectionIndexColor:(id)a;
 - (id) sectionIndexTrackingBackgroundColor;
 - (void) setSectionIndexTrackingBackgroundColor:(id)a;
 - (void) setSeparatorColor:(id)a;
 - (void) setSectionHeaderHeight:(d)a;
 - (q) _currentSectionIndexTitleIndex;
 - (void) _configureIndexOverlayIndicatorViewIfNecessary;
 - (void) _configureIndexOverlaySelectionViewIfNecessary;
 - (void) _tearDownIndexOverlayViews;
 - (void) _updateWrapperFrame;
 - (d) _widthForContentInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setSeparatorsDrawInVibrantLightModeUIAppearance:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(q)b;
 - (BOOL) _shouldWrapCells;
 - (void) _languageChanged;
 - (void) _systemTextSizeChanged;
 - (void) _initializeTentativeViewContainers;
 - (void) _setupTableViewCommon;
 - (id) _defaultBackgroundView;
 - (void) setAllowsSelection:(BOOL)a;
 - (void) _setupDefaultHeights;
 - (id) _defaultSeparatorColor;
 - (void) _configureBackgroundView;
 - (d) _defaultSectionHeaderHeight;
 - (d) _defaultSectionFooterHeight;
 - (void) _setRefreshControl:(id)a;
 - (void) _stopLongPressAutoscrollTimer;
 - (void) _stopIndexOverlayTimer;
 - (void) _stopIgnoringWheelEventsOnIndexOverlayIndicator:(id)a;
 - (q) _popoverControllerStyle;
 - (void) _setRowCount:(Q)a;
 - (void) setTableHeaderViewShouldAutoHide:(BOOL)a;
 - (id) indexPathsForVisibleRows;
 - (BOOL) _focusedCellContainedInRowsAtIndexPaths:(id)a;
 - (void) _cancelCellReorder:(BOOL)a;
 - (void) noteNumberOfRowsChanged;
 - (BOOL) _estimatesSectionHeaderHeights;
 - (BOOL) _estimatesSectionFooterHeights;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForSection:(q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rectForRowAtIndexPath:(id)acanGuess:(BOOL)b;
 - (id) indexPathsForRowsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _updateVisibleCellsImmediatelyIfNecessary;
 - (id) _visibleHeaderViewForSection:(q)a;
 - (id) _visibleFooterViewForSection:(q)a;
 - ({CGPoint=dd}) _contentOffsetForScrollingToRowAtIndexPath:(id)aatScrollPosition:(q)b;
 - (id) indexPathForSelectedRow;
 - (void) _setupCellAnimations;
 - (void) _endCellAnimationsWithContext:(id)a;
 - (void) endUpdatesWithContext:(id)a;
 - (void) beginUpdates;
 - (void) _performBatchUpdates:(@?)awithContext:(id)bcompletion:(@?)c;
 - (void) _updateSections:(id)aupdateAction:(i)bwithRowAnimation:(q)cheaderFooterOnly:(BOOL)d;
 - (void) _updateRowsAtIndexPaths:(id)aupdateAction:(i)bwithRowAnimation:(q)c;
 - (void) _updateCellsToFocusable:(BOOL)a;
 - (void) setAllowsMultipleSelectionDuringEditing:(BOOL)a;
 - (BOOL) _isRowMultiSelect:(id)a;
 - (BOOL) _shouldHighlightInsteadOfSelectRowAtIndexPath:(id)a;
 - (BOOL) allowsSelection;
 - (BOOL) allowsSelectionDuringEditing;
 - (void) selectRowAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(q)c;
 - (void) deselectRowAtIndexPath:(id)aanimated:(BOOL)b;
 - (BOOL) highlightRowAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(q)c;
 - (void) unhighlightRowAtIndexPath:(id)aanimated:(BOOL)b;
 - (void) _reloadDataIfNeeded;
 - (void) _deselectAllNonMultiSelectRowsAnimated:(BOOL)anotifyDelegate:(BOOL)b;
 - (void) _deselectRowAtIndexPath:(id)aanimated:(BOOL)bnotifyDelegate:(BOOL)c;
 - (void) _selectRowAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(q)cnotifyDelegate:(BOOL)d;
 - ({UIEdgeInsets=dddd}) _backgroundContentInset;
 - (id) separatorTopShadowColor;
 - (id) separatorBottomShadowColor;
 - (BOOL) _hasHeaderFooterBelowRowAtIndexPath:(id)a;
 - (void) _backgroundColorAnimationDidStop;
 - (void) _setBackgroundColor:(id)aanimated:(BOOL)b;
 - (void) setBackgroundView:(id)a;
 - (BOOL) _pinsTableHeaderView;
 - (id) _nibMapForType:(i)a;
 - (id) _classMapForType:(i)a;
 - (id) _dequeueReusableViewOfType:(i)awithIdentifier:(id)b;
 - (void) _configureCellForDisplay:(id)aforIndexPath:(id)b;
 - (id) _indexPathForSwipeRowAtPoint:({CGPoint=dd})a;
 - (BOOL) _hasSwipeToDeleteRow;
 - (void) _handleSwipeDeleteGobbler:(id)a;
 - (BOOL) _wantsSwipes;
 - (void) _resetDragSwipeAndTouchSelectFlags;
 - (id) currentTouch;
 - (void) setCurrentTouch:(id)a;
 - (BOOL) _canSelectRowContainingHitView:(id)a;
 - (BOOL) allowsMultipleSelectionDuringEditing;
 - (void) _updateTableHeaderViewForAutoHideWithVelocity:(d)atargetOffset:(^{CGPoint=dd})b;
 - (void) _selectAllSelectedRows;
 - (id) _visibleSubviewsInHeaderFooterDictionary:(^{__CFDictionary=})a;
 - (id) _visibleHeaderFooterViews;
 - (id) _contentSubviews;
 - (id) _nearestContentSubviewToPoint:({CGPoint=dd})a;
 - (void) _userSelectRowAtPendingSelectionIndexPath:(id)a;
 - (id) _tableViewCellForContentView:(id)a;
 - (void) _setDefaultLayoutMargins:({UIEdgeInsets=dddd})a;
 - (void) _scrollFirstResponderCellToVisible:(BOOL)a;
 - (void) _rectChangedWithNewSize:({CGSize=dd})aoldSize:({CGSize=dd})b;
 - (void) _rebuildGeometry;
 - (void) _updateTableViewGestureRecognizersForEditing;
 - (void) _registerThing:(id)aasNib:(BOOL)bforViewType:(i)cwithReuseIdentifer:(id)d;
 - ({UIEdgeInsets=dddd}) _tableContentInset;
 - (void) _accessoryButtonAction:(id)a;
 - (BOOL) _drawsTopShadowInGroupedSections;
 - (id) sectionBorderColor;
 - (q) _separatorBackdropOverlayBlendMode;
 - (void) _setSeparatorBackdropOverlayBlendMode:(q)a;
 - (d) _sectionBorderWidth;
 - (void) _setSectionBorderWidth:(d)a;
 - (void) _setAllowsReorderingWhenNotEditing:(BOOL)a;
 - (d) _heightForCell:(id)aatIndexPath:(id)b;
 - (void) setSeparatorInset:({UIEdgeInsets=dddd})a;
 - (void) _recomputeSectionIndexTitleIndex;
 - (void) _startIndexOverlayIndicatorIgnoreTimer;
 - (void) _prolongIndexOverlayTimer;
 - (q) maximumGlobalRowIndex;
 - (void) _shiftSectionIndexTitleIndexByAmount:(q)a;
 - (q) highlightedGlobalRow;
 - (void) _unhighlightAllRowsAndHighlightGlobalRow:(q)a;
 - (id) _updateIndexOverlayToShowTitleAtIndex:(q)a;
 - (void) _highlightCell:(id)aanimated:(BOOL)bscrollPosition:(q)chighlight:(BOOL)d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsForIndexOverlay;
 - (void) _hideIndexOverlay:(id)a;
 - (d) _timeBeforeIndexOverlayFadesAway;
 - (d) _timeToIgnoreWheelEventsOnIndexOverlayIndicator;
 - (BOOL) _shouldHaveIndexOverlaySelectionView;
 - (q) _sectionForHeaderView:(id)a;
 - (q) _sectionForFooterView:(id)a;
 - (id) _focusedCellIndexPath;
 - (BOOL) _delegateWantsHeaderTitleForSection:(q)a;
 - (id) _delegateViewForHeaderInSection:(q)a;
 - (BOOL) _delegateWantsFooterTitleForSection:(q)a;
 - (id) _delegateViewForFooterInSection:(q)a;
 - (void) _reorderPositionChangedForCell:(id)a;
 - (void) _endCellReorderAnimation:(BOOL)a;
 - (void) adjustIndexPaths:(id)aforMoveOfIndexPath:(id)btoIndexPath:(id)c;
 - (void) _tableCellAnimationDidStop:(id)afinished:(id)b;
 - (id) _reorderingIndexPath;
 - (void) _endReorderingForCell:(id)awasCancelled:(BOOL)banimated:(BOOL)c;
 - (void) _setTopSeparatorCell:(id)a;
 - (void) _finishedAnimatingCellReorder:(id)afinished:(id)bcontext:(id)c;
 - (void) _reorderPositionChangedForCell:(id)awithScrollFactorPercentage:(f)b;
 - (id) dequeueReusableHeaderFooterViewWithIdentifier:(id)a;
 - (id) _popReusableHeaderView:(BOOL)a;
 - (id) _newSectionViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aforSection:(q)bisHeader:(BOOL)c;
 - (id) _sectionHeaderView:(BOOL)awithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})bforSection:(q)cfloating:(BOOL)dreuseViewIfPossible:(BOOL)ewillDisplay:(BOOL)f;
 - (q) _accessoryTypeForCell:(id)aforRowAtIndexPath:(id)b;
 - (id) _createPreparedCellForGlobalRow:(q)awithIndexPath:(id)bwillDisplay:(BOOL)c;
 - (id) _visibleHeaderViewForSection:(q)aincludeTentativeViews:(BOOL)b;
 - (id) _visibleFooterViewForSection:(q)aincludeTentativeViews:(BOOL)b;
 - (BOOL) _headerAndFooterViewsFloat;
 - (BOOL) _isLastRowForIndexPath:(id)a;
 - (void) _autoscrollForReordering:(id)a;
 - (id) _targetIndexPathAtPoint:({CGPoint=dd})a;
 - (id) _cellAfterIndexPath:(id)a;
 - (void) _animateSwipeCancelation;
 - (id) backgroundView;
 - (q) separatorStyle;
 - (d) _backgroundInset;
 - (id) _backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(id)a;
 - (id) _backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)a;
 - (void) _installSwipeToDeleteGobbler;
 - (void) _setSwipeToDeleteCell:(id)ainstallGobbler:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForFooterInSection:(q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForHeaderInSection:(q)a;
 - (void) _performCellContentStringCalloutCleanupHidingMenu:(BOOL)a;
 - (BOOL) longPressGestureWithinAutoscrollZone;
 - (BOOL) _displayingCellContentStringCallout;
 - (void) _beginDisplayingCellContentStringCallout;
 - (void) _autoscrollForLongPress:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _visibleBoundsIncludingRowsOnly;
 - (id) indexPathsForSelectedRows;
 - (BOOL) _indexPathIsValid:(id)a;
 - (BOOL) _pathIsHidden:(id)a;
 - (void) _setSeparatorsDrawAsOverlay:(BOOL)a;
 - (d) _classicHeightForRowAtIndexPath:(id)a;
 - (id) _createPreparedCellForRowAtIndexPath:(id)awillDisplay:(BOOL)b;
 - (d) _classicHeightForHeaderInSection:(q)a;
 - (d) _heightForHeaderView:(id)ainSection:(q)b;
 - (d) _heightForFooterView:(id)ainSection:(q)b;
 - (d) _classicHeightForFooterInSection:(q)a;
 - (BOOL) _gestureRecognizer:(id)ashouldRequireFailureOfGestureRecognizer:(id)b;
 - (BOOL) _displaysCellContentStringsOnTapAndHold;
 - (void) _setDisplaysCellContentStringsOnTapAndHold:(BOOL)a;
 - (f) _animationDuration;
 - (void) setCountStringInsignificantRowCount:(Q)a;
 - (void) setCountString:(id)a;
 - (void) setTableHeaderBackgroundColor:(id)a;
 - (id) tableHeaderBackgroundColor;
 - (id) _tableHeaderBackgroundView;
 - (void) setMultiselectCheckmarkColor:(id)a;
 - (id) multiselectCheckmarkColor;
 - (void) _setHeightForTableHeaderViewHiding:(d)a;
 - (void) _setDrawsTopShadowInGroupedSections:(BOOL)a;
 - (void) _cellDidHideSelectedBackground:(id)a;
 - (id) _deleteConfirmationButton;
 - (id) _swipeAccessoryButton;
 - (id) _swipeActionButtons;
 - (void) _setGestureRecognizerRequiresTableGestureRecognizersToFail:(id)a;
 - (void) _validateCells;
 - (void) _validateSectionHeadersAndFooters;
 - (void) setDeleteConfirmationIndexPath:(id)aanimated:(BOOL)b;
 - (void) _scrollToTopHidingTableHeaderIfNecessary:(BOOL)a;
 - (id) _sectionIndexColor;
 - (void) _setSectionIndexColor:(id)a;
 - (id) _sectionIndexTrackingBackgroundColor;
 - (void) _setSectionIndexTrackingBackgroundColor:(id)a;
 - (void) _setHeaderAndFooterViewsFloat:(BOOL)a;
 - (id) _wrapperView;
 - (BOOL) _isInModalViewController;
 - (void) setEstimatedRowHeight:(d)a;
 - (id) sectionIndexBackgroundColor;
 - (void) setSectionIndexBackgroundColor:(id)a;
 - (d) sectionHeaderHeight;
 - (void) setSectionFooterHeight:(d)a;
 - (d) sectionFooterHeight;
 - (void) reloadSectionIndexTitles;
 - (void) setIndexHiddenForSearch:(BOOL)a;
 - (void) setIndexHidden:(BOOL)aanimated:(BOOL)b;
 - (BOOL) isIndexHidden;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) indexFrame;
 - (BOOL) tableHeaderViewShouldAutoHide;
 - (BOOL) overlapsSectionHeaderViews;
 - (void) setOverlapsSectionHeaderViews:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rectForTableHeaderView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rectForTableFooterView;
 - (id) headerViewForSection:(q)a;
 - (id) footerViewForSection:(q)a;
 - (void) scrollToNearestSelectedRowAtScrollPosition:(q)aanimated:(BOOL)b;
 - (void) endUpdates;
 - (void) _performBatchUpdates:(@?)acompletion:(@?)b;
 - (void) insertSections:(id)awithRowAnimation:(q)b;
 - (void) deleteSections:(id)awithRowAnimation:(q)b;
 - (void) reloadSections:(id)awithRowAnimation:(q)b;
 - (void) _reloadSectionHeaderFooters:(id)awithRowAnimation:(q)b;
 - (void) moveSection:(q)atoSection:(q)b;
 - (void) insertRowsAtIndexPaths:(id)awithRowAnimation:(q)b;
 - (void) deleteRowsAtIndexPaths:(id)awithRowAnimation:(q)b;
 - (void) reloadRowsAtIndexPaths:(id)awithRowAnimation:(q)b;
 - (void) moveRowAtIndexPath:(id)atoIndexPath:(id)b;
 - (void) setAllowsSelectionDuringEditing:(BOOL)a;
 - (id) _indexPathsForHighlightedRows;
 - (void) setShowsSelectionImmediatelyOnTouchBegin:(BOOL)a;
 - (BOOL) showsSelectionImmediatelyOnTouchBegin;
 - (Q) maximumNumberOfSectionIndexTitlesWithoutTruncation;
 - (void) setSeparatorTopShadowColor:(id)a;
 - (void) setSeparatorBottomShadowColor:(id)a;
 - (void) _setDrawsSeparatorAtTopOfSections:(BOOL)a;
 - (BOOL) _drawsSeparatorAtTopOfSections;
 - (void) setUsesVariableMargins:(BOOL)a;
 - (BOOL) usesVariableMargins;
 - (void) _setTopPadding:(d)a;
 - (d) _topPadding;
 - (void) _setBottomPadding:(d)a;
 - (d) _bottomPadding;
 - (BOOL) _usingCustomBackgroundView;
 - (void) setTableHeaderView:(id)a;
 - (void) setTableFooterView:(id)a;
 - (id) tableFooterView;
 - (id) dequeueReusableCellWithIdentifier:(id)aforIndexPath:(id)b;
 - (void) _endSwipeToDeleteGesture:(BOOL)a;
 - (d) _swipeToDeleteOffsetForRow:(q)ainSection:(q)b;
 - (void) setEditing:(BOOL)a;
 - (void) registerNib:(id)aforCellReuseIdentifier:(id)b;
 - (void) registerNib:(id)aforHeaderFooterViewReuseIdentifier:(id)b;
 - (void) registerClass:(Class)aforCellReuseIdentifier:(id)b;
 - (void) registerClass:(Class)aforHeaderFooterViewReuseIdentifier:(id)b;
 - (void) _setExternalObjectTable:(id)aforNibLoadingOfCellWithReuseIdentifier:(id)b;
 - (d) _contentWidthForCell:(id)aforRowAtIndexPath:(id)b;
 - (void) _setAdjustsRowHeightsForSectionLocation:(BOOL)a;
 - (BOOL) _adjustsRowHeightsForSectionLocation;
 - (void) _setSectionContentInset:({UIEdgeInsets=dddd})a;
 - (void) _setPinsTableHeaderView:(BOOL)a;
 - (d) _marginWidth;
 - ({UIEdgeInsets=dddd}) _rawSeparatorInset;
 - (BOOL) _delegateImplementsEstimatedHeightForRowAtIndexPath;
 - (BOOL) _delegateImplementsEstimatedHeightForSectionHeader;
 - (BOOL) _delegateImplementsEstimatedHeightForSectionFooter;
 - (void) _selectRowsAtIndexPaths:(id)aanimated:(BOOL)bscrollPosition:(q)cnotifyDelegate:(BOOL)d;
 - (void) _setRemembersPreviouslyFocusedItem:(BOOL)a;
 - (BOOL) _remembersPreviouslyFocusedItem;
 - (BOOL) _canFocusCell:(id)a;
 - (BOOL) _cell:(id)ashouldChangeFocusedItem:(id)b;
 - (void) _cellDidBecomeFocused:(id)a;
 - (void) _cellDidBecomeUnfocused:(id)a;
 - (BOOL) _focusedCellContainedInSections:(id)a;
 - (id) _refreshControl;
 - (void) _beginRefreshing;
 - (void) _endRefreshingAnimated:(BOOL)a;
 - (BOOL) _dataSourceImplementsNumberOfSectionsInTableView;
 - (BOOL) _delegateImplementsHeightForRowAtIndexPath;
 - (BOOL) _dataSourceImplementsCanUpdateRowAtIndexPath;
 - (BOOL) _delegateImplementsHeightForRowsInSection;
 - (BOOL) _delegateImplementsMarginForTableView;
 - (BOOL) _delegateWantsCustomFooterForSection:(q)a;
 - (BOOL) _delegateImplementsHeightForHeaderInSection;
 - (BOOL) _delegateImplementsTitleWidthForHeaderInSection;
 - (BOOL) _delegateImplementsAlignmentForHeaderInSection;
 - (BOOL) _delegateImplementsHeightForFooterInSection;
 - (BOOL) _delegateImplementsTitleWidthForFooterInSection;
 - (BOOL) _delegateImplementsAlignmentForFooterInSection;
 - (BOOL) _dataSourceImplementsTitleForHeaderInSection;
 - (BOOL) _dataSourceImplementsTitleForFooterInSection;
 - (BOOL) _dataSourceImplementsDetailTextForHeaderInSection;
 - (BOOL) _delegateImplementsViewForHeaderInSection;
 - (BOOL) _delegateImplementsViewForFooterInSection;
 - (void) _deselectAllNonMultiSelectRowsAnimated:(BOOL)a;
 - (void) _beginReorderingForCell:(id)a;
 - (void) _beginReorderAnimationForCell:(id)a;
 - (void) _endReorderAnimations;
 - (id) _visibleCellForGlobalRow:(q)a;
 - (BOOL) _wasEditing;
 - (BOOL) _wasEditingRowAtIndexPath:(id)a;
 - (BOOL) _isEditingRowAtIndexPath:(id)a;
 - (BOOL) _isEditingWithNoSwipedCell;
 - (id) _reorderingCell;
 - (q) _globalReorderingRow;
 - (void) _tableHeaderHeightDidChangeToHeight:(d)a;
 - (void) _tableFooterHeightDidChangeToHeight:(d)a;
 - (void) _drawExtraSeparator:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _isCellReorderable:(id)a;
 - (id) titleForDeleteConfirmationButton:(id)a;
 - (void) _removeWasCanceledForCell:(id)a;
 - (void) _didInsertRowForTableCell:(id)a;
 - (void) _finishedRemovingRemovalButtonForTableCell:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _indexRect;
 - (id) _rowData;
 - (BOOL) _isTableHeaderViewHidden;
 - (BOOL) _shouldShowMenuForCell:(id)a;
 - (BOOL) _canPerformAction:(SEL)aforCell:(id)bsender:(id)c;
 - (void) _performAction:(SEL)aforCell:(id)bsender:(id)c;
 - (d) _heightForSeparator;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _calloutTargetRectForCell:(id)a;
 - (BOOL) _keepsFirstResponderVisibleOnBoundsChange;
 - (void) _setKeepsFirstResponderVisibleOnBoundsChange:(BOOL)a;
 - (id) _multiSelectCheckmarkImage;
 - (id) _multiSelectNotSelectedImage;
 - (id) _titleForDeleteConfirmationButton;
 - (id) _titleForSwipeAccessoryButton;
 - (id) _backgroundColorForDeleteConfirmationButton;
 - (id) _backgroundColorForSwipeAccessoryButton;
 - (void) _swipeAccessoryButtonPushedInCell:(id)a;
 - (void) _actionButton:(id)apushedInCell:(id)b;
 - (void) _setIgnorePinnedTableHeaderUpdates:(BOOL)a;
 - (BOOL) ignorePinnedTableHeaderUpdates;
 - (BOOL) _separatorsDrawAsOverlay;
 - (id) separatorEffect;
 - (BOOL) _isEditingForSwipeDeletion;
 - (void) _applyContentSizeDeltaForEstimatedHeightAdjustments:(d)a;
 - (d) _heightForRowAtIndexPath:(id)a;
 - (d) _heightForHeaderInSection:(q)a;
 - (d) _heightForFooterInSection:(q)a;
 - (void) _setManuallyManagesSwipeUI:(BOOL)a;
 - (void) _setHeight:(d)aforRowAtIndexPath:(id)b;
 - (BOOL) _allowsReorderingWhenNotEditing;
 - (void) _setCellsSelfSize:(BOOL)a;
 - (BOOL) _cellsSelfSize;
 - (d) estimatedRowHeight;
 - (d) estimatedSectionHeaderHeight;
 - (void) setEstimatedSectionHeaderHeight:(d)a;
 - (d) estimatedSectionFooterHeight;
 - (void) setEstimatedSectionFooterHeight:(d)a;
 - (q) sectionIndexMinimumDisplayRowCount;
 - (void) setSectionIndexMinimumDisplayRowCount:(q)a;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (void) setBackgroundColor:(id)a;
 - (q) style;
 - (id) dataSource;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setDataSource:(id)a;
 - (void) _stopAutoscrollTimer;


@end