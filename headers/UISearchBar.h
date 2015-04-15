
@protocol UITextInputTraits_Private, UIStatusBarTinting, _UIBarPositioningInternal, UIBarPositioning, UITextInputTraits;
@interface UISearchBar : UIView <UITextInputTraits_Private, UIStatusBarTinting, _UIBarPositioningInternal, UIBarPositioning, UITextInputTraits> {

    UISearchBarTextField* _searchField;
    UILabel* _promptLabel;
    UIButton* _cancelButton;
    <UISearchBarDelegate><UISearchBarDelegate_Private>* _delegate;
    id _controller;
    UIColor* _barTintColor;
    UIImageView* _separator;
    NSString* _cancelButtonText;
    NSArray* _scopes;
    long long _selectedScope;
    UIView* _background;
    UIView* _scopeBar;
    UIView* _scopeBarContainerView;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInset;
    UIImageView* _shadowView;
    id _appearanceStorage;
    _UISearchBarNavigationItem* _navigationItem;
    _UISearchBarScopeBarBackground* _scopeBarBackgroundView;
    UIBarButtonItem* _animatedAppearanceBarButtonItem;
    _UIBackdropView* _backdrop;
    unsigned long long _backdropStyle;
    UIView* _maskView;
    UITapGestureRecognizer* _tapToActivateGestureRecognizer;
    UIBarButtonItem* _cancelBarButtonItem;
    UITextInputTraits* _textInputTraits;
    UIButton* _leftButton;
    {?="barStyle"b3"showsBookmarkButton"b1"showsCancelButton"b1"barTranslucence"b3"autoDisableCancelButton"b1"showsScopeBar"b1"hideBackground"b1"combinesLandscapeBars"b1"usesEmbeddedAppearance"b1"showsSearchResultsButton"b1"searchResultsButtonSelected"b1"pretendsIsInBar"b1"disabled"b1"backgroundLayoutNeedsUpdate"b1"containedInNavigationPalette"b1"containedInNavigationBar"b1"containedInToolBar"b1"drawsBackgroundInPalette"b1"centerPlaceholder"b1"searchFieldLeftViewMode"b2"cancelButtonWantsLetterpress"b1} _searchBarFlags;
    BOOL __forceCenteredPlaceholderLayout;
    BOOL __transplanting;
    UIColor* _statusBarTintColor;
    UIView* _inputAccessoryView;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    UISearchController* __searchController;
    unsigned long long __scopeBarPosition;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) didMoveToWindow;
 - (void) bringSubviewToFront:(id)a;
 - (void) layoutSubviews;
 - (void) sendSubviewToBack:(id)a;
 - (id) _textColor;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) _backgroundView;
 - (id) _statusBarTintColor;
 - (BOOL) isTranslucent;
 - ({UIEdgeInsets=dddd}) contentInset;
 - (void) setText:(id)a;
 - (void) setTintColor:(id)a;
 - (BOOL) canBecomeFirstResponder;
 - (void) _addSubview:(id)apositioned:(long long)brelativeTo:(id)c;
 - (BOOL) isFirstResponder;
 - (void) willMoveToWindow:(id)a;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) didMoveToSuperview;
 - (void) willMoveToSuperview:(id)a;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) setContentInset:({UIEdgeInsets=dddd})a;
 - (id) backgroundImageForBarPosition:(long long)abarMetrics:(long long)b;
 - (id) backgroundImage;
 - (id) prompt;
 - (void) setPrompt:(id)a;
 - (void) setBackgroundImage:(id)aforBarMetrics:(long long)b;
 - (id) _effectiveBarTintColor;
 - (void) setBackgroundImage:(id)aforBarPosition:(long long)bbarMetrics:(long long)c;
 - (void) _updateOpacity;
 - (void) _setBarPosition:(long long)a;
 - (void) setBarStyle:(long long)a;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a;
 - (void) setBarTintColor:(id)a;
 - (BOOL) _shouldUseNavigationBarHeight;
 - (long long) _barPosition;
 - (long long) barPosition;
 - (id) barTintColor;
 - (void) _updateInsetsForTableView:(id)a;
 - (void) takeTraitsFrom:(id)a;
 - (BOOL) _isEnabled;
 - (void) setPlaceholder:(id)a;
 - (BOOL) textFieldShouldBeginEditing:(id)a;
 - (BOOL) textFieldShouldEndEditing:(id)a;
 - (BOOL) textField:(id)ashouldChangeCharactersInRange:({_NSRange=QQ})breplacementString:(id)c;
 - (BOOL) textFieldShouldClear:(id)a;
 - (id) cancelButton;
 - (void) setCancelButton:(id)a;
 - (id) _navigationItem;
 - (void) reloadInputViews;
 - (BOOL) canResignFirstResponder;
 - (id) inputAccessoryView;
 - (void) setBackgroundImage:(id)a;
 - (void) setInputAccessoryView:(id)a;
 - (id) searchField;
 - (void) setSearchFieldBackgroundImage:(id)aforState:(unsigned long long)b;
 - (id) searchFieldBackgroundImageForState:(unsigned long long)a;
 - (id) scopeBarBackgroundImage;
 - (void) setScopeBarBackgroundImage:(id)a;
 - (void) _setMaskActive:(BOOL)a;
 - (void) tappedSearchBar:(id)a;
 - (void) _setMaskBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setScopeButtonTitles:(id)a;
 - (void) _scopeChanged:(id)a;
 - (void) setUsesEmbeddedAppearance:(BOOL)a;
 - (void) _setupSearchField;
 - (void) setSearchBarStyle:(unsigned long long)a;
 - (void) _setupPromptLabel;
 - (void) _setupCancelButton;
 - (void) _setShowsSeparator:(BOOL)a;
 - (void) setSearchTextPositionAdjustment:({UIOffset=dd})a;
 - (void) setSearchFieldBackgroundPositionAdjustment:({UIOffset=dd})a;
 - (id) _scopeBarContainer;
 - (id) scopeButtonTitles;
 - (id) placeholder;
 - ({UIOffset=dd}) searchTextPositionAdjustment;
 - ({UIOffset=dd}) searchFieldBackgroundPositionAdjustment;
 - (BOOL) centerPlaceholder;
 - (BOOL) _consideredInBarWithSuperview:(id)a;
 - (void) _identifyBarContainer;
 - (void) setDrawsBackgroundInPalette:(BOOL)a;
 - (void) _removeMarginsIfNecessary;
 - (id) _searchBarTextField;
 - (void) _updateSearchFieldArt;
 - (id) _currentSeparatorImage;
 - (void) _updateScopeBarBackground;
 - (void) _updatePlaceholderColor;
 - (void) _updateRightView;
 - (void) _updateMagnifyingGlassView;
 - (id) _imageForSearchBarIcon:(long long)astate:(unsigned long long)b;
 - (void) _resultsListButtonPressed;
 - (void) _bookmarkButtonPressed;
 - (void) setShowsCancelButton:(BOOL)aanimated:(BOOL)b;
 - (void) _allowCursorToAppear:(BOOL)a;
 - (void) _destroyCancelButton;
 - (BOOL) _isInBar;
 - (void) _displayNavBarCancelButton:(BOOL)aanimated:(BOOL)b;
 - (id) _cancelBarButtonItem;
 - (void) _cancelButtonPressed;
 - (BOOL) _containedInNavigationPalette;
 - (BOOL) drawsBackgroundInPalette;
 - (BOOL) _shouldCombineLandscapeBarsForOrientation:(long long)a;
 - (unsigned long long) _scopeBarPosition;
 - (double) _landscapeScopeBarWidth;
 - ({UIEdgeInsets=dddd}) _scopeBarInsets;
 - (double) _availableBoundsWidthForSize:({CGSize=dd})a;
 - (BOOL) _searchFieldWidthShouldBeFlexible;
 - (void) _setBarTintColor:(id)aforceUpdate:(BOOL)b;
 - (void) _setupLeftButton;
 - (long long) _barMetricsForOrientation:(long long)a;
 - (double) _barHeightForBarMetrics:(long long)a;
 - (BOOL) _shouldCombineLandscapeBars;
 - (double) _scopeBarHeight;
 - (double) _defaultHeight;
 - (double) _availableBoundsWidth;
 - (double) _landscapeSearchFieldWidth;
 - (id) _viewForChildViews;
 - (BOOL) _scopeBarIsVisible;
 - (void) _layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)a;
 - (double) _searchFieldHeight;
 - (id) _navigationBarForShadow;
 - (BOOL) _shouldDisplayShadow;
 - (id) _makeShadowView;
 - (id) controller;
 - (void) _setUpScopeBar;
 - (void) _setShowsScopeBar:(BOOL)aanimateOpacity:(BOOL)b;
 - (void) _effectiveBarTintColorDidChange:(BOOL)a;
 - (void) _updateNeedForBackdrop;
 - (id) _glyphAndTextColor:(BOOL)a;
 - (id) _imageForSearchBarIcon:(long long)astate:(unsigned long long)bcustomImage:(^B)c;
 - (BOOL) _isAtTop;
 - (void) _applySearchBarStyle;
 - (id) _scopeBar;
 - (void) setShowsSearchResultsButton:(BOOL)a;
 - (BOOL) showsSearchResultsButton;
 - (void) setSearchResultsButtonSelected:(BOOL)a;
 - (BOOL) isSearchResultsButtonSelected;
 - (void) setShowsBookmarkButton:(BOOL)a;
 - (BOOL) showsBookmarkButton;
 - (void) setShowsCancelButton:(BOOL)a;
 - (BOOL) showsCancelButton;
 - (void) _setShowsCancelButton:(BOOL)a;
 - (void) setCombinesLandscapeBars:(BOOL)a;
 - (BOOL) combinesLandscapeBars;
 - (BOOL) _wouldCombineLandscapeBarsForSize:({CGSize=dd})a;
 - (BOOL) usesEmbeddedAppearance;
 - (id) _leftButton;
 - (void) _setShadowVisibleIfNecessary:(BOOL)a;
 - (void) setSelectedScopeButtonIndex:(long long)a;
 - (long long) selectedScopeButtonIndex;
 - (void) _setScopeBarHidden:(BOOL)a;
 - (void) setShowsScopeBar:(BOOL)a;
 - (BOOL) showsScopeBar;
 - (void) _setStatusBarTintColor:(id)a;
 - (id) _separatorImage;
 - (void) _setSeparatorImage:(id)a;
 - (void) setImage:(id)aforSearchBarIcon:(long long)bstate:(unsigned long long)c;
 - (id) imageForSearchBarIcon:(long long)astate:(unsigned long long)b;
 - (void) setScopeBarButtonBackgroundImage:(id)aforState:(unsigned long long)b;
 - (id) scopeBarButtonBackgroundImageForState:(unsigned long long)a;
 - (void) setScopeBarButtonDividerImage:(id)aforLeftSegmentState:(unsigned long long)brightSegmentState:(unsigned long long)c;
 - (id) scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arightSegmentState:(unsigned long long)b;
 - (void) setScopeBarButtonTitleTextAttributes:(id)aforState:(unsigned long long)b;
 - (id) scopeBarButtonTitleTextAttributesForState:(unsigned long long)a;
 - (void) setPositionAdjustment:({UIOffset=dd})aforSearchBarIcon:(long long)b;
 - ({UIOffset=dd}) positionAdjustmentForSearchBarIcon:(long long)a;
 - (id) _animatedAppearanceBarButtonItem;
 - (void) _setBackgroundLayoutNeedsUpdate:(BOOL)a;
 - (void) _setBackdropStyle:(unsigned long long)a;
 - (unsigned long long) _backdropStyle;
 - (void) setCenterPlaceholder:(BOOL)a;
 - (long long) searchFieldLeftViewMode;
 - (void) setSearchFieldLeftViewMode:(long long)a;
 - (id) _alternateTitle;
 - (void) _setCancelButtonWantsLetterpress;
 - (unsigned long long) searchBarStyle;
 - (BOOL) _forceCenteredPlaceholderLayout;
 - (void) set_forceCenteredPlaceholderLayout:(BOOL)a;
 - (id) _searchController;
 - (void) _setSearchController:(id)a;
 - (BOOL) _transplanting;
 - (void) _setTransplanting:(BOOL)a;
 - (void) _setScopeBarPosition:(unsigned long long)a;
 - (id) _scopeBarBackgroundView;
 - (BOOL) pretendsIsInBar;
 - (void) _searchFieldBeginEditing;
 - (void) _searchFieldEditingChanged;
 - (void) _searchFieldEndEditing;
 - (void) _searchFieldReturnPressed;
 - (void) _setupCancelButtonWithAppearance:(id)a;
 - (void) _setEnabled:(BOOL)aanimated:(BOOL)b;
 - (void) _setScopeBarSegmentsEnabled:(BOOL)a;
 - (void) setPretendsIsInBar:(BOOL)a;
 - (BOOL) _textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)a;
 - (void) _setCancelButtonText:(id)a;
 - (void) _setAutoDisableCancelButton:(BOOL)a;
 - (void) _updateBackgroundToBackdropStyle:(long long)a;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (double) _autolayoutSpacingAtEdge:(int)ainContainer:(id)b;
 - (double) _autolayoutSpacingAtEdge:(int)anextToNeighbor:(id)b;
 - (BOOL) _hasCustomAutolayoutNeighborSpacing;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (void) _commonInit;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setEnabled:(BOOL)a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) textInputTraits;
 - (void) setController:(id)a;
 - (BOOL) drawsBackground;
 - (void) setDrawsBackground:(BOOL)a;
 - (id) text;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;


@end
