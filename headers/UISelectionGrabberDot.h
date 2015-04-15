
@interface UISelectionGrabberDot : UIView {

    UISelectionGrabber* m_grabber;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (int) textEffectsVisibilityLevel;
 - (int) textEffectsVisibilityLevelInKeyboardWindow;
 - (id) grabber;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acontainer:(id)b;
 - (void) setGrabber:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
