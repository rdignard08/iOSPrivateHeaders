
@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView {

    BOOL _hideForAction;
    BOOL _registeredForNotifications;
    BOOL _inactive;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (void) setVisible:(BOOL)a frame:({CGRect={CGPoint=dd}{CGSize=dd}})b duration:(double)c ;
 - (void) _triggerAction:(id)a ;
 - (double) _visibleAlpha;
 - (void) setVisible:(BOOL)a ;
 - (void) animationDidStop:(id)a finished:(BOOL)b ;


@end
