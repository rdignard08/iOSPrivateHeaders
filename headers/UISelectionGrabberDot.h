
@interface UISelectionGrabberDot : UIView {

    UISelectionGrabber* m_grabber;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (int) textEffectsVisibilityLevel;
 - (int) textEffectsVisibilityLevelInKeyboardWindow;
 - (id) grabber;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a container:(id)b ;
 - (void) setGrabber:(id)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
