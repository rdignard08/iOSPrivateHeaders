
@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;
@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {

    @"UIImageView" _thumbView;
    @"UIMovieScrubberTrackView" _trackView;
    @"UIMovieScrubberEditingView" _editingView;
    @"UILabel" _elapsedLabel;
    @"UILabel" _remainingLabel;
    int _timeComponents;
    @"UIImage" _fillImage;
    @"UIImage" _innerShadowImage;
    @"UIImage" _maskImage;
    @"UIImage" _shadowImage;
    @"<UIMovieScrubberDataSource>" _dataSource;
    @"<UIMovieScrubberDelegate>" _delegate;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _trackRect;
    double _hitOffset;
    double _zoomDelay;
    BOOL _showTimeViews;
    BOOL _editable;
    double _value;
    double _maximumValue;
    double _minimumValue;
    {CGPoint="x"d"y"d} _touchLocationWhenTrackPressBegan;
    double _trimStartValue;
    double _trimEndValue;
    double _minTrimmedLength;
    double _maxTrimmedLength;
    double _zoomAnimationDuration;
    double _zoomAnimationDelay;
    {?="continuous"b1"animating"b1"creatingSnapshot"b1"needsReload"b1"layoutTimeViews"b1"computeTrackRect"b1"clampingTrimRange"I"zoomed"b1"zoomAnimating"b1"trackIsPressed"b1"trackAnimating"b1"thumbIsVisible"b1"handleIsPressed"b1"willBeginEditing"b1"editing"b1"editingHandle"I"rotationDisabled"I"isInNavigationBar"b1"delegateValueDidChange"b1"delegateStartValueDidChange"b1"delegateEndValueDidChange"b1"delegateWillBeginRequestingThumbnails"b1"delegateDidFinishRequestingThumbnails"b1"delegateWillBeginEditing"b1"delegateDidBeginEditing"b1"delegateDidCancelEditing"b1"delegateEditingAnimationFinished"b1"delegateWidthDeltaOriginXDelta"b1"delegateDidBeginAnimatingZoom"b1"delegateDidEndAnimatingZoom"b1"delegateWillZoom"b1"dataSourceRequestThumbnailImageIsSummmary"b1} _sliderFlags;
    double _edgeInset;
}
 + (id) timeStringForSeconds:(int)aforceFullWidthComponents:(BOOL)bisElapsed:(BOOL)c;

 - (double) duration;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) didMoveToWindow;
 - (void) reloadData;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) scriptingInfoWithChildren;
 - (BOOL) cancelTouchTracking;
 - (void) didMoveToSuperview;
 - ({CGSize=dd}) intrinsicContentSize;
 - (BOOL) _alwaysHandleScrollerMouseEvent;
 - (id) _scriptingInfo;
 - (BOOL) isEditing;
 - (void) setEditing:(BOOL)aanimated:(BOOL)b;
 - (void) setEditing:(BOOL)a;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _controlTouchBegan:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _controlTouchMoved:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _controlTouchEnded:(id)awithEvent:(id)b;
 - (void) _sendDelayedActions;
 - (void) setEditable:(BOOL)a;
 - (void) _initSubviews;
 - (void) setValue:(double)aanimated:(BOOL)b;
 - (void) _sliderAnimationWillStart:(id)acontext:(id)b;
 - (void) _sliderAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) _setValue:(double)aandSendAction:(BOOL)b;
 - (BOOL) isContinuous;
 - (void) setContinuous:(BOOL)a;
 - (BOOL) isAnimatingValueChange;
 - (void) movieScrubberTrackView:(id)aclampedSizeWidthDelta:(double)bactualSizeWidthDelta:(double)coriginXDelta:(double)dminimumVisibleValue:(double)emaximumVisibleValue:(double)f;
 - (void) movieScrubberTrackViewDidExpand:(id)a;
 - (void) movieScrubberTrackViewDidCollapse:(id)a;
 - (void) movieScrubberTrackViewWillBeginRequestingThumbnails:(id)a;
 - (void) movieScrubberTrackViewDidFinishRequestingThumbnails:(id)a;
 - (double) movieScrubberTrackViewZoomAnimationDuration:(id)a;
 - (double) movieScrubberTrackViewZoomAnimationDelay:(id)a;
 - (void) movieScrubberTrackView:(id)arequestThumbnailImageForTimestamp:(id)bisSummaryThumbnail:(BOOL)c;
 - (double) movieScrubberTrackViewThumbnailAspectRatio:(id)a;
 - (double) movieScrubberTrackViewDuration:(id)a;
 - (id) movieScrubberTrackView:(id)aevenlySpacedTimestamps:(int)bstartingAt:(id)cendingAt:(id)d;
 - (BOOL) isInsideNavigationBar;
 - (void) setThumbnailImage:(^{CGImage=})aforTimestamp:(id)b;
 - (void) setZoomAnimationDuration:(double)a;
 - (void) _sliderValueDidChange:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _editingRect;
 - (void) setEdgeInset:(double)a;
 - (void) _trimAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) setThumbIsVisible:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _editingRectForStartTime:(double)aendTime:(double)b;
 - (void) _cancelTrackPress:(BOOL)a;
 - (void) animateCancelEdit;
 - (void) _animateAfterEdit:(BOOL)a;
 - (void) _computeTrackRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) trackRect;
 - (void) _updateTimes;
 - (void) _updateThumbLocation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) thumbRectForValue:(double)a;
 - (void) setTrimEndValue:(double)a;
 - (void) setTrimStartValue:(double)a;
 - (void) _trackPressWasHeld;
 - (void) _setZoomAnimating:(BOOL)a;
 - (void) setRotationDisabled:(BOOL)a;
 - (BOOL) pointInsideThumb:({CGPoint=dd})awithEvent:(id)b;
 - (int) _editingHandleWithTouch:(id)a;
 - (double) _valueForTouch:(id)a;
 - (void) _beginTrackPressWithTouch:(id)atouchesBegan:(BOOL)b;
 - (void) _cancelTrackPressIfNeccessaryWithTouch:(id)a;
 - (BOOL) thumbIsVisible;
 - (void) animateAfterEdit;
 - ({UIEdgeInsets=dddd}) alignmentMargins;
 - (double) trimStartValue;
 - (double) trimEndValue;
 - (BOOL) forceZoom;
 - (void) forceUnzoom;
 - (double) zoomMinimumValue;
 - (double) zoomMaximumValue;
 - (BOOL) isZoomAnimating;
 - (double) zoomDelay;
 - (void) setZoomDelay:(double)a;
 - (BOOL) showTimeViews;
 - (void) setShowTimeViews:(BOOL)a;
 - (double) maximumTrimLength;
 - (void) setMaximumTrimLength:(double)a;
 - (double) minimumTrimLength;
 - (void) setMinimumTrimLength:(double)a;
 - (double) edgeInset;
 - (id) init;
 - (id) delegate;
 - (void) setValue:(double)a;
 - (double) value;
 - (id) dataSource;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setDuration:(double)a;
 - (void) setDataSource:(id)a;
 - (BOOL) isEditable;


@end
