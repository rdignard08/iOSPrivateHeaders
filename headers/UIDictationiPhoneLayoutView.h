
@interface UIDictationiPhoneLayoutView : UIDictationView {

}

 - (void) layoutSubviews;
 - (void) setRenderConfig:(id)a;
 - (void) finishReturnToKeyboard;
 - (BOOL) isShowing;
 - (void) returnToKeyboard;
 - (id) doneButtonTitleForLightBackground:(BOOL)a;
 - (void) setState:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
