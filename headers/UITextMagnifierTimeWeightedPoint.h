
@interface UITextMagnifierTimeWeightedPoint : NSObject {

    int m_index;
    [16{?="point"{CGPoint="x"d"y"d}"time"d}] m_points;
}
@property (nonatomic, assign, readonly) NSNumber* weightedPoint;

 - (void) addPoint:({CGPoint=dd})a;
 - (float) distanceCoveredInInterval:(double)apriorTo:(double)b;
 - ({CGSize=dd}) displacementInInterval:(double)apriorTo:(double)b;
 - (void) clearHistory;
 - ({CGPoint=dd}) weightedPoint;
 - (BOOL) historyCovers:(double)a;
 - (float) distanceCoveredInInterval:(double)a;
 - ({CGSize=dd}) displacementInInterval:(double)a;


@end
