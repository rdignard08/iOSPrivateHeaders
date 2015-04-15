
@interface UIRemoveControlMinusButton : UIControl {

    b1 _rotated;
    b1 _rotating;
    b1 _hiding;
    b1 _showAsPlus;
    b28 _reserved;
    f _verticalOffset;
}
 + (id) minusImage;
 + (f) defaultWidth;
 + (id) plusImage;

 - (void) dealloc;
 - (BOOL) isRotating;
 - (void) animator:(id)astopAnimation:(id)b;
 - (void) _toggleRotateAnimationDidStop:(id)afinished:(BOOL)b;
 - (id) initWithRemoveControl:(id)a;
 - (void) setHiding:(BOOL)a;
 - (BOOL) isHiding;
 - (void) toggleRotate:(BOOL)a;
 - (BOOL) isRotated;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
