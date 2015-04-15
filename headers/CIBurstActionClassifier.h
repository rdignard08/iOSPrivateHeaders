
@interface CIBurstActionClassifier : NSObject {

    BOOL hasBeenScaled;
    [7d] testVector;
    float testAverageCameraTravelDistance;
    float testMaxRegistrationErrorIntegral;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float testInOutRatio;
    float testMaxInnerDistance;
    float testAverageRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorSkewness;
    ^{__SVMParameters=[7{__SVMScaleOffset=ff}]ddii^{CIBurstSupportVector}^{CIBurstSupportVector}} _svmParameters;
}
@property (atomic, assign, readwrite) NSNumber* testMaxInnerDistance;
@property (atomic, assign, readwrite) NSNumber* testInOutRatio;
@property (atomic, assign, readwrite) NSNumber* testMaxPeakRegistrationError;
@property (atomic, assign, readwrite) NSNumber* testMeanPeakRegistrationError;
@property (atomic, assign, readwrite) NSNumber* testMinRegionOfInterestSize;
@property (atomic, assign, readwrite) NSNumber* testMaxRegistrationErrorSkewness;
@property (atomic, assign, readwrite) NSNumber* testMaxRegistrationErrorIntegral;
@property (atomic, assign, readwrite) NSNumber* testAverageCameraTravelDistance;
@property (atomic, assign, readwrite) NSNumber* testAverageRegistrationErrorSkewness;
@property (atomic, assign, readwrite) NSNumber* testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property (atomic, assign, readwrite) NSNumber* svmParameters;

 - (id) init;
 - (void) setSvmParameters:(^{__SVMParameters=[7{__SVMScaleOffset=ff}]ddii^{CIBurstSupportVector}^{CIBurstSupportVector}})a;
 - (^{__SVMParameters=[7{__SVMScaleOffset=ff}]ddii^{CIBurstSupportVector}^{CIBurstSupportVector}}) svmParameters;
 - (double) computeKernelValueWithSupportVector:(r^{CIBurstSupportVector=d[7d]})a;
 - (void) scaleVector;
 - (float) predictResult;
 - (id) initWithVersion:(int)a;
 - (BOOL) isBurstAction;
 - (float) testAverageCameraTravelDistance;
 - (void) setTestAverageCameraTravelDistance:(float)a;
 - (float) testMaxRegistrationErrorIntegral;
 - (void) setTestMaxRegistrationErrorIntegral:(float)a;
 - (float) testMaxPeakRegistrationError;
 - (void) setTestMaxPeakRegistrationError:(float)a;
 - (float) testMeanPeakRegistrationError;
 - (void) setTestMeanPeakRegistrationError:(float)a;
 - (float) testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
 - (void) setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(float)a;
 - (float) testInOutRatio;
 - (void) setTestInOutRatio:(float)a;
 - (float) testMaxInnerDistance;
 - (void) setTestMaxInnerDistance:(float)a;
 - (float) testAverageRegistrationErrorSkewness;
 - (void) setTestAverageRegistrationErrorSkewness:(float)a;
 - (float) testMinRegionOfInterestSize;
 - (void) setTestMinRegionOfInterestSize:(float)a;
 - (float) testMaxRegistrationErrorSkewness;
 - (void) setTestMaxRegistrationErrorSkewness:(float)a;


@end
