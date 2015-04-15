
@protocol _UIBasicAnimationFactory, NSCoding;
@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, NSCoding> {

    NSMutableArray* _segments;
    long long _selectedSegment;
    long long _highlightedSegment;
    UIView* _removedSegment;
    long long _barStyle;
    id _appearanceStorage;
    UIView* _backgroundBarView;
    double _enabledAlpha;
    {?="style"b3"size"b2"delegateAlwaysNotifiesDelegateOfSegmentClicks"b1"momentaryClick"b1"tracking"b1"autosizeToFitSegments"b1"isSizingToFit"b1"autosizeText"b1"transparentBackground"b1"useProportionalWidthSegments"b1"translucentBackground"b1"appearanceNeedsUpdate"b1} _segmentedControlFlags;
    BOOL __hasTranslucentOptionsBackground;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (double) defaultHeight;
 + (id) _modernDividerImage;
 + (id) _modernBackgroundSelected:(BOOL)ahighlighted:(BOOL)b;
 + (double) defaultHeightForStyle:(long long)asize:(int)b;
 + (double) defaultHeightForStyle:(long long)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) _populateArchivedSubviews:(id)a ;
 - (void) setAlpha:(double)a ;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a ;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (id) _basicAnimationForView:(id)a withKeyPath:(id)b ;
 - (BOOL) gestureRecognizerShouldBegin:(id)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (id) scriptingInfoWithChildren;
 - (BOOL) useBlockyMagnificationInClassic;
 - (id) _tintColorArchivingKey;
 - (void) setTintColor:(id)a ;
 - (void) sizeToFit;
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - (void) updateForMiniBarState:(BOOL)a ;
 - (void) setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) setControlSize:(int)a ;
 - (void) setBarStyle:(long long)a ;
 - (long long) barStyle;
 - (double) _backgroundVerticalPositionAdjustmentForBarMetrics:(long long)a ;
 - (int) controlSize;
 - (void) setBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (void) _setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _setBackgroundVerticalPositionAdjustment:(double)a forBarMetrics:(long long)b ;
 - (void) _setBackgroundImage:(id)a forState:(unsigned long long)b barMetrics:(long long)c ;
 - (BOOL) shouldTrack;
 - (BOOL) pointMostlyInside:({CGPoint=dd})a withEvent:(id)b ;
 - (id) _optionsBackgroundImage;
 - (BOOL) _isInMiniBar;
 - (BOOL) _isInTranslucentToolbar;
 - (BOOL) isMomentary;
 - (double) _barHeight;
 - (void) setMomentary:(BOOL)a ;
 - (id) viewForBaselineLayout;
 - (void) _commonSegmentedControlInit;
 - (id) _createAndAddSegmentAtIndex:(int)a position:(unsigned int)b withInfo:(id)c ;
 - (void) setSegmentedControlStyle:(long long)a ;
 - (void) _setSelectedSegmentIndex:(long long)a notify:(BOOL)b animate:(BOOL)c ;
 - (void) _setEnabled:(BOOL)a forcePropagateToSegments:(BOOL)b ;
 - (void) removeAllSegments;
 - (void) _setCurrentBackgroundImage:(id)a ;
 - (void) _updateOptionsBackground;
 - (void) _updateDividerImageForSegmentAtIndex:(unsigned long long)a ;
 - (void) _setNeedsAppearanceUpdate;
 - (void) _setControlSize:(int)a andInvalidate:(BOOL)b ;
 - (void) _insertSegment:(int)a withInfo:(id)b animated:(BOOL)c ;
 - (void) setSelectedSegmentIndex:(long long)a ;
 - (void) _removeSegmentAnimationFinished:(id)a finished:(id)b context:(id)c ;
 - (void) setRemovedSegment:(id)a ;
 - (void) _setSelectedSegmentIndex:(long long)a notify:(BOOL)b ;
 - (BOOL) _shouldSelectSegmentAtIndex:(long long)a ;
 - (void) _setSelected:(BOOL)a forSegmentAtIndex:(int)b forceInfoDisplay:(BOOL)c ;
 - (void) _resetForAppearanceChange;
 - (void) _setHighlightedSegmentHighlighted:(BOOL)a ;
 - (void) highlightSegment:(int)a ;
 - (void) _clearSelectedSegment;
 - (void) _tapSegmentAtPoint:({CGPoint=dd})a ;
 - (void) _setDividerImage:(id)a forLeftSegmentState:(unsigned long long)b rightSegmentState:(unsigned long long)c barMetrics:(long long)d ;
 - (id) _createSegmentAtIndex:(int)a position:(unsigned int)b withInfo:(id)c ;
 - (void) selectSegment:(int)a ;
 - (BOOL) apportionsSegmentWidthsByContent;
 - (void) setApportionsSegmentWidthsByContent:(BOOL)a ;
 - (id) initWithItems:(id)a ;
 - (BOOL) _optionsShadowHidden;
 - (void) _setOptionsShadowHidden:(BOOL)a ;
 - (void) _setSegmentedControlAppearance:(^{?=@dd{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}{?=@@@@@{CGSize=dd}}B})a ;
 - (void) _setAppearanceIsTiled:(BOOL)a leftCapWidth:(unsigned long long)b rightCapWidth:(unsigned long long)c ;
 - (long long) segmentedControlStyle;
 - (long long) segmentControlStyle;
 - (void) setSegmentControlStyle:(long long)a ;
 - (void) _setAutosizeText:(BOOL)a ;
 - (void) _setTranslucentOptionsBackground:(BOOL)a ;
 - (void) setTransparentBackground:(BOOL)a ;
 - (BOOL) transparentBackground;
 - (BOOL) _usesNewAnimations;
 - (void) _setUsesNewAnimations:(BOOL)a ;
 - (void) insertSegmentWithTitle:(id)a atIndex:(unsigned long long)b animated:(BOOL)c ;
 - (void) insertSegmentWithImage:(id)a atIndex:(unsigned long long)b animated:(BOOL)c ;
 - (void) _insertSegmentWithAttributedTitle:(id)a atIndex:(unsigned long long)b animated:(BOOL)c ;
 - (void) removeSegmentAtIndex:(unsigned long long)a animated:(BOOL)b ;
 - (void) setTitle:(id)a forSegmentAtIndex:(unsigned long long)b ;
 - (id) titleForSegmentAtIndex:(unsigned long long)a ;
 - (void) _setAttributedTitle:(id)a forSegmentAtIndex:(unsigned long long)b ;
 - (id) _attributedTitleForSegmentAtIndex:(unsigned long long)a ;
 - (void) setImage:(id)a forSegmentAtIndex:(unsigned long long)b ;
 - (id) imageForSegmentAtIndex:(unsigned long long)a ;
 - (void) setWidth:(double)a forSegmentAtIndex:(unsigned long long)b ;
 - (double) widthForSegmentAtIndex:(unsigned long long)a ;
 - (void) setContentOffset:({CGSize=dd})a forSegmentAtIndex:(unsigned long long)b ;
 - ({CGSize=dd}) contentOffsetForSegmentAtIndex:(unsigned long long)a ;
 - (void) setEnabled:(BOOL)a forSegmentAtIndex:(unsigned long long)b ;
 - (BOOL) isEnabledForSegmentAtIndex:(unsigned long long)a ;
 - (unsigned long long) numberOfSegments;
 - (long long) selectedSegmentIndex;
 - (void) _animateContentChangeWithAnimations:(@?)a completion:(@?)b ;
 - (id) removedSegment;
 - (void) _setOptionsBackgroundImage:(id)a ;
 - (id) backgroundImageForState:(unsigned long long)a barMetrics:(long long)b ;
 - (void) setDividerImage:(id)a forLeftSegmentState:(unsigned long long)b rightSegmentState:(unsigned long long)c barMetrics:(long long)d ;
 - (id) dividerImageForLeftSegmentState:(unsigned long long)a rightSegmentState:(unsigned long long)b barMetrics:(long long)c ;
 - (id) titleTextAttributesForState:(unsigned long long)a ;
 - (void) setContentPositionAdjustment:({UIOffset=dd})a forSegmentType:(long long)b barMetrics:(long long)c ;
 - ({UIOffset=dd}) contentPositionAdjustmentForSegmentType:(long long)a barMetrics:(long long)b ;
 - (id) _badgeValueForSegmentAtIndex:(unsigned long long)a ;
 - (void) _setBadgeValue:(id)a forSegmentAtIndex:(unsigned long long)b ;
 - (BOOL) _hasTranslucentOptionsBackground;
 - (id) infoViewForSegment:(long long)a ;
 - (void) setSelectedSegment:(long long)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a withStyle:(long long)b withItems:(id)c ;
 - (void) setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)a ;
 - (void) setImagePadding:({CGSize=dd})a forSegment:(unsigned long long)b ;
 - (void) addSegmentWithTitle:(id)a ;
 - (void) insertSegment:(unsigned long long)a withTitle:(id)b animated:(BOOL)c ;
 - (void) insertSegment:(unsigned long long)a withImage:(id)b animated:(BOOL)c ;
 - (void) removeSegment:(unsigned long long)a animated:(BOOL)b ;
 - (void) setTitle:(id)a forSegment:(unsigned long long)b ;
 - (id) titleForSegment:(unsigned long long)a ;
 - (void) setImage:(id)a forSegment:(unsigned long long)b ;
 - (id) imageForSegment:(unsigned long long)a ;
 - (void) setWidth:(float)a forSegment:(unsigned long long)b ;
 - (float) widthForSegment:(unsigned long long)a ;
 - (void) setContentOffset:({CGSize=dd})a forSegment:(unsigned long long)b ;
 - ({CGSize=dd}) contentOffsetForSegment:(unsigned long long)a ;
 - (void) setEnabled:(BOOL)a forSegment:(unsigned long long)b ;
 - (BOOL) isEnabledForSegment:(unsigned long long)a ;
 - (long long) selectedSegment;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setEnabled:(BOOL)a ;


@end
