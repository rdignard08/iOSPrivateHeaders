
@interface UIGestureInfo : NSObject {

    id delegate;
    int enabledGestures;
    int rotationState;
    int zoomState;
    int panState;
    {CGPoint="x"d"y"d} startGestureInner;
    {CGPoint="x"d"y"d} startGestureOuter;
    {CGPoint="x"d"y"d} startScrollPoint;
    {CGPoint="x"d"y"d} endScrollPoint;
    {CGSize="width"d"height"d} visibleSize;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} centerRect;
    UIGestureAnimation rotationAnimation;
    float rotationDegrees;
    float recentRotationDegrees;
    float minDegrees;
    float maxDegrees;
    float startDegrees;
    float endDegrees;
    UIGestureAnimation zoomAnimation;
    int zoomRubberBandHysteresisCount;
    float zoomScale;
    float startScale;
    float endScale;
    float unadjustedScale;
    float zoomMultiplier;
    float minScale;
    float maxScale;
    {CGPoint="x"d"y"d} zoomFailureWindowPoint;
    float zoomFailureDuration;
    float zoomFailureStartScale;
    float zoomAnimationProgress;
    UIScrollAnimation scrollAnimation;
    {?="pushedRunLoop"b1"isRotatingRight"b1"isZoomRubberBandEnabled"b1"zoomsFromCurrentToMinOrMax"b1"updatesScroller"b1"isAnimatingZoomFailure"b1} flags;
}

 - (void) dealloc;
 - (id) init;


@end
