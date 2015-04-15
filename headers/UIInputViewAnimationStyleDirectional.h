
@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle {

    int _outDirection;
}
 + (id) animationStyleAnimated:(BOOL)aduration:(double)boutDirection:(int)c;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (BOOL) isEqual:(id)a ;
 - (void) setOutDirection:(int)a ;
 - (id) controllerForStartPlacement:(id)a endPlacement:(id)b ;
 - (BOOL) canDismissWithScrollView;
 - (id) endPlacementForInputViewSet:(id)a ;
 - (int) outDirection;
 - (id) startPlacementForInputViewSet:(id)a currentPlacement:(id)b ;


@end
