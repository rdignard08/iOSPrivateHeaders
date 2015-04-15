
@interface CIBurstActionClassifier : NSObject {

    BOOL hasBeenScaled;
    [7d] testVector;
    f testAverageCameraTravelDistance;
    f testMaxRegistrationErrorIntegral;
    f testMaxPeakRegistrationError;
    f testMeanPeakRegistrationError;
    f testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    f testInOutRatio;
    f testMaxInnerDistance;
    f testAverageRegistrationErrorSkewness;
    f testMinRegionOfInterestSize;
    f testMaxRegistrationErrorSkewness;
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
 - (d) computeKernelValueWithSupportVector:(r^{CIBurstSupportVector=d[7d]})a;
 - (void) scaleVector;
 - (f) predictResult;
 - (id) initWithVersion:(i)a;
 - (BOOL) isBurstAction;
 - (f) testAverageCameraTravelDistance;
 - (void) setTestAverageCameraTravelDistance:(f)a;
 - (f) testMaxRegistrationErrorIntegral;
 - (void) setTestMaxRegistrationErrorIntegral:(f)a;
 - (f) testMaxPeakRegistrationError;
 - (void) setTestMaxPeakRegistrationError:(f)a;
 - (f) testMeanPeakRegistrationError;
 - (void) setTestMeanPeakRegistrationError:(f)a;
 - (f) testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
 - (void) setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(f)a;
 - (f) testInOutRatio;
 - (void) setTestInOutRatio:(f)a;
 - (f) testMaxInnerDistance;
 - (void) setTestMaxInnerDistance:(f)a;
 - (f) testAverageRegistrationErrorSkewness;
 - (void) setTestAverageRegistrationErrorSkewness:(f)a;
 - (f) testMinRegionOfInterestSize;
 - (void) setTestMinRegionOfInterestSize:(f)a;
 - (f) testMaxRegistrationErrorSkewness;
 - (void) setTestMaxRegistrationErrorSkewness:(f)a;


@end
