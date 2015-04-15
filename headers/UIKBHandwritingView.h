
@protocol UIGestureRecognizerDelegate;
@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate> {

    UIKBHandwritingStrokeView* _strokeView;
    double _inkWidth;
    ^{CGColor=} _inkColor;
    ^{CGImage=} _inkMask;
    NSMutableArray* _interpolatedPaths;
    UIBezierPath* _currentPath;
    UIKBHandwritingStrokePointFIFO* _strokeFIFO;
    UIKBHandwritingBoxcarFilterPointFIFO* _smoothingFIFO;
    UIKBHandwritingQuadCurvePointFIFO* _interpolatingFIFO;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) setRenderConfig:(id)a ;
 - (BOOL) cancelTouchTracking;
 - (void) log;
 - (void) updateForKeyplane:(id)a key:(id)b ;
 - (double) inkWidth;
 - (void) send;
 - (void) clearAndNotify:(BOOL)a ;
 - (BOOL) shouldCache;
 - (void) deleteStrokesAtIndexes:(id)a ;
 - (^{CGColor=}) inkColor;
 - (^{CGImage=}) inkMask;
 - (id) interpolatedPaths;
 - (id) currentPath;
 - (void) setInkMask:(^{CGImage=})a ;
 - (void) setInkWidth:(double)a ;
 - (void) updateInkColor;
 - (void) setStrokeView:(id)a ;
 - (void) setInterpolatedPaths:(id)a ;
 - (id) strokeView;
 - (void) setInterpolatingFIFO:(id)a ;
 - (id) interpolatingFIFO;
 - (void) setSmoothingFIFO:(id)a ;
 - (id) smoothingFIFO;
 - (void) setStrokeFIFO:(id)a ;
 - (id) strokeFIFO;
 - (void) setInkColor:(^{CGColor=})a ;
 - (void) setCurrentPath:(id)a ;
 - (void) addInkPoint:({CGPoint=dd})a ;


@end
