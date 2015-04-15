
@interface UIWebDragDotView : UIView {

    UIColor* m_insertionPointColor;
    UIColor* m_selectionBarColor;
    UIImageView* m_dot;
    int m_orientation;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_stickFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_dotFrame;
}

 - (void) dealloc;
 - (BOOL) isPointedDown;
 - (BOOL) isPointedUp;
 - (BOOL) isPointedRight;
 - (BOOL) isPointedLeft;
 - (id) initWithEdge:({CGRect={CGPoint=dd}{CGSize=dd}})a container:(id)b orientation:(int)c ;
 - (void) setEdge:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setShowsBall:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) stickFrameForEdge:({CGRect={CGPoint=dd}{CGSize=dd}})a withOverlap:(double)b ;
 - (BOOL) showsBall;
 - (BOOL) isVertical;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
