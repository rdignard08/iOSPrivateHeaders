
@interface _UILabelScaledMetrics : NSObject {

    d _actualScaleFactor;
    d _baselineOffset;
    d _scaledBaselineOffset;
    d _scaledLineHeight;
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
 - (d) actualScaleFactor;
 - (d) scaledBaselineOffset;
 - (d) scaledLineHeight;
 - (id) scaledAttributedText;
 - (void) setScaledAttributedText:(id)a;
 - (void) setActualScaleFactor:(d)a;
 - (d) baselineOffset;
 - (void) setBaselineOffset:(d)a;
 - (void) setScaledBaselineOffset:(d)a;
 - (void) setScaledLineHeight:(d)a;


@end
