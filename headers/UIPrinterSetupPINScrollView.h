
@interface UIPrinterSetupPINScrollView : UIScrollView {

    UIView* _contentView;
    double _visibleHeight;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})a animated:(BOOL)b ;
 - (BOOL) _scrollsToMakeFirstResponderVisible;
 - (void) keyboardDidChangeFrame:(id)a ;
 - (double) visibleHeight;
 - (void) setVisibleHeight:(double)a ;
 - (id) contentView;
 - (id) initWithContentView:(id)a ;
 - (void) setContentView:(id)a ;


@end
