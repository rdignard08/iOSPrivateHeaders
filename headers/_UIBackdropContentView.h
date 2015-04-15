
@interface _UIBackdropContentView : UIView {

}

 - (void) didMoveToWindow;
 - (void) _descendent:(id)a willMoveFromSuperview:(id)b toSuperview:(id)c ;
 - (void) _descendent:(id)a didMoveFromSuperview:(id)b toSuperview:(id)c ;
 - (void) backdropView:(id)a recursivelyUpdateMaskViewsForView:(id)b ;
 - (void) recursivelyRemoveBackdropMaskViewsForView:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
