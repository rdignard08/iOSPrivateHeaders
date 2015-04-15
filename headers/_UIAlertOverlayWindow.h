
@interface _UIAlertOverlayWindow : UIWindow {

}
 + (BOOL) _isSystemWindow;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) constrainFrameToScreen:({CGRect={CGPoint=dd}{CGSize=dd}})a;

 - (BOOL) _canAffectStatusBarAppearance;
 - (BOOL) isInternalWindow;
 - (void) _updateTransformLayerForClassicPresentation;
 - (void) handleStatusBarChangeFromHeight:(double)a toHeight:(double)b ;
 - (int) textEffectsVisibilityLevel;
 - (void) _handleMouseUp:(^{__GSEvent=})a ;
 - (id) representation;


@end
