
@interface UISoftwareDimmingWindow : UIWindow {

    float _overlayLevel;
}

 - (BOOL) _ignoresHitTest;
 - (void) updateOverlayColor;
 - (void) setOverlayLevel:(float)a;
 - (float) overlayLevel;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
