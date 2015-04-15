
@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {

    @"NSMutableArray" _prevPoints;
    Q _width;
}

 - (void) clear;
 - (void) dealloc;
 - (void) addPoint:({CGPoint=dd})a;
 - (id) initWithFIFO:(id)awidth:(Q)b;
 - (void) setPrevPoints:(id)a;
 - (id) prevPoints;
 - (void) emitAveragedPoint;
 - (void) flush;
 - (Q) width;
 - (void) setWidth:(Q)a;


@end
