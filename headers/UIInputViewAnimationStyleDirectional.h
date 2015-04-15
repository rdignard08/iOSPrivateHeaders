
@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle {

    i _outDirection;
}
 + (id) animationStyleAnimated:(BOOL)aduration:(d)boutDirection:(i)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (void) setOutDirection:(i)a;
 - (id) controllerForStartPlacement:(id)aendPlacement:(id)b;
 - (BOOL) canDismissWithScrollView;
 - (id) endPlacementForInputViewSet:(id)a;
 - (i) outDirection;
 - (id) startPlacementForInputViewSet:(id)acurrentPlacement:(id)b;


@end
