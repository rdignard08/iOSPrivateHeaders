
@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {

    @"NSMutableArray" _prevPoints;
    unsigned long long _width;
}

 - (void) clear;
 - (void) dealloc;
 - (void) addPoint:({CGPoint=dd})a;
 - (id) initWithFIFO:(id)awidth:(unsigned long long)b;
 - (void) setPrevPoints:(id)a;
 - (id) prevPoints;
 - (void) emitAveragedPoint;
 - (void) flush;
 - (unsigned long long) width;
 - (void) setWidth:(unsigned long long)a;


@end
