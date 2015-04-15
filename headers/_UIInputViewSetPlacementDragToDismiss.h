
@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen {

    double _offset;
}
 + (id) placementWithOffset:(double)a;

 - (BOOL) isInteractive;
 - (id) verticalConstraintForInputViewSet:(id)a hostView:(id)b containerView:(id)c ;
 - (double) offset;
 - (void) setOffset:(double)a ;


@end
