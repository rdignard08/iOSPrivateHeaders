
@interface UIDictationSplitLayoutView : UIDictationView {

}

 - (void) layoutSubviews;
 - (void) setRenderConfig:(id)a;
 - (void) finishReturnToKeyboard;
 - (BOOL) isShowing;
 - (void) returnToKeyboard;
 - (BOOL) drawsOwnBackground;
 - (void) setState:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
