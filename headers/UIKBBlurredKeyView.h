
@interface UIKBBlurredKeyView : UIKBKeyView {

    UIKBKeyView* _keyView;
    UIKBBackdropView* _backdropView;
}

 - (void) dealloc;
 - (id) renderConfig;
 - (id) contentsKeyView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - (void) setRenderConfig:(id)a ;
 - (void) updateForKeyplane:(id)a key:(id)b ;
 - (void) setDrawFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) keyplane;
 - (void) dimKeyCaps:(double)a duration:(double)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) drawFrame;
 - (BOOL) requiresSublayers;
 - (id) key;
 - (void) setNeedsDisplay;
 - (void) displayLayer:(id)a ;


@end
