
@interface UIProgressHUD : UIView {

    UIProgressIndicator* _progressIndicator;
    UILabel* _progressMessage;
    UIImageView* _doneView;
    UIWindow* _parentWindow;
    {?="isShowing"b1"isShowingText"b1"fixedFrame"b1"reserved"b30} _progressHUDFlags;
}

 - (void) dealloc;
 - (void) hide;
 - (void) show:(BOOL)a ;
 - (void) layoutSubviews;
 - (void) setText:(id)a ;
 - (id) initWithWindow:(id)a ;
 - (void) setFontSize:(int)a ;
 - (id) _progressIndicator;
 - (void) setShowsText:(BOOL)a ;
 - (void) showInView:(id)a ;
 - (void) done;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
