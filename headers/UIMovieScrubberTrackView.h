
@interface UIMovieScrubberTrackView : UIView {

    @"<UIMovieScrubberTrackViewDataSource>" _dataSource;
    @"<UIMovieScrubberTrackViewDelegate>" _delegate;
    @"NSArray" _summaryThumbnailViews;
    @"NSArray" _summaryThumbnailTimestamps;
    @"NSArray" _summaryThumbnailChildTimestamps;
    @"NSDictionary" _thumbnailStartXValues;
    @"NSDictionary" _childThumbnailViews;
    @"NSMutableDictionary" _thumbnailViews;
    @"NSArray" _timestamps;
    @"UIMovieScrubberTrackOverlayView" _overlayView;
    @"UIView" _maskContainerView;
    {CGSize="width"d"height"d} _thumbnailSize;
    f _zoomOriginXDelta;
    f _zoomWidthDelta;
    f _unclampedZoomWidthDelta;
    f _zoomAnimationDuration;
    d _duration;
    d _value;
    d _startValue;
    d _endValue;
    {?="delegateSizeOriginDelta"b1"delegateDidExpand"b1"delegateDidCollapse"b1"delegateWillRequestThumbs"b1"delegateDidRequestThumbs"b1"delegateZoomAnimationDuration"b1"delegateZoomAnimationDelay"b1"needsReload"b1"editing"b1"editingHandle"I"zoomIsDisabled"b1} _trackFlags;
}

 - (void) clear;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) reloadData;
 - (void) layoutSubviews;
 - (void) setEditing:(BOOL)a;
 - (void) animateFillFramesAway;
 - (void) setStartValue:(d)a;
 - (void) setEndValue:(d)a;
 - (id) _createImageViewForTimestamp:(id)aisSummaryThumbnail:(BOOL)b;
 - (void) _reallyReloadData;
 - (void) _zoomAnimation:(id)adidFinish:(id)bcontext:(id)c;
 - (void) _setOverlayViewIsZoomed:(BOOL)aminValue:(f)bmaxValue:(f)c;
 - (void) _unzoomAnimation:(id)adidFinish:(id)bcontext:(id)c;
 - (void) setThumbnailImage:(^{CGImage=})aforTimestamp:(id)b;
 - (void) setZoomAnimationDuration:(d)a;
 - (d) zoomAnimationDuration;
 - (BOOL) zoomAtPoint:({CGPoint=dd})a;
 - (void) unzoom;
 - (id) delegate;
 - (void) setValue:(d)a;
 - (id) dataSource;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setDataSource:(id)a;


@end
