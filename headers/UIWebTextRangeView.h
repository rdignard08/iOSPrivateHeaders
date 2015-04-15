
@interface UIWebTextRangeView : UIView {

    @"UIView<UITextInput>" m_container;
    @"NSArray" _rects;
    @"NSMutableArray" _rectViews;
    @"UIWebDragDotView" _startDot;
    @"UIWebDragDotView" _endDot;
    BOOL _magnifying;
}

 - (void) dealloc;
 - (id) container;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) setRects:(id)a;
 - (id) rects;
 - (void) prepareForMagnification;
 - (void) doneMagnifying;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) startEdge;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endEdge;
 - (void) updateRectViews;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRect;
 - (void) geometryChanged;
 - (BOOL) startIsHorizontal;
 - (BOOL) endIsHorizontal;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atextContainer:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectAtIndex:(i)a;
 - ({CGPoint=dd}) endCorner;
 - ({CGPoint=dd}) startCorner;
 - (void) updateDragDots;
 - (id) rectViewAtIndex:(i)a;
 - (void) removeFromSuperview;


@end
