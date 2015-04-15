
@interface _UIBackdropViewLayer : CALayer {

    _UIBackdropView* _backdropView;
}

 - (void) dealloc;
 - (void) setBackdropView:(id)a;
 - (id) backdropView;
 - (void) renderInContext:(^{CGContext=})a;


@end
