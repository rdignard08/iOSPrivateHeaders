
@interface UIKeyboardDictationMenu : UIKeyboardMenuView {

}
 + (id) sharedInstance;
 + (id) activeInstance;

 - (void) hide;
 - (void) show;
 - (void) fadeWithDelay:(double)a ;
 - (void) fade;
 - (BOOL) usesTable;
 - ({CGSize=dd}) preferredSize;
 - (BOOL) usesDimmingView;
 - (void) performShowAnimation;
 - (BOOL) centerPopUpOverKey;
 - (void) cleanupForFadeOrHide;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
