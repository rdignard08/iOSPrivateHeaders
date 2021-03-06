
@interface _UIHighlightView : UIView {

    UIColor* _color;
    double _cornerRadius;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _invertedHighlightClipRect;
    NSArray* _cornerRadii;
    NSMutableArray* _innerBounds;
    NSMutableArray* _innerQuads;
    BOOL _invertHighlight;
}

 - (void) dealloc;
 - (void) setCornerRadius:(double)a ;
 - (id) hitTest:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) cleanUp;
 - (void) setCornerRadii:(id)a ;
 - (void) setFrames:(id)a boundaryRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) setQuads:(id)a boundaryRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) setInvertHighlight:(BOOL)a clipRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setColor:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
