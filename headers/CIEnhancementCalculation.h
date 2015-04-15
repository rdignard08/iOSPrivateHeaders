
@interface CIEnhancementCalculation : NSObject {

    {?="i"d"q"d} originalFaceColor;
    CIEnhancementHistogram lumHist;
    CIEnhancementHistogram rgbSumHist;
    CIEnhancementHistogram satHist;
    CIEnhancementHistogram borderHist;
    double exposureValue;
    double maxShadow;
    double minShadow;
    double exposureValueAtZeroShadow;
    double curvePercent;
    BOOL faceInputSet;
    double percentFaceChange;
}
@property (atomic, assign, readonly) NSNumber* originalFaceColor;
@property (atomic, assign, readonly) CIEnhancementHistogram* lumHist;
@property (atomic, assign, readonly) CIEnhancementHistogram* rgbSumHist;
@property (atomic, assign, readonly) CIEnhancementHistogram* satHist;
@property (atomic, assign, readonly) CIEnhancementHistogram* borderHist;
 + (double) bestWarmthForI:(double)aq:(double)bpercentChange:(^d)c;

 - (void) dealloc;
 - (id) init;
 - (id) faceBalanceWarmth;
 - (id) faceBalanceStrength;
 - ({?=dd}) originalFaceColor;
 - (id) vibrance;
 - (unsigned long long) curveCount;
 - ({CGPoint=dd}) curvePointAtIndex:(unsigned long long)a;
 - (id) shadow;
 - (void) setRGBSumHistogram:(id)a;
 - (void) setLuminanceHistogram:(id)a;
 - (void) setBorderHistogram:(id)a;
 - (void) setSaturationHistogram:(id)a;
 - (void) setFaceColorFromChromaI:(double)aandChromaQ:(double)b;
 - (id) rawShadow;
 - (int) putShadowsAnalysisInto:(^d)a;
 - (void) downSampleHistogram:(id)ato:(unsigned int)bstoreIn:(^d)c;
 - (void) printAnalysis;
 - (void) setCurvePercent:(double)a;
 - (void) setupFaceColor:(id)aredIndex:(int)bgreenIndex:(int)cblueIndex:(int)d;
 - (void) setExposureValue:(double)a;
 - (void) setShadowsMin:(double)amax:(double)bzeroExposure:(double)c;
 - (void) printHistogram:(id)adownsampledTo:(unsigned int)b;
 - (void) printHistogramsDownsampledTo:(unsigned int)a;
 - (id) lumHist;
 - (id) rgbSumHist;
 - (id) satHist;
 - (id) borderHist;


@end
