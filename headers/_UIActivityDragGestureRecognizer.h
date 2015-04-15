
@protocol UIAutoscrollDelegate, _UIScrollNotification;
@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollNotification> {

    @"UIScrollView" _targetScrollView;
    @"UIAutoscroll" _autoscroll;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _draggingInsets;
}

 - (void) reset;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) _updateBackdropMaskViewsInScrollView:(id)a;
 - (void) _didScroll;
 - (void) autoscrollWillNotStart;
 - (void) cancelAutoscroll;
 - (void) updateAutoscroll:(id)a;
 - (void) setDraggingInsets:({UIEdgeInsets=dddd})a;
 - (void) setTargetScrollView:(id)a;
 - (void) beginAutoscrollAndUpdateDirectionIfNeeded;
 - (id) autoscroll;
 - (void) setAutoscroll:(id)a;
 - (id) targetScrollView;
 - (i) autoscrollDirectionsForPoint:({CGPoint=dd})ainView:(id)b;
 - ({UIEdgeInsets=dddd}) draggingInsets;
 - (void) setState:(q)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
