
@interface _UITextKitSelectionRect : UITextSelectionRect {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
    BOOL _containsEnd;
    BOOL _containsStart;
    BOOL _vertical;
}
 + (id) selectionRectWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromView:(id)b;

 - (id) description;
 - (void) setRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromView:(id)b ;
 - (void) setVertical:(BOOL)a ;
 - (BOOL) isVertical;
 - (BOOL) containsStart;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rect;
 - (long long) writingDirection;
 - (BOOL) containsEnd;
 - (void) setContainsStart:(BOOL)a ;
 - (void) setContainsEnd:(BOOL)a ;


@end
