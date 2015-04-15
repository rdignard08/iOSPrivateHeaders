
@interface UIWebSelectionHandle : UIView {

    @"UITouch" _touch;
    @"UIImageView" _dragDotView;
    int _position;
    int _textPosition;
    @"UIWebSelectionView" _selectionView;
    {CGSize="width"d"height"d} _touchToCenterOffset;
    {CGSize="width"d"height"d} _centerToSelectionPointOffset;
}

 - (int) position;
 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) touch;
 - (void) setTouch:(id)a;
 - (id) initWithPosition:(int)aselectionView:(id)b;
 - (void) snapToCornerOfRange:(id)aatStart:(BOOL)b;
 - (BOOL) hasTextPosition;
 - (void) setTextPosition:(int)a;
 - ({CGPoint=dd}) applyTouchToCenterOffset:({CGPoint=dd})a;
 - (int) textPosition;
 - ({CGPoint=dd}) applyCenterToSelectionPointOffset:({CGPoint=dd})a;
 - ({CGPoint=dd}) suggestedHandlePositionOnRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (double) offsetInDirectionOfHandleFromFirstPoint:({CGPoint=dd})atoSecondPoint:({CGPoint=dd})b;
 - ({CGSize=dd}) centerToSelectionPointOffset;
 - (void) dropActiveTouch;
 - ({CGPoint=dd}) applyOffsetInDirectionOfHandle:(double)atoPoint:({CGPoint=dd})b;
 - ({CGSize=dd}) touchToCenterOffset;
 - (void) setCenterToSelectionPointOffset:({CGSize=dd})a;
 - (void) setPosition:(int)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
