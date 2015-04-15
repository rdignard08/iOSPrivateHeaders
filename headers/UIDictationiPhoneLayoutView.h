
@interface UIDictationiPhoneLayoutView : UIDictationView {

}

 - (void) layoutSubviews;
 - (void) setRenderConfig:(id)a ;
 - (void) finishReturnToKeyboard;
 - (BOOL) isShowing;
 - (void) returnToKeyboard;
 - (id) doneButtonTitleForLightBackground:(BOOL)a ;
 - (void) setState:(int)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
