
@interface UISoftwareDimmingWindow : UIWindow {

    f _overlayLevel;
}

 - (BOOL) _ignoresHitTest;
 - (void) updateOverlayColor;
 - (void) setOverlayLevel:(f)a;
 - (f) overlayLevel;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
