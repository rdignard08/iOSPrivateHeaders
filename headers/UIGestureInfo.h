
@interface UIGestureInfo : NSObject {

    id delegate;
    i enabledGestures;
    i rotationState;
    i zoomState;
    i panState;
    {CGPoint="x"d"y"d} startGestureInner;
    {CGPoint="x"d"y"d} startGestureOuter;
    {CGPoint="x"d"y"d} startScrollPoint;
    {CGPoint="x"d"y"d} endScrollPoint;
    {CGSize="width"d"height"d} visibleSize;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} centerRect;
    @"UIGestureAnimation" rotationAnimation;
    f rotationDegrees;
    f recentRotationDegrees;
    f minDegrees;
    f maxDegrees;
    f startDegrees;
    f endDegrees;
    @"UIGestureAnimation" zoomAnimation;
    i zoomRubberBandHysteresisCount;
    f zoomScale;
    f startScale;
    f endScale;
    f unadjustedScale;
    f zoomMultiplier;
    f minScale;
    f maxScale;
    {CGPoint="x"d"y"d} zoomFailureWindowPoint;
    f zoomFailureDuration;
    f zoomFailureStartScale;
    f zoomAnimationProgress;
    @"UIScrollAnimation" scrollAnimation;
    {?="pushedRunLoop"b1"isRotatingRight"b1"isZoomRubberBandEnabled"b1"zoomsFromCurrentToMinOrMax"b1"updatesScroller"b1"isAnimatingZoomFailure"b1} flags;
}

 - (void) dealloc;
 - (id) init;


@end
