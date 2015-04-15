
@interface _UILabelScaledMetrics : NSObject {

    double _actualScaleFactor;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    @"NSAttributedString" _scaledAttributedText;
    {CGSize="width"d"height"d} _targetSize;
    {CGSize="width"d"height"d} _scaledSize;
}
@property (nonatomic, assign, readwrite) NSNumber* targetSize;
@property (nonatomic, assign, readwrite) NSNumber* scaledSize;
@property (nonatomic, assign, readwrite) NSNumber* actualScaleFactor;
@property (nonatomic, assign, readwrite) NSNumber* baselineOffset;
@property (nonatomic, assign, readwrite) NSNumber* scaledBaselineOffset;
@property (nonatomic, assign, readwrite) NSNumber* scaledLineHeight;
@property (nonatomic, retain, readwrite) NSAttributedString* scaledAttributedText;

 - (void) dealloc;
 - ({CGSize=dd}) targetSize;
 - (void) setTargetSize:({CGSize=dd})a;
 - ({CGSize=dd}) scaledSize;
 - (void) setScaledSize:({CGSize=dd})a;
 - (double) actualScaleFactor;
 - (double) scaledBaselineOffset;
 - (double) scaledLineHeight;
 - (id) scaledAttributedText;
 - (void) setScaledAttributedText:(id)a;
 - (void) setActualScaleFactor:(double)a;
 - (double) baselineOffset;
 - (void) setBaselineOffset:(double)a;
 - (void) setScaledBaselineOffset:(double)a;
 - (void) setScaledLineHeight:(double)a;


@end
