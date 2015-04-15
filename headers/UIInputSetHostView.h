
@interface UIInputSetHostView : UIView {

}
 + (BOOL) _retroactivelyRequiresConstraintBasedLayout;
 + (BOOL) _shouldHitTestInputViewFirst;
 + (BOOL) _notifyOnExplicitLayout;

 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (int) _clipCornersOfView:(id)a;
 - (void) _resizeForKeyplaneSize:({CGSize=dd})asplitWidthsChanged:(BOOL)b;
 - (void) layoutIfNeeded;


@end
