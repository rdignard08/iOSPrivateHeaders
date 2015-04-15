
@interface CIEnhancementCalculation : NSObject {

    {?="i"d"q"d} originalFaceColor;
    CIEnhancementHistogram* lumHist;
    CIEnhancementHistogram* rgbSumHist;
    CIEnhancementHistogram* satHist;
    CIEnhancementHistogram* borderHist;
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
 - ({CGPoint=dd}) curvePointAtIndex:(unsigned long long)a ;
 - (id) shadow;
 - (void) setRGBSumHistogram:(id)a ;
 - (void) setLuminanceHistogram:(id)a ;
 - (void) setBorderHistogram:(id)a ;
 - (void) setSaturationHistogram:(id)a ;
 - (void) setFaceColorFromChromaI:(double)a andChromaQ:(double)b ;
 - (id) rawShadow;
 - (int) putShadowsAnalysisInto:(^d)a ;
 - (void) downSampleHistogram:(id)a to:(unsigned int)b storeIn:(^d)c ;
 - (void) printAnalysis;
 - (void) setCurvePercent:(double)a ;
 - (void) setupFaceColor:(id)a redIndex:(int)b greenIndex:(int)c blueIndex:(int)d ;
 - (void) setExposureValue:(double)a ;
 - (void) setShadowsMin:(double)a max:(double)b zeroExposure:(double)c ;
 - (void) printHistogram:(id)a downsampledTo:(unsigned int)b ;
 - (void) printHistogramsDownsampledTo:(unsigned int)a ;
 - (id) lumHist;
 - (id) rgbSumHist;
 - (id) satHist;
 - (id) borderHist;


@end
