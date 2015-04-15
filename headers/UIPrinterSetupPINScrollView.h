
@interface UIPrinterSetupPINScrollView : UIScrollView {

    @"UIView" _contentView;
    d _visibleHeight;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})aanimated:(BOOL)b;
 - (BOOL) _scrollsToMakeFirstResponderVisible;
 - (void) keyboardDidChangeFrame:(id)a;
 - (d) visibleHeight;
 - (void) setVisibleHeight:(d)a;
 - (id) contentView;
 - (id) initWithContentView:(id)a;
 - (void) setContentView:(id)a;


@end
