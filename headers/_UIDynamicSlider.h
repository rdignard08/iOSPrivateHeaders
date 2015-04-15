
@protocol UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate;
@interface _UIDynamicSlider : UISlider <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate> {

    double _thumbVelocity;
    {CGPoint="x"d"y"d} _thumbPreviousPoint;
    double _thumbPreviousTime;
    UIView* _thumbDynamicsView;
    _UIDynamicSliderAnimator* _animator;
    UIGravityBehavior* _gravityBehavior;
    UIPushBehavior* _pushBehavior;
    UIDynamicItemBehavior* _itemBehavior;
}

 - (void) dealloc;
 - (BOOL) cancelTouchTracking;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _clearDynamics;
 - (void) _initializeDynamicsTracking:(id)a;
 - (void) _updateDynamicsTracking:(id)a;
 - (void) _handleConversionToDynamicsTracking;
 - (void) dynamicAnimatorDidPause:(id)a;
 - (void) collisionBehavior:(id)abeganContactForItem:(id)bwithBoundaryIdentifier:(id)catPoint:({CGPoint=dd})d;
 - (void) _handleDynamicsStep;


@end
