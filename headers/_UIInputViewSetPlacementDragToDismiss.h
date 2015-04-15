
@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen {

    d _offset;
}
 + (id) placementWithOffset:(d)a;

 - (BOOL) isInteractive;
 - (id) verticalConstraintForInputViewSet:(id)ahostView:(id)bcontainerView:(id)c;
 - (d) offset;
 - (void) setOffset:(d)a;


@end
