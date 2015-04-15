
@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {

    b1 _isHighlighted;
    b1 _isSelected;
}
 + (id) minusImage;
 + (f) defaultWidth;
 + (id) plusImage;
 + (id) minusCenterImage;

 - (BOOL) isRotating;
 - (void) setHighlighted:(BOOL)a;
 - (BOOL) isHighlighted;
 - (void) setSelected:(BOOL)a;
 - (id) initWithRemoveControl:(id)a;
 - (void) setHiding:(BOOL)a;
 - (BOOL) isHiding;
 - (void) toggleRotate:(BOOL)a;
 - (BOOL) isRotated;
 - (void) setSelected:(BOOL)ahighlighted:(BOOL)b;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
