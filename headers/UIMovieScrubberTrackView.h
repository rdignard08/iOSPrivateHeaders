
@interface UIMovieScrubberTrackView : UIView {

    <UIMovieScrubberTrackViewDataSource>* _dataSource;
    <UIMovieScrubberTrackViewDelegate>* _delegate;
    NSArray* _summaryThumbnailViews;
    NSArray* _summaryThumbnailTimestamps;
    NSArray* _summaryThumbnailChildTimestamps;
    NSDictionary* _thumbnailStartXValues;
    NSDictionary* _childThumbnailViews;
    NSMutableDictionary* _thumbnailViews;
    NSArray* _timestamps;
    UIMovieScrubberTrackOverlayView* _overlayView;
    UIView* _maskContainerView;
    {CGSize="width"d"height"d} _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    double _duration;
    double _value;
    double _startValue;
    double _endValue;
    {?="delegateSizeOriginDelta"b1"delegateDidExpand"b1"delegateDidCollapse"b1"delegateWillRequestThumbs"b1"delegateDidRequestThumbs"b1"delegateZoomAnimationDuration"b1"delegateZoomAnimationDelay"b1"needsReload"b1"editing"b1"editingHandle"I"zoomIsDisabled"b1} _trackFlags;
}

 - (void) clear;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) reloadData;
 - (void) layoutSubviews;
 - (void) setEditing:(BOOL)a ;
 - (void) animateFillFramesAway;
 - (void) setStartValue:(double)a ;
 - (void) setEndValue:(double)a ;
 - (id) _createImageViewForTimestamp:(id)a isSummaryThumbnail:(BOOL)b ;
 - (void) _reallyReloadData;
 - (void) _zoomAnimation:(id)a didFinish:(id)b context:(id)c ;
 - (void) _setOverlayViewIsZoomed:(BOOL)a minValue:(float)b maxValue:(float)c ;
 - (void) _unzoomAnimation:(id)a didFinish:(id)b context:(id)c ;
 - (void) setThumbnailImage:(^{CGImage=})a forTimestamp:(id)b ;
 - (void) setZoomAnimationDuration:(double)a ;
 - (double) zoomAnimationDuration;
 - (BOOL) zoomAtPoint:({CGPoint=dd})a ;
 - (void) unzoom;
 - (id) delegate;
 - (void) setValue:(double)a ;
 - (id) dataSource;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setDataSource:(id)a ;


@end
