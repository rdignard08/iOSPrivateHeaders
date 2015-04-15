
@interface CIEnhancementCalculation : NSObject {

    {?="i"d"q"d} originalFaceColor;
    @"CIEnhancementHistogram" lumHist;
    @"CIEnhancementHistogram" rgbSumHist;
    @"CIEnhancementHistogram" satHist;
    @"CIEnhancementHistogram" borderHist;
    d exposureValue;
    d maxShadow;
    d minShadow;
    d exposureValueAtZeroShadow;
    d curvePercent;
    BOOL faceInputSet;
    d percentFaceChange;
}
@property (atomic, assign, readonly) NSNumber* originalFaceColor;
@property (atomic, assign, readonly) CIEnhancementHistogram* lumHist;
@property (atomic, assign, readonly) CIEnhancementHistogram* rgbSumHist;
@property (atomic, assign, readonly) CIEnhancementHistogram* satHist;
@property (atomic, assign, readonly) CIEnhancementHistogram* borderHist;
 + (d) bestWarmthForI:(d)aq:(d)bpercentChange:(^d)c;

 - (void) dealloc;
 - (id) init;
 - (id) faceBalanceWarmth;
 - (id) faceBalanceStrength;
 - ({?=dd}) originalFaceColor;
 - (id) vibrance;
 - (Q) curveCount;
 - ({CGPoint=dd}) curvePointAtIndex:(Q)a;
 - (id) shadow;
 - (void) setRGBSumHistogram:(id)a;
 - (void) setLuminanceHistogram:(id)a;
 - (void) setBorderHistogram:(id)a;
 - (void) setSaturationHistogram:(id)a;
 - (void) setFaceColorFromChromaI:(d)aandChromaQ:(d)b;
 - (id) rawShadow;
 - (i) putShadowsAnalysisInto:(^d)a;
 - (void) downSampleHistogram:(id)ato:(I)bstoreIn:(^d)c;
 - (void) printAnalysis;
 - (void) setCurvePercent:(d)a;
 - (void) setupFaceColor:(id)aredIndex:(i)bgreenIndex:(i)cblueIndex:(i)d;
 - (void) setExposureValue:(d)a;
 - (void) setShadowsMin:(d)amax:(d)bzeroExposure:(d)c;
 - (void) printHistogram:(id)adownsampledTo:(I)b;
 - (void) printHistogramsDownsampledTo:(I)a;
 - (id) lumHist;
 - (id) rgbSumHist;
 - (id) satHist;
 - (id) borderHist;


@end
