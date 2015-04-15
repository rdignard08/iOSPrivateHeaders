
@protocol UIScrollViewDelegate, NSCoding, UIGestureRecognizerDelegate;
@interface UITableViewCell : UIView <UIScrollViewDelegate, NSCoding, UIGestureRecognizerDelegate> {

    @"UITableView" _tableView;
    id _layoutManager;
    id _target;
    SEL _editAction;
    SEL _accessoryAction;
    @"_UITableViewCellOldEditingData" _oldEditingData;
    id _editingData;
    d _rightMargin;
    q _indentationLevel;
    d _indentationWidth;
    @"NSString" _reuseIdentifier;
    @"UIView" _contentView;
    @"UIImageView" _imageView;
    @"UILabel" _textLabel;
    @"UILabel" _detailTextLabel;
    @"UIView" _backgroundView;
    @"UIView" _selectedBackgroundView;
    @"UIView" _multipleSelectionBackgroundView;
    @"UIView" _selectedOverlayView;
    d _selectionFadeDuration;
    @"UIColor" _backgroundColor;
    @"UIColor" _separatorColor;
    @"UIVisualEffect" _separatorEffect;
    @"UIColor" _topShadowColor;
    @"UIColor" _bottomShadowColor;
    @"UIColor" _sectionBorderColor;
    @"UIView" _floatingSeparatorView;
    @"UIView" _topShadowAnimationView;
    @"UIView" _bottomShadowAnimationView;
    id _badge;
    ^{__CFDictionary=} _unhighlightedStates;
    id _highlightingSupport;
    id _selectionSegueTemplate;
    id _accessoryActionSegueTemplate;
    @"UIControl" _accessoryView;
    @"UIControl" _editingAccessoryView;
    @"UIView" _customAccessoryView;
    @"UIView" _customEditingAccessoryView;
    @"_UITableViewCellSeparatorView" _separatorView;
    @"_UITableViewCellSeparatorView" _topSeparatorView;
    @"UIView" _topShadowView;
    @"UITextField" _editableTextField;
    d _lastSelectionTime;
    @"NSTimer" _deselectTimer;
    d _textFieldOffset;
    d _indexBarWidth;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _separatorInset;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _backgroundInset;
    SEL _returnAction;
    @"UIColor" _selectionTintColor;
    @"UIColor" _accessoryTintColor;
    @"UIImage" _reorderControlImage;
    @"UILongPressGestureRecognizer" _menuGesture;
    @"NSIndexPath" _representedIndexPath;
    BOOL _isPigglyWigglyCell;
    BOOL _focusable;
    @"UITableViewCellDeleteConfirmationView" _swipeToDeleteConfirmationView;
    @"UITapGestureRecognizer" _swipeToDeleteCancelationGesture;
    @"UIView" _clearBlendingView;
    d _swipeToDeleteDistancePulled;
    d _sectionCornerRadius;
    d _sectionBorderWidth;
    d _defaultMarginWidth;
    {?="showingDeleteConfirmation"b1"separatorStyle"b3"selectionStyle"b3"selectionFadeFraction"b11"editing"b1"editingStyle"b3"accessoryType"b3"editingAccessoryType"b3"showsAccessoryWhenEditing"b1"showsReorderControl"b1"showDisclosure"b1"showTopSeparator"b1"hideTopSeparatorDuringReordering"b1"disclosureClickable"b1"disclosureStyle"b1"showingRemoveControl"b1"sectionLocation"b3"tableViewStyle"b1"shouldIndentWhileEditing"b1"fontSet"b1"usingDefaultSelectedBackgroundView"b1"wasSwiped"b1"highlighted"b1"separatorDirty"b1"drawn"b1"drawingDisabled"b1"style"b12"showingMenu"b1"clipsContents"b1"animatingSelection"b1"backgroundColorSet"b1"needsSetup"b1"dontDrawTopShadow"b1"usingMultiselectbackgroundView"b1"layoutLoopCounter"b2"isPigglyWigglyCell"I"deleteAnimationInProgress"b1"deleteCancelationAnimationInProgress"b1"animating"b1"shouldHaveFullLengthBottomSeparator"b1"shouldHaveFullLengthTopSeparator"b1"drawsSeparatorAtTopOfSection"b1"drawsSeparatorAtBottomOfSection"b1"separatorBackdropOverlayBlendMode"b3"separatorDrawsInVibrantLightMode"b1"separatorHidden"b1"hidingSeparatorsForSelection"b1"clippedBeforeSwiping"b1"allowsReorderingWhenNotEditing"b1"needsHeightCalculation"b1} _tableCellFlags;
}
 + (void) initialize;
 + (void) _initializeForIdiom:(q)a;
 + (id) _defaultTopShadowColor;

 - (id) target;
 - (void) dealloc;
 - (void) setTarget:(id)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (id) initWithStyle:(q)areuseIdentifier:(id)b;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setTextAlignment:(q)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (void) setTextColor:(id)a;
 - (void) setFont:(id)a;
 - (void) setText:(id)a;
 - (void) _focusedViewDidChange:(id)a;
 - (BOOL) _canDrawContent;
 - (BOOL) canBecomeFirstResponder;
 - (BOOL) shouldChangeFocusedItem:(id)aheading:(Q)b;
 - (void) focusedViewDidChange;
 - (BOOL) canBecomeFocused;
 - (void) didMoveToSuperview;
 - ({CGSize=dd}) systemLayoutSizeFittingSize:({CGSize=dd})awithHorizontalFittingPriority:(f)bverticalFittingPriority:(f)c;
 - (void) willMoveToSuperview:(id)a;
 - (void) _setHiddenForReuse:(BOOL)a;
 - (void) _descendent:(id)awillMoveFromSuperview:(id)btoSuperview:(id)c;
 - (void) _descendent:(id)adidMoveFromSuperview:(id)btoSuperview:(id)c;
 - (id) _scriptingInfo;
 - (void) setHighlighted:(BOOL)a;
 - (id) _defaultFont;
 - (BOOL) _gestureRecognizerShouldBegin:(id)a;
 - (id) _imageView;
 - (BOOL) isHighlighted;
 - (id) _swipeToDeleteConfirmationView;
 - (void) _beginSwiping;
 - (void) _updateSwipeWithDistancePulled:(d)a;
 - (void) _setIndexPath:(id)a;
 - (void) _multiselectColorChanged;
 - (id) separatorColor;
 - (void) setSectionBorderColor:(id)a;
 - (void) _setDrawsTopShadow:(BOOL)a;
 - (void) _setIndexBarWidth:(d)a;
 - (id) _tableView;
 - (id) _indexPath;
 - (void) _setNeedsHeightCalculation:(BOOL)a;
 - (void) setSeparatorStyle:(q)a;
 - (d) _defaultMarginWidth;
 - (BOOL) _isMultiselecting;
 - (void) _setSeparatorHidden:(BOOL)a;
 - (void) _setDeleteAnimationInProgress:(BOOL)a;
 - (q) accessoryType;
 - ({UIEdgeInsets=dddd}) separatorInset;
 - (void) setTableViewStyle:(q)a;
 - (void) _setMarginWidth:(d)a;
 - (void) _setRightMarginWidth:(d)a;
 - (id) reuseIdentifier;
 - (void) _setNeedsSetup:(BOOL)a;
 - (void) _setAnimating:(BOOL)aclippingAdjacentCells:(BOOL)b;
 - (void) _setAnimating:(BOOL)a;
 - (void) _updateFullWidthSwipeDeletionView;
 - (BOOL) _needsSetup;
 - (BOOL) isEditing;
 - (void) setEditing:(BOOL)aanimated:(BOOL)b;
 - (void) _removeFloatingSeparator;
 - (void) _removeInnerShadow;
 - (void) _setDrawsSeparatorAtTopOfSection:(BOOL)a;
 - (void) _setDrawsSeparatorAtBottomOfSection:(BOOL)a;
 - (id) accessoryActionSegueTemplate;
 - (void) setSeparatorColor:(id)a;
 - (id) tableBackgroundColor;
 - (void) _systemTextSizeChanged;
 - (void) _endSwiping:(BOOL)a;
 - (q) _popoverControllerStyle;
 - (BOOL) drawingEnabled;
 - (void) _setFocusable:(BOOL)a;
 - (q) editingStyle;
 - (void) setHighlighted:(BOOL)aanimated:(BOOL)b;
 - (void) setSelected:(BOOL)aanimated:(BOOL)b;
 - (id) selectionSegueTemplate;
 - (BOOL) isSelected;
 - (void) _setBackgroundInset:({UIEdgeInsets=dddd})a;
 - (void) setTopShadowColor:(id)a;
 - (void) setBottomShadowColor:(id)a;
 - (void) _updateHighlightColors;
 - (void) _setTableBackgroundCGColor:(^{CGColor=})awithSystemColorName:(id)b;
 - (void) _updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)a;
 - (void) setBackgroundView:(id)a;
 - (void) prepareForReuse;
 - (void) setReuseIdentifier:(id)a;
 - (void) _startToEditTextField;
 - (void) _setDefaultMarginWidth:(d)a;
 - (void) _setTableView:(id)a;
 - (void) setIndentationLevel:(q)a;
 - (Q) currentStateMask;
 - (void) _setMultiselecting:(BOOL)a;
 - (id) _target;
 - (void) _setTarget:(id)a;
 - (void) _setAccessoryAction:(SEL)a;
 - (void) _setIsPigglyWigglyCell:(BOOL)a;
 - (BOOL) _backgroundColorSet;
 - (BOOL) _isPigglyWigglyCell;
 - (id) sectionBorderColor;
 - (q) _separatorBackdropOverlayBlendMode;
 - (void) _setSeparatorBackdropOverlayBlendMode:(q)a;
 - (void) _setSeparatorEffect:(id)a;
 - (d) _sectionBorderWidth;
 - (void) _setSectionBorderWidth:(d)a;
 - (void) _setAllowsReorderingWhenNotEditing:(BOOL)a;
 - (void) setSectionLocation:(i)aanimated:(BOOL)b;
 - (void) setSelected:(BOOL)a;
 - (void) setSeparatorInset:({UIEdgeInsets=dddd})a;
 - (BOOL) _drawsTopSeparatorDuringReordering;
 - (void) _setDrawsTopSeparator:(BOOL)a;
 - (void) _saveOpaqueViewState:(id)a;
 - (void) _setOpaque:(BOOL)aforSubview:(id)b;
 - (void) _setReordering:(BOOL)a;
 - (void) _setShouldHaveFullLengthBottomSeparator:(BOOL)a;
 - (void) _setShouldHaveFullLengthTopSeparator:(BOOL)a;
 - (id) textLabel;
 - (id) detailTextLabel;
 - (void) setAccessoryType:(q)a;
 - (void) _setShowsReorderControl:(BOOL)a;
 - (void) _setEditingStyle:(q)a;
 - (void) _setShouldIndentWhileEditing:(BOOL)a;
 - (void) setWasSwiped:(BOOL)a;
 - (void) _setShowingDeleteConfirmation:(BOOL)a;
 - (BOOL) shouldIndentWhileEditing;
 - (BOOL) showingDeleteConfirmation;
 - (BOOL) showsReorderControl;
 - (BOOL) _isAnimating;
 - (void) willTransitionToState:(Q)a;
 - (void) _setDeleteCancelationAnimationInProgress:(BOOL)a;
 - (id) backgroundView;
 - (void) didTransitionToState:(Q)a;
 - (q) separatorStyle;
 - ({UIEdgeInsets=dddd}) _backgroundInset;
 - (void) _setSeparatorDrawsInVibrantLightMode:(BOOL)a;
 - (void) _tableViewDidUpdateMarginWidth;
 - (BOOL) _needsHeightCalculation;
 - (BOOL) _isInModalViewController;
 - (void) setEditing:(BOOL)a;
 - (d) _marginWidth;
 - (id) _titleForDeleteConfirmationButton;
 - (BOOL) _allowsReorderingWhenNotEditing;
 - (id) _separatorEffect;
 - (id) textColor;
 - (q) textAlignment;
 - (void) setSelectedBackgroundView:(id)a;
 - (id) selectedImage;
 - (id) imageView;
 - (void) _setBadgeText:(id)a;
 - (BOOL) _isHighlighted;
 - (void) _uiRemoveControlMinusButtonHideAnimationDone:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) removeControl:(id)astartFrameForTarget:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) removeControl:(id)aendFrameForTarget:(id)b;
 - (void) removeControlWillHideRemoveConfirmation:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) backgroundRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setShowingDeleteConfirmation:(BOOL)a;
 - (void) removeControl:(id)awasCanceledForTarget:(id)b;
 - (void) insertControl:(id)ashouldInsertWithTarget:(id)b;
 - (void) removeControl:(id)awillRemoveTarget:(id)b;
 - (id) _badge;
 - (void) cut:(id)a;
 - (void) copy:(id)a;
 - (void) paste:(id)a;
 - (id) _layoutDebuggingTitle;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsUpdateConstraints;
 - (id) _removeControl;
 - (void) _grabberBeganReorder:(id)a;
 - (void) _grabberDragged:(id)ayDelta:(f)b;
 - (void) _grabberReleased:(id)a;
 - (void) setSelectionTintColor:(id)a;
 - (void) setSelectionStyle:(q)a;
 - (q) selectionStyle;
 - (id) selectionTintColor;
 - (id) _multiselectBackgroundColor;
 - (void) _setSeparatorDrawsInVibrantLightModeUIAppearance:(id)a;
 - (id) oldEditingData;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) reorderRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setOldEditingData:(id)a;
 - (void) _releaseReorderingControl;
 - (id) _tintedDisclosureImagePressed:(BOOL)a;
 - (id) _detailDisclosureImage:(BOOL)a;
 - (id) _checkmarkImage:(BOOL)a;
 - (id) _defaultAccessoryView;
 - (void) _releaseRemoveControl;
 - (d) _separatorHeight;
 - (void) _updateHighlightColorsForView:(id)ahighlighted:(BOOL)b;
 - (BOOL) _isCurrentlyConsideredHighlighted;
 - (id) _reorderingControl;
 - (id) _currentAccessoryView:(BOOL)a;
 - (void) _menuDismissed:(id)a;
 - (q) tableViewStyle;
 - (BOOL) _insetsBackground;
 - (i) sectionLocation;
 - (BOOL) _drawsTopShadow;
 - (id) _selectedBackgroundView:(BOOL)a;
 - (id) topShadowColor;
 - (d) selectionFadeDuration;
 - (void) _topShadowDidFadeOut;
 - (void) _performAction:(SEL)asender:(id)b;
 - (void) _updateSeparatorContent;
 - (d) _rightMarginWidth;
 - (BOOL) _showFullLengthTopSeparatorForTopOfSection;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _separatorFrame;
 - (BOOL) _shouldHideSeparator;
 - (BOOL) _showSeparatorAtTopOfSection;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _topSeparatorFrame;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})areuseIdentifier:(id)b;
 - (void) setSelectionFadeDuration:(d)a;
 - (void) _releaseTextLabel;
 - (void) _releaseDetailTextLabel;
 - (id) editingData:(BOOL)a;
 - (void) _longPressGestureRecognized:(id)a;
 - (void) _setupTableViewCellCommon;
 - (void) _drawContentInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aselected:(BOOL)b;
 - (void) _setupMenuGesture;
 - (void) _didCreateContentView;
 - (id) _textLabel;
 - (id) _detailTextLabel;
 - (id) _textLabel:(BOOL)a;
 - (void) _setFont:(id)alayout:(BOOL)b;
 - (void) _updateTopShadowView:(BOOL)a;
 - (void) _setupSelectedBackgroundView;
 - (void) selectedBackgroundViewChange:(id)afinished:(id)bcontext:(id)c;
 - (void) setSelectedBackgroundView:(id)aanimated:(BOOL)b;
 - (void) _resetSelectionTimer;
 - (void) _setSelectionStyle:(q)aselectionTintColor:(id)b;
 - (void) _deselectAnimationFinished;
 - (void) _updateHighlightColorsForAnimationHalfwayPoint;
 - (void) _cancelInternalPerformRequests;
 - (void) showSelectedBackgroundView:(BOOL)aanimated:(BOOL)b;
 - (void) _delayedDeselect;
 - (void) _removeRemoveControl;
 - (void) removeEditingData;
 - (void) _willTransitionToState:(Q)a;
 - (void) _didTransitionToState:(Q)a;
 - (void) _createReorderControlIfNeeded;
 - (void) _syncAccessoryViewsIfNecessary;
 - (id) _accessoryView:(BOOL)a;
 - (id) _editingAccessoryView:(BOOL)a;
 - (void) _updateContentClip;
 - (void) _editingTransitionAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (BOOL) wasSwiped;
 - (id) _createRemoveControlForStyle:(q)a;
 - (void) _showReorderControl;
 - (void) _layoutSubviewsAnimated:(BOOL)a;
 - (d) _editingButtonOffset;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessoryRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})aaccessoryView:(id)bisCustom:(BOOL)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _delegateConfirmationRect;
 - (q) indentationLevel;
 - (d) indentationWidth;
 - ({CGSize=dd}) _textInsetSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) imageRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) _imageInsetSize;
 - (void) _updateViewsForDeleteButton;
 - (void) _updateCellMaskViewsForView:(id)abackdropView:(id)b;
 - (id) _reorderingSeparatorView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setSectionLocation:(i)a;
 - (void) _setSectionLocation:(i)aanimated:(BOOL)bforceBackgroundSetup:(BOOL)c;
 - (void) _updateSeparatorContent:(BOOL)a;
 - (id) _editableTextField;
 - (void) setEditingStyle:(q)a;
 - (void) _willBeDeleted;
 - (void) _setGrabberHidden:(BOOL)a;
 - (id) _disclosureImage:(BOOL)a;
 - (id) _disclosurePressedImage:(BOOL)a;
 - (id) _disclosureChevronImage:(BOOL)a;
 - (id) _newAccessoryView:(BOOL)a;
 - (q) editingAccessoryType;
 - (void) _clearOpaqueViewState:(id)a;
 - (id) editableTextField;
 - (void) _actionButtonPushed:(id)a;
 - (void) _handleSwipeDeleteCancelation:(id)a;
 - (BOOL) _isFocusable;
 - (void) _finishedFadingGrabber:(id)afinished:(BOOL)b;
 - (void) _contentViewLabelTextDidChange:(id)a;
 - (void) _setDrawsTopSeparatorDuringReordering:(BOOL)a;
 - (void) setAccessoryActionSegueTemplate:(id)a;
 - (void) setSelectionSegueTemplate:(id)a;
 - (BOOL) _shouldHaveFullLengthBottomSeparator;
 - (BOOL) _shouldHaveFullLengthTopSeparator;
 - (BOOL) _drawsSeparatorAtTopOfSection;
 - (BOOL) _drawsSeparatorAtBottomOfSection;
 - (void) setSelectedTextColor:(id)a;
 - (id) selectedTextColor;
 - (void) setSelectedImage:(id)a;
 - (id) _badgeText;
 - (id) multipleSelectionBackgroundView;
 - (void) setMultipleSelectionBackgroundView:(id)a;
 - (id) selectedBackgroundView;
 - (id) _contentBackgroundColor;
 - (void) setTableBackgroundColor:(id)a;
 - (id) bottomShadowColor;
 - (BOOL) isAtLeastHalfSelected;
 - (f) selectionPercent;
 - (id) selectedOverlayView;
 - (void) setShowsReorderControl:(BOOL)a;
 - (void) setShouldIndentWhileEditing:(BOOL)a;
 - (void) setAccessoryView:(id)a;
 - (id) accessoryView;
 - (void) _setAccessoryTintColor:(id)a;
 - (id) _accessoryTintColor;
 - (void) setEditingAccessoryType:(q)a;
 - (void) setEditingAccessoryView:(id)a;
 - (id) editingAccessoryView;
 - (void) setHidesAccessoryWhenEditing:(BOOL)a;
 - (BOOL) hidesAccessoryWhenEditing;
 - (void) setIndentationWidth:(d)a;
 - (void) setClipsContents:(BOOL)a;
 - (BOOL) clipsContents;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEditAction:(SEL)a;
 - (SEL) editAction;
 - (void) setAccessoryAction:(SEL)a;
 - (SEL) accessoryAction;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForState:(Q)a;
 - (id) _detailTextLabel:(BOOL)a;
 - (id) _editableTextField:(BOOL)a;
 - (id) _imageView:(BOOL)a;
 - (id) _badge:(BOOL)a;
 - (void) _setReorderControlImage:(id)a;
 - (id) _reorderControlImage;
 - (void) _drawSeparatorInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _animateFloatingSeparatorForInsertion:(BOOL)awithRowAnimation:(q)b;
 - (void) _animateInnerShadowForInsertion:(BOOL)awithRowAnimation:(q)b;
 - (void) editControlWasClicked:(id)a;
 - (void) deleteConfirmationControlWasClicked:(id)a;
 - (void) deleteConfirmationControlWasCancelled:(id)a;
 - (BOOL) _isReorderable;
 - (id) _customAccessoryView:(BOOL)a;
 - (id) _customEditingAccessoryView:(BOOL)a;
 - (id) _backgroundView:(BOOL)a;
 - (id) _topShadowView:(BOOL)a;
 - (BOOL) _hasAccessoryView;
 - (BOOL) _hasEditingAccessoryView;
 - (SEL) _accessoryAction;
 - (BOOL) _shouldSaveOpaqueStateForView:(id)a;
 - (BOOL) _isUsingOldStyleMultiselection;
 - (BOOL) _isDeleteCancelationAnimationInProgress;
 - (id) _deleteConfirmationView;
 - (BOOL) _isDeleteAnimationInProgress;
 - (void) _swipeDeleteButtonPushed;
 - (void) _swipeAccessoryButtonPushed;
 - (void) setTextFieldOffset:(d)a;
 - (d) textFieldOffset;
 - (void) setPlaceHolderValue:(id)a;
 - (void) textFieldDidBecomeFirstResponder:(id)a;
 - (void) setReturnAction:(SEL)a;
 - (SEL) returnAction;
 - (BOOL) _separatorDrawsInVibrantLightMode;
 - (d) _indexBarWidth;
 - (BOOL) _separatorHidden;
 - (BOOL) _usesRoundedGroups;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) layoutManager;
 - (void) setLayoutManager:(id)a;
 - (void) setBackgroundColor:(id)a;
 - (void) removeFromSuperview;
 - (id) contentView;
 - (void) setImage:(id)a;
 - (q) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) backgroundColor;
 - (id) font;
 - (void) setDrawingEnabled:(BOOL)a;
 - (q) lineBreakMode;
 - (void) setLineBreakMode:(q)a;
 - (id) image;
 - (id) text;


@end
