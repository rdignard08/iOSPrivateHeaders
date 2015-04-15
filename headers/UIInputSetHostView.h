
@interface UIInputSetHostView : UIView {

}
 + (BOOL) _retroactivelyRequiresConstraintBasedLayout;
 + (BOOL) _shouldHitTestInputViewFirst;
 + (BOOL) _notifyOnExplicitLayout;

 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (int) _clipCornersOfView:(id)a ;
 - (void) _resizeForKeyplaneSize:({CGSize=dd})a splitWidthsChanged:(BOOL)b ;
 - (void) layoutIfNeeded;


@end
