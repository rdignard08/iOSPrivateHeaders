
@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {

    TIHandwritingStrokes* _strokes;
}

 - (void) clear;
 - (void) dealloc;
 - (void) addPoint:({CGPoint=dd})a;
 - (id) initWithFIFO:(id)a;
 - (id) strokes;
 - (void) setStrokes:(id)a;
 - (void) flush;


@end
