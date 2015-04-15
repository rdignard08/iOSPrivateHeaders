
@interface UISelectionGrabber : UIView {

    UISelectionGrabberDot* m_dotView;
    BOOL m_isDotted;
    BOOL m_activeFlattened;
    BOOL m_alertFlattened;
    BOOL m_navigationTransitionFlattened;
    BOOL m_animating;
    int m_orientation;
    int _applicationDeactivationReason;
}
 + (id) _grabberDot;

 - (void) dealloc;
 - (BOOL) isRotating;
 - (void) didMoveToSuperview;
 - (void) setAnimating:(BOOL)a;
 - (BOOL) animating;
 - (id) _dotView;
 - (BOOL) autoscrolled;
 - (void) updateDot;
 - (void) setIsDotted:(BOOL)a;
 - (BOOL) isScrolling;
 - (BOOL) inputViewIsChanging;
 - (id) hostView;
 - (BOOL) isPointedDown;
 - (BOOL) isPointedUp;
 - (BOOL) isPointedRight;
 - (BOOL) isPointedLeft;
 - (void) mustFlattenForAlert:(id)a;
 - (void) canExpandAfterAlert:(id)a;
 - (void) saveDeactivationReason:(id)a;
 - (void) mustFlattenForResignActive:(id)a;
 - (void) canExpandAfterBecomeActive:(id)a;
 - (void) mustFlattenForNavigationTransition:(id)a;
 - (void) canExpandAfterNavigationTransition:(id)a;
 - (void) setAlertFlattened:(BOOL)a;
 - (void) setActiveFlattened:(BOOL)a;
 - (void) setNavigationTransitionFlattened:(BOOL)a;
 - (BOOL) isDotted;
 - (BOOL) alertFlattened;
 - (BOOL) activeFlattened;
 - (BOOL) navigationTransitionFlattened;
 - (BOOL) dotIsVisbleInDocument:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) clipDot:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isScaling;
 - (BOOL) scroller:(id)afullyContainSelectionRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) isVertical;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (int) orientation;
 - (void) setOrientation:(int)a;
 - (void) setHidden:(BOOL)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
