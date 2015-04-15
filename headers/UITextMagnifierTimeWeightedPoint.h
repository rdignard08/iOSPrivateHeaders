
@interface UITextMagnifierTimeWeightedPoint : NSObject {

    i m_index;
    [16{?="point"{CGPoint="x"d"y"d}"time"d}] m_points;
}
@property (nonatomic, assign, readonly) NSNumber* weightedPoint;

 - (void) addPoint:({CGPoint=dd})a;
 - (f) distanceCoveredInInterval:(d)apriorTo:(d)b;
 - ({CGSize=dd}) displacementInInterval:(d)apriorTo:(d)b;
 - (void) clearHistory;
 - ({CGPoint=dd}) weightedPoint;
 - (BOOL) historyCovers:(d)a;
 - (f) distanceCoveredInInterval:(d)a;
 - ({CGSize=dd}) displacementInInterval:(d)a;


@end
