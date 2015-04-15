
@protocol _UIScrollToTopView, NSCoding;
@interface UIScrollView : UIView <_UIScrollToTopView, NSCoding> {

    id _delegate;
    {CGSize="width"d"height"d} _contentSize;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInset;
    UIImageView _verticalScrollIndicator;
    UIImageView _horizontalScrollIndicator;
    _UIStaticScrollBar _staticScrollBar;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _scrollIndicatorInset;
    double _startOffsetX;
    double _startOffsetY;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    double _lastUpdateTime;
    double _minimumZoomScale;
    double _maximumZoomScale;
    UIView _zoomView;
    double _horizontalVelocity;
    double _verticalVelocity;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    id _scrollHeartbeat;
    {CGPoint="x"d"y"d} _pageDecelerationTarget;
    {CGSize="width"d"height"d} _decelerationFactor;
    {CGPoint="x"d"y"d} _adjustedDecelerationTarget;
    {CGSize="width"d"height"d} _adjustedDecelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    ^@ _shadows;
    id _scrollNotificationViews;
    double _contentOffsetAnimationDuration;
    id _animation;
    id _zoomAnimation;
    id _pinch;
    id _pan;
    id _swipe;
    id _touchDelayGestureRecognizer;
    UISwipeGestureRecognizer _lowFidelitySwipeGestureRecognizers;
    UIScrollView _draggingChildScrollView;
    {CGPoint="x"d"y"d} _parentAdjustment;
    double _pagingSpringPull;
    double _pagingFriction;
    long long _fastScrollCount;
    double _fastScrollMultiplier;
    double _fastScrollStartMultiplier;
    double _fastScrollEndTime;
    {CGPoint="x"d"y"d} _rotationCenterPoint;
    double _accuracy;
    unsigned long long _zoomAnimationCount;
    {CGSize="width"d"height"d} _accumulatedOffset;
    long long _touchLevel;
    double _savedKeyboardAdjustmentDelta;
    {?="tracking"b1"dragging"b1"verticalBounceEnabled"b1"horizontalBounceEnabled"b1"verticalBouncing"b1"horizontalBouncing"b1"bouncesZoom"b1"zoomBouncing"b1"alwaysBounceHorizontal"b1"alwaysBounceVertical"b1"preventScrollingContainer"b1"canCancelContentTouches"b1"delaysContentTouches"b1"programmaticScrollDisabled"b1"scrollDisabled"b1"zoomDisabled"b1"scrollTriggered"b1"showsHorizontalScrollIndicator"b1"showsVerticalScrollIndicator"b1"indicatorStyle"b2"inZoom"b1"hideIndicatorsInZoom"b1"pushedTrackingMode"b1"displayingScrollIndicators"b1"verticalIndicatorShrunk"b1"horizontalIndicatorShrunk"b1"contentFitDisableScrolling"b1"pagingEnabled"b1"pagingLeft"b1"pagingRight"b1"pagingUp"b1"pagingDown"b1"lastHorizontalDirection"b1"lastVerticalDirection"b1"dontScrollToTop"b1"scrollingToTop"b1"singleFingerPan"b1"autoscrolling"b1"automaticContentOffsetAdjustmentDisabled"b1"skipStartOffsetAdjustment"b1"delegateScrollViewDidScroll"b1"delegateScrollViewDidZoom"b1"delegateContentSizeForZoomScale"b1"preserveCenterDuringRotation"b1"delaysTrackingWhileDecelerating"b1"pinnedZoomMin"b1"pinnedXMin"b1"pinnedYMin"b1"pinnedXMax"b1"pinnedYMax"b1"skipLinkChecks"b1"staysCenteredDuringPinch"b1"wasDelayingPinchForSystemGestures"b1"systemGesturesRecognitionPossible"b1"disableContentOffsetRounding"b1"alwaysDisableContentOffsetRounding"b1"adjustedDecelerationTargetX"b1"adjustedDecelerationTargetY"b1"hasScrolled"b1"wantsConstrainedContentSize"b1"constrainedContentSizeNeedsUpdate"b1"updateInsetBottom"b1"beingDraggedByChildScrollView"b1"adjustsTargetsOnContentOffsetChanges"b1"forwardsTouchesUpResponderChain"b1"firstResponderKeyboardAvoidanceDisabled"b1"interruptingDeceleration"b1} _scrollViewFlags;
    BOOL _useContentDimensionVariablesForConstraintLowering;
    id _scrollTestParameters;
    long long _keyboardDismissMode;
    NSISVariable _contentWidthVariable;
    NSISVariable _contentHeightVariable;
    NSArray _automaticContentConstraints;
    {CGPoint="x"d"y"d} _zoomAnchorPoint;
}
 + (SEL) _pinchGestureAction;
 + (SEL) _panGestureAction;
 + (void) _scrollWithNSTimer:(BOOL)a;
 + (id) _implicitAnimationCulprits;

 - (void) nsis_valueOfVariable:(id)adidChangeInEngine:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setUserInteractionEnabled:(BOOL)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) setShowsVerticalScrollIndicator:(BOOL)a;
 - (void) layoutSubviews;
 - (BOOL) isDragging;
 - (BOOL) isDecelerating;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (void) setShowsHorizontalScrollIndicator:(BOOL)a;
 - (void) setContentOffset:({CGPoint=dd})aanimated:(BOOL)b;
 - ({CGSize=dd}) contentSize;
 - (void) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})aanimated:(BOOL)b;
 - (void) setScrollEnabled:(BOOL)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (BOOL) isProgrammaticScrollEnabled;
 - (void) setProgrammaticScrollEnabled:(BOOL)a;
 - (void) _ensureViewsAreLoadedInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _canScrollX;
 - (BOOL) _canScrollY;
 - (BOOL) isScrollEnabled;
 - (void) _scrollViewWillBeginDragging;
 - (void) _scrollViewDidEndDraggingWithDeceleration:(BOOL)a;
 - (BOOL) _contentOffsetRoundingEnabled;
 - (void) _setContentOffsetRoundingEnabled:(BOOL)a;
 - (void) setContentOffset:({CGPoint=dd})a;
 - (void) _scrollViewDidEndDecelerating;
 - (double) _scrollEdgeLimit;
 - ({CGSize=dd}) _selectionTrackerContentSize;
 - (void) _getResponderRectsForXAxisMinRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})ayMinRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bxMaxRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})cyMaxRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})d;
 - (void) _gestureRecognizerFailed:(id)a;
 - (id) _panGestureRecognizer;
 - ({UIEdgeInsets=dddd}) contentInset;
 - (void) _scrollToTopFromTouchAtScreenLocation:({CGPoint=dd})aresultHandler:(@?)b;
 - (BOOL) isTracking;
 - (BOOL) cancelTouchTracking;
 - (BOOL) cancelMouseTracking;
 - (id) _contentWidthVariable;
 - (id) _contentHeightVariable;
 - (id) nsli_contentWidthVariable;
 - (id) nsli_contentHeightVariable;
 - (void) _resizeWithOldSuperviewSize:({CGSize=dd})a;
 - (BOOL) _supportsContentDimensionVariables;
 - (void) _willMoveToWindow:(id)a;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) _switchToLayoutEngine:(id)a;
 - (BOOL) _forwardsToParentScroller;
 - (void) _didChangeFromIdiom:(long long)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (void) _setSubviewWantsAutolayoutTripWantsAutolayout:(BOOL)a;
 - (void) _addScrollNotificationView:(id)a;
 - (void) _removeScrollNotificationView:(id)a;
 - (void) _webCustomViewWillBeRemovedFromSuperview;
 - (BOOL) _isScrollingEnabled;
 - (void) _skipNextStartOffsetAdjustment;
 - (void) _clearContentOffsetAnimation:(id)a;
 - (void) _createGestureRecognizersForCurrentTouchLevel;
 - (void) _adjustScrollerIndicators:(BOOL)aalwaysShowingThem:(BOOL)b;
 - (void) setDirectionalLockEnabled:(BOOL)a;
 - (void) _updateContentFitDisableScrolling;
 - (id) _getDelegateZoomView;
 - (BOOL) isZooming;
 - ({CGSize=dd}) _nsis_contentSize;
 - (void) setContentSize:({CGSize=dd})a;
 - (void) _applyConstrainedContentSizeIfNecessary;
 - (void) _centerContentIfNecessary;
 - (BOOL) isDirectionalLockEnabled;
 - (void) _stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)a;
 - (void) setScrollTestParameters:(id)a;
 - (id) _staticScrollBar;
 - (void) _layoutStaticScrollBar;
 - (void) _staticScrollBar:(id)adidScrollInDirection:({CGPoint=dd})b;
 - (void) _hideScrollIndicators;
 - (void) _updateUsesStaticScrollBar;
 - (void) _enableOnlyGestureRecognizersForCurrentTouchLevel;
 - (BOOL) isPagingEnabled;
 - (BOOL) _usesLowFidelityPanning;
 - (void) _setUsesStaticScrollBar:(BOOL)a;
 - (void) handlePan:(id)a;
 - (void) handlePinch:(id)a;
 - (void) _updatePanGestureConfiguration;
 - (void) _handleSwipe:(id)a;
 - (void) _updateScrollGestureRecognizersEnabled;
 - (BOOL) _startBeingDraggedByChild:(id)a;
 - (BOOL) _stopBeingDraggedByChild:(id)a;
 - (BOOL) _transfersScrollToContainer;
 - (double) _adjustedHorizontalOffsetPinnedToScrollableBounds:(double)a;
 - (double) _adjustedVerticalOffsetPinnedToScrollableBounds:(double)a;
 - (void) _startDraggingParent:(id)a;
 - (void) _stopDraggingParent:(id)a;
 - (double) zoomScale;
 - (void) _adjustContentOffsetIfNecessary;
 - (void) _attemptToDragParent:(id)aforNewBounds:({CGRect={CGPoint=dd}{CGSize=dd}})boldBounds:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) _old_updateAutomaticContentSizeConstraintsIfNecessaryWithContentSize:({CGSize=dd})a;
 - (void) _notifyDidScroll;
 - (void) _adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)a;
 - (void) _adjustCrossingConstraintsIfNecessaryForOldContentInset:({UIEdgeInsets=dddd})a;
 - (void) _stopScrollingNotify:(BOOL)apin:(BOOL)b;
 - (void) _registerAsScrollToTopViewIfPossible;
 - (void) _setContentOffset:({CGPoint=dd})aanimated:(BOOL)banimationCurve:(int)c;
 - (id) _scrollViewTouchDelayGesture;
 - (void) _updateZoomGestureRecognizersEnabled;
 - (void) _updatePagingGesture;
 - (unsigned long long) _abuttedEdgesForContentOffset:({CGPoint=dd})a;
 - (unsigned long long) _currentlyAbuttedContentEdges;
 - (void) delayed:(id)a;
 - (void) _updatePinchGesture;
 - (void) _systemGestureStateChanged:(id)a;
 - (void) _handleLowFidelitySwipe:(id)a;
 - (double) minimumZoomScale;
 - (void) willRotateToInterfaceOrientation:(id)a;
 - (void) willAnimateRotationToInterfaceOrientation:(id)a;
 - (void) _registerForRotation:(BOOL)aofWindow:(id)b;
 - (void) _flashScrollIndicatorsPersistingPreviousFlashes:(BOOL)a;
 - (void) _setShowsBackgroundShadow:(BOOL)a;
 - (BOOL) alwaysBounceHorizontal;
 - (BOOL) alwaysBounceVertical;
 - (double) _rubberBandOffsetForOffset:(double)amaxOffset:(double)bminOffset:(double)crange:(double)doutside:(^B)e;
 - ({CGPoint=dd}) _rubberBandContentOffsetForOffset:({CGPoint=dd})aoutsideX:(^B)boutsideY:(^B)c;
 - (long long) keyboardDismissMode;
 - (BOOL) _shouldScrollOnGestureRecognizerFailed;
 - (BOOL) _scrollViewWillEndDraggingWithDeceleration:(BOOL)a;
 - (void) _startTimer:(BOOL)a;
 - (void) _popTrackingRunLoopMode;
 - (BOOL) _staysCenteredDuringPinch;
 - (double) _zoomScaleFromPresentationLayer:(BOOL)a;
 - (void) _scrollViewDidEndZooming;
 - (void) _setZoomAnchorPoint:({CGPoint=dd})a;
 - (void) _scrollViewWillBeginZooming;
 - (void) setZoomScale:(double)awithAnchorPoint:({CGPoint=dd})bvalidatingScrollOffset:(BOOL)callowRubberbanding:(BOOL)danimated:(BOOL)eduration:(double)fnotifyDelegate:(BOOL)g;
 - (void) _updatePinchGestureForState:(long long)a;
 - (void) setZoomScale:(double)awithAnchorPoint:({CGPoint=dd})bvalidatingScrollOffset:(BOOL)callowRubberbanding:(BOOL)danimated:(BOOL)eduration:(double)fnotifyDelegate:(BOOL)gforce:(BOOL)h;
 - (BOOL) _beginTrackingWithEvent:(id)a;
 - (void) _prepareToPageWithHorizontalVelocity:(double)averticalVelocity:(double)b;
 - (void) _endPanNormal:(BOOL)a;
 - (void) _resetScrollingWithUIEvent:(id)a;
 - (void) _updatePanGesture;
 - (id) _layoutVariablesWithAmbiguousValue;
 - (void) _setWantsConstrainedContentSize:(BOOL)a;
 - (BOOL) _evaluateWantsConstrainedContentSize;
 - (void) _zoomToCenter:({CGPoint=dd})ascale:(double)bduration:(double)cforce:(BOOL)d;
 - (void) setZoomScale:(double)aanimated:(BOOL)b;
 - (double) _zoomRubberBandScaleForScale:(double)a;
 - (float) _zoomAnimationDurationForScale:(double)a;
 - (void) _zoomAnimationDidStop;
 - (void) _adjustContentSizeForView:(id)aatScale:(double)b;
 - ({CGPoint=dd}) _zoomAnchorPoint;
 - (void) _markScrollViewAnimationForKey:(id)aofView:(id)b;
 - (double) _zoomScaleForRubberBandScale:(double)a;
 - (double) _contentOffsetAnimationDuration;
 - (void) _setContentOffsetAnimationDuration:(double)a;
 - (BOOL) _getPagingDecelerationOffset:(^{CGPoint=dd})aforTimeInterval:(double)b;
 - (BOOL) _getBouncingDecelerationOffset:(^d)aforTimeInterval:(double)blastUpdateOffset:(double)cmin:(double)dmax:(double)edecelerationFactor:(double)fdecelerationLnFactor:(double)gvelocity:(^d)h;
 - (void) _getStandardDecelerationOffset:(^d)aforTimeInterval:(double)bmin:(double)cmax:(double)ddecelerationFactor:(double)edecelerationLnFactor:(double)fvelocity:(^d)g;
 - (void) _smoothScrollWithUpdateTime:(double)a;
 - (void) _smoothScrollTimer:(id)a;
 - (void) _smoothScrollDisplayLink:(id)a;
 - (void) _runLoopModePopped:(id)a;
 - (BOOL) _isAnimatingScroll;
 - ({CGPoint=dd}) _animatedTargetOffset;
 - ({CGPoint=dd}) _contentOffsetForLowFidelityScrollInDirection:({CGPoint=dd})aduration:(^d)b;
 - (void) _lowFidelityScrollInDirection:({CGPoint=dd})a;
 - (void) _smoothScrollIntoBounds;
 - (void) setContentInset:({UIEdgeInsets=dddd})a;
 - (BOOL) _isRectFullyVisible:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _adjustsTargetsOnContentOffsetChanges;
 - (void) _setAdjustsTargetsOnContentOffsetChanges:(BOOL)a;
 - (void) setScrollingEnabled:(BOOL)a;
 - (void) setZoomEnabled:(BOOL)a;
 - (BOOL) isZoomEnabled;
 - (void) _setFirstResponderKeyboardAvoidanceEnabled:(BOOL)a;
 - (BOOL) _isFirstResponderKeyboardAvoidanceEnabled;
 - (BOOL) _isScrollingToTop;
 - (void) setPagingEnabled:(BOOL)a;
 - (unsigned long long) _abuttedPagingEdges;
 - (void) setBounces:(BOOL)a;
 - (BOOL) bounces;
 - (void) setBouncesHorizontally:(BOOL)a;
 - (BOOL) bouncesHorizontally;
 - (void) setBouncesVertically:(BOOL)a;
 - (BOOL) bouncesVertically;
 - (void) setUpdateInsetBottomDuringKeyboardDismiss:(BOOL)a;
 - (BOOL) updateInsetBottomDuringKeyboardDismiss;
 - (double) keyboardBottomInsetAdjustmentDelta;
 - (void) setAlwaysBounceVertical:(BOOL)a;
 - (void) setAlwaysBounceHorizontal:(BOOL)a;
 - (void) _setTransfersScrollToContainer:(BOOL)a;
 - (BOOL) _isVerticalBouncing;
 - (BOOL) _isHorizontalBouncing;
 - (BOOL) showsHorizontalScrollIndicator;
 - (BOOL) showsVerticalScrollIndicator;
 - (void) setScrollIndicatorInsets:({UIEdgeInsets=dddd})a;
 - ({UIEdgeInsets=dddd}) scrollIndicatorInsets;
 - (void) setIndicatorStyle:(long long)a;
 - (double) decelerationRate;
 - (void) setDecelerationRate:(double)a;
 - (long long) indicatorStyle;
 - (double) horizontalScrollDecelerationFactor;
 - (void) setHorizontalScrollDecelerationFactor:(double)a;
 - (double) verticalScrollDecelerationFactor;
 - (void) setVerticalScrollDecelerationFactor:(double)a;
 - (void) setAllowsMultipleFingers:(BOOL)a;
 - (BOOL) allowsMultipleFingers;
 - (void) setTracksImmediatelyWhileDecelerating:(BOOL)a;
 - (BOOL) tracksImmediatelyWhileDecelerating;
 - (double) _scrollHysteresis;
 - (BOOL) preservesCenterDuringRotation;
 - (void) setPreservesCenterDuringRotation:(BOOL)a;
 - (void) flashScrollIndicators;
 - (BOOL) _showsBackgroundShadow;
 - (void) setShowBackgroundShadow:(BOOL)a;
 - ({CGPoint=dd}) _touchPositionForTouches:(id)a;
 - (void) _rubberBandToOffset:({CGPoint=dd})a;
 - (void) _setStaysCenteredDuringPinch:(BOOL)a;
 - (BOOL) gestureRecognizer:(id)acanPreventGestureRecognizer:(id)b;
 - (BOOL) _gestureRecognizer:(id)ashouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b;
 - (BOOL) _gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (BOOL) _forwardsTouchesUpResponderChain;
 - (void) _setForwardsTouchesUpResponderChain:(BOOL)a;
 - (BOOL) _isInterruptingDeceleration;
 - (BOOL) bouncesZoom;
 - (void) setBouncesZoom:(BOOL)a;
 - (BOOL) canCancelContentTouches;
 - (void) setCanCancelContentTouches:(BOOL)a;
 - (BOOL) delaysContentTouches;
 - (void) setDelaysContentTouches:(BOOL)a;
 - (BOOL) touchesShouldBegin:(id)awithEvent:(id)binContentView:(id)c;
 - (BOOL) touchesShouldCancelInContentView:(id)a;
 - (BOOL) scrollsToTop;
 - (void) setScrollsToTop:(BOOL)a;
 - (void) _setIgnoreLinkedOnChecks:(BOOL)a;
 - (BOOL) _ignoreLinkedOnChecks;
 - (double) _pagingFriction;
 - (void) _setPagingFriction:(double)a;
 - (double) _defaultPagingFriction;
 - (BOOL) _wantsConstrainedContentSize;
 - (void) _setAutomaticContentConstraints:(id)a;
 - ({UIOffset=dd}) _offsetForCenterOfPossibleZoomView:(id)awithIncomingBoundsSize:({CGSize=dd})b;
 - (void) setMinimumZoomScale:(double)a;
 - (void) setMaximumZoomScale:(double)a;
 - (double) maximumZoomScale;
 - (void) _zoomToCenter:({CGPoint=dd})ascale:(double)bduration:(double)c;
 - (BOOL) _ownsAnimationForKey:(id)aofView:(id)b;
 - (void) setZoomScale:(double)a;
 - (void) zoomToRect:({CGRect={CGPoint=dd}{CGSize=dd}})aanimated:(BOOL)b;
 - (BOOL) isZoomBouncing;
 - (BOOL) _isAnimatingZoom;
 - ({CGPoint=dd}) _pageDecelerationTarget;
 - (void) _staticScrollBarScrollAnimationEnded;
 - (id) panGestureRecognizer;
 - (id) pinchGestureRecognizer;
 - (id) scrollTestParameters;
 - (void) setKeyboardDismissMode:(long long)a;
 - (BOOL) _useContentDimensionVariablesForConstraintLowering;
 - (void) _setUseContentDimensionVariablesForConstraintLowering:(BOOL)a;
 - (id) _automaticContentConstraints;
 - (double) _horizontalVelocity;
 - (double) _verticalVelocity;
 - (BOOL) _isBouncing;
 - (double) _offsetForRubberBandOffset:(double)amaxOffset:(double)bminOffset:(double)crange:(double)d;
 - (double) _shadowHeightOffset;
 - (void) _adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)awithOffset:(double)b;
 - (void) _stopScrollDecelerationNotify:(BOOL)a;
 - (void) _stopScrollingNotify:(BOOL)apin:(BOOL)btramplingDragFlags:(BOOL)c;
 - (void) _clearContentOffsetAnimation;
 - (void) _stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)atramplingDragFlags:(BOOL)b;
 - (void) _addContentSubview:(id)aatBack:(BOOL)b;
 - (void) _setContentOffset:({CGPoint=dd})aanimated:(BOOL)banimationCurve:(int)canimationAdjustsForContentOffsetDelta:(BOOL)d;
 - ({CGPoint=dd}) _originalOffsetForAnimatedSetContentOffset;
 - (void) _scrollViewAnimationEnded:(id)afinished:(BOOL)b;
 - (void) _delegateScrollViewAnimationEnded;
 - (void) _adjustShadowsIfNecessary;
 - (BOOL) _shouldTrackImmediatelyWhileDecelerating;
 - (void) _clearParentAdjustment;
 - (void) _adjustStartOffsetForGrabbedBouncingScrollView;
 - (void) _stopScrollingAndZoomingAnimations;
 - (BOOL) _resetScrollingForGestureEvent:(id)a;
 - (BOOL) _canCancelContentTouches:(id)a;
 - (void) _moveContentSubview:(id)atoBack:(BOOL)b;
 - (void) _setContentOffset:({CGPoint=dd})aduration:(double)banimationCurve:(int)c;
 - (void) _setAbsoluteContentOffset:({CGPoint=dd})aanimated:(BOOL)b;
 - (void) _updateScrollAnimationForChangedTargetOffset:({CGPoint=dd})a;
 - (void) _setAutomaticContentOffsetAdjustmentEnabled:(BOOL)a;
 - (BOOL) _isAutomaticContentOffsetAdjustmentEnabled;
 - (void) _forceDelegateScrollViewDidZoom:(BOOL)a;
 - (void) animator:(id)astopAnimation:(id)bfraction:(float)c;
 - (BOOL) _scrollsToMakeFirstResponderVisible;
 - (double) _touchDelayForScrollDetection;
 - (void) _setContentOffsetPinned:({CGPoint=dd})a;
 - (void) _setContentOffsetPinned:({CGPoint=dd})aanimated:(BOOL)b;
 - (id) _parentScrollView;
 - ({CGPoint=dd}) _animatedOriginalOffset;
 - (void) _setAlwaysBounceVertical:(BOOL)a;
 - (void) _setShowsVerticalScrollIndicator:(BOOL)a;
 - (void) _setShowsHorizontalScrollIndicator:(BOOL)a;
 - (void) _adjustForAutomaticKeyboardInfo:(id)aanimated:(BOOL)blastAdjustment:(^d)c;
 - (BOOL) _pagingLeft;
 - (BOOL) _pagingRight;
 - (BOOL) _pagingUp;
 - (BOOL) _pagingDown;
 - (void) _setAutoscrolling:(BOOL)a;
 - (BOOL) _isAutoscrolling;
 - ({CGPoint=dd}) autoscrollContentOffset;
 - (void) setAutoscrollContentOffset:({CGPoint=dd})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentFrameForView:(id)a;
 - (void) _adjustShadowsIfNecessaryForOffset:(double)a;
 - (id) _backgroundShadowForSlideAnimation;
 - (void) _pinContentOffsetToClosestPageBoundary;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rectForPageContainingView:(id)a;
 - (BOOL) _viewIsInsideNavigationController;
 - (void) _performScrollTest:(id)aiterations:(int)bdelta:(int)clength:(int)dscrollAxis:(int)e;
 - (void) _suppressImplicitAnimationsForScrollTest;
 - (void) _incrementForScrollTest;
 - (id) _scrollTestExtraResults;
 - (void) _reenableImplicitAnimationsAfterScrollTest;
 - (void) _performScrollTest:(id)aiterations:(int)bdelta:(int)c;
 - (void) _performScrollTest:(id)aiterations:(int)bdelta:(int)clength:(int)d;
 - (void) _performScrollTest:(id)aiterations:(int)bdelta:(int)cscrollAxis:(int)d;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (int) scrollableDirections;
 - (double) maxVelocityInDirection:(int)a;
 - (void) _accumulateViewConstraintsIntoArray:(id)a;
 - (void) _didAddDependentConstraint:(id)a;
 - (void) _didRemoveDependentConstraint:(id)a;
 - (BOOL) _constraintAffectsContentSize:(id)a;
 - (id) _constraintsFromContentSize;
 - (void) _setScrollEdgeLimit:(double)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGPoint=dd}) contentOffset;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
