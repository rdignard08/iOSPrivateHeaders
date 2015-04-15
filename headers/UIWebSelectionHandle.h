
@interface UIWebSelectionHandle : UIView {

    UITouch* _touch;
    UIImageView* _dragDotView;
    int _position;
    int _textPosition;
    UIWebSelectionView* _selectionView;
    {CGSize="width"d"height"d} _touchToCenterOffset;
    {CGSize="width"d"height"d} _centerToSelectionPointOffset;
}

 - (int) position;
 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (id) touch;
 - (void) setTouch:(id)a ;
 - (id) initWithPosition:(int)a selectionView:(id)b ;
 - (void) snapToCornerOfRange:(id)a atStart:(BOOL)b ;
 - (BOOL) hasTextPosition;
 - (void) setTextPosition:(int)a ;
 - ({CGPoint=dd}) applyTouchToCenterOffset:({CGPoint=dd})a ;
 - (int) textPosition;
 - ({CGPoint=dd}) applyCenterToSelectionPointOffset:({CGPoint=dd})a ;
 - ({CGPoint=dd}) suggestedHandlePositionOnRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (double) offsetInDirectionOfHandleFromFirstPoint:({CGPoint=dd})a toSecondPoint:({CGPoint=dd})b ;
 - ({CGSize=dd}) centerToSelectionPointOffset;
 - (void) dropActiveTouch;
 - ({CGPoint=dd}) applyOffsetInDirectionOfHandle:(double)a toPoint:({CGPoint=dd})b ;
 - ({CGSize=dd}) touchToCenterOffset;
 - (void) setCenterToSelectionPointOffset:({CGSize=dd})a ;
 - (void) setPosition:(int)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
