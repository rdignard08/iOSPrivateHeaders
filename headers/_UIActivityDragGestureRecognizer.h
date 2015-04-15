
@protocol UIAutoscrollDelegate, _UIScrollNotification;
@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollNotification> {

    UIScrollView* _targetScrollView;
    UIAutoscroll* _autoscroll;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _draggingInsets;
}

 - (void) reset;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) _updateBackdropMaskViewsInScrollView:(id)a ;
 - (void) _didScroll;
 - (void) autoscrollWillNotStart;
 - (void) cancelAutoscroll;
 - (void) updateAutoscroll:(id)a ;
 - (void) setDraggingInsets:({UIEdgeInsets=dddd})a ;
 - (void) setTargetScrollView:(id)a ;
 - (void) beginAutoscrollAndUpdateDirectionIfNeeded;
 - (id) autoscroll;
 - (void) setAutoscroll:(id)a ;
 - (id) targetScrollView;
 - (int) autoscrollDirectionsForPoint:({CGPoint=dd})a inView:(id)b ;
 - ({UIEdgeInsets=dddd}) draggingInsets;
 - (void) setState:(long long)a ;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
