
@interface UIWebSelectionHandle : UIView {

    @"UITouch" _touch;
    @"UIImageView" _dragDotView;
    i _position;
    i _textPosition;
    @"UIWebSelectionView" _selectionView;
    {CGSize="width"d"height"d} _touchToCenterOffset;
    {CGSize="width"d"height"d} _centerToSelectionPointOffset;
}

 - (i) position;
 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) touch;
 - (void) setTouch:(id)a;
 - (id) initWithPosition:(i)aselectionView:(id)b;
 - (void) snapToCornerOfRange:(id)aatStart:(BOOL)b;
 - (BOOL) hasTextPosition;
 - (void) setTextPosition:(i)a;
 - ({CGPoint=dd}) applyTouchToCenterOffset:({CGPoint=dd})a;
 - (i) textPosition;
 - ({CGPoint=dd}) applyCenterToSelectionPointOffset:({CGPoint=dd})a;
 - ({CGPoint=dd}) suggestedHandlePositionOnRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) offsetInDirectionOfHandleFromFirstPoint:({CGPoint=dd})atoSecondPoint:({CGPoint=dd})b;
 - ({CGSize=dd}) centerToSelectionPointOffset;
 - (void) dropActiveTouch;
 - ({CGPoint=dd}) applyOffsetInDirectionOfHandle:(d)atoPoint:({CGPoint=dd})b;
 - ({CGSize=dd}) touchToCenterOffset;
 - (void) setCenterToSelectionPointOffset:({CGSize=dd})a;
 - (void) setPosition:(i)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
