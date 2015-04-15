
@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO {

    NSMutableArray _prevPoints;
    UIBezierPath _path;
    UIView<UIKBHandwritingStrokeEnabled> _strokeView;
}

 - (void) clear;
 - (void) dealloc;
 - (void) addPoint:({CGPoint=dd})a;
 - (void) setStrokeView:(id)a;
 - (id) strokeView;
 - (id) initWithFIFO:(id)astrokeView:(id)b;
 - (void) setPrevPoints:(id)a;
 - (id) prevPoints;
 - (void) setPath:(id)a;
 - (id) path;
 - (void) flush;


@end
