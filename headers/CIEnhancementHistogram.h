
@interface CIEnhancementHistogram : NSObject {

    [256d] hist;
}
 + (id) histogramFromData:(r^d)a;
 + (id) histogramFromFloatData:(r^f)a;
 + (id) histogramFromDoubleData:(r^d)a;

 - (r^d) values;


@end
