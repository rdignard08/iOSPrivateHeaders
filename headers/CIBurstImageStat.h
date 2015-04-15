
@interface CIBurstImageStat : NSObject {

    float normalizedFocusScore;
    float normalizedSigma;
    [1024f] colorHistogram;
    int numEntries;
    [256S] aeMatrix;
    int dissimilarity;
    double timeReceived;
    double timestamp;
    ^v projectionMemoryBlock;
    {FastRegistration_Signatures="piRow"^f"nPiRow"Q"piRowTable"{Projections_meanStdTable="sumTable"^f"sumSqTable"^f}"piCol"^f"nPiCol"Q"piColTable"{Projections_meanStdTable="sumTable"^f"sumSqTable"^f}} projectionSignature;
    ^{SharpnessGridElement_t=CCf} sharpnessGrid;
    int gridWidth;
    int gridHeight;
    {GridROI_t="startX"i"startY"i"endX"i"endY"i} gridROI;
    {GridROI_t="startX"i"startY"i"endX"i"endY"i} smoothedROI;
    BOOL hasRegistrationData;
    float maxSkewness;
    float roiSize;
    BOOL exclude;
    BOOL AEStable;
    BOOL AFStable;
    BOOL emotionallyRejected;
    BOOL doLimitedSharpnessAndBlur;
    BOOL isGarbage;
    int orientation;
    int AEAverage;
    int AETarget;
    int temporalOrder;
    float avgHorzDiffY;
    float blurExtent;
    float imageScore;
    float actionScore;
    float registrationErrorX;
    float registrationErrorY;
    float registrationErrorIntegral;
    float actionClusteringScore;
    int numHWFaces;
    float tx;
    float ty;
    int _AEDelta;
    int _fullsizeJpegSize;
    int _version;
    NSString* imageId;
    NSMutableArray* faceStatArray;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} facesRoiRect;
}
@property (atomic, assign, readwrite) NSString* imageId;
@property (atomic, assign, readwrite) NSNumber* orientation;
@property (atomic, assign, readwrite) NSMutableArray* faceStatArray;
@property (atomic, assign, readwrite) NSNumber* exclude;
@property (atomic, assign, readwrite) NSNumber* AEStable;
@property (atomic, assign, readwrite) NSNumber* AEAverage;
@property (atomic, assign, readwrite) NSNumber* AETarget;
@property (atomic, assign, readwrite) NSNumber* AFStable;
@property (atomic, assign, readwrite) NSNumber* temporalOrder;
@property (atomic, assign, readwrite) NSNumber* avgHorzDiffY;
@property (atomic, assign, readwrite) NSNumber* blurExtent;
@property (atomic, assign, readwrite) NSNumber* imageScore;
@property (atomic, assign, readwrite) NSNumber* actionScore;
@property (atomic, assign, readwrite) NSNumber* timeReceived;
@property (atomic, assign, readwrite) NSNumber* timestamp;
@property (atomic, assign, readwrite) NSNumber* maxSkewness;
@property (atomic, assign, readwrite) NSNumber* registrationErrorX;
@property (atomic, assign, readwrite) NSNumber* registrationErrorY;
@property (atomic, assign, readwrite) NSNumber* registrationErrorIntegral;
@property (atomic, assign, readwrite) NSNumber* actionClusteringScore;
@property (atomic, assign, readwrite) NSNumber* hasRegistrationData;
@property (atomic, assign, readwrite) NSNumber* facesRoiRect;
@property (atomic, assign, readwrite) NSNumber* numHWFaces;
@property (atomic, assign, readwrite) NSNumber* emotionallyRejected;
@property (atomic, assign, readwrite) NSNumber* doLimitedSharpnessAndBlur;
@property (atomic, assign, readwrite) NSNumber* tx;
@property (atomic, assign, readwrite) NSNumber* ty;
@property (atomic, assign, readwrite) NSNumber* isGarbage;
@property (atomic, assign, readwrite) NSNumber* roiSize;
@property (atomic, assign, readwrite) NSNumber* AEDelta;
@property (atomic, assign, readwrite) NSNumber* fullsizeJpegSize;
@property (atomic, assign, readwrite) NSNumber* version;

 - (void) setVersion:(int)a;
 - (void) dealloc;
 - (id) initWithIdentifier:(id)a;
 - (int) version;
 - (BOOL) isGarbage;
 - (float) registrationErrorIntegral;
 - (id) imageId;
 - (id) faceStatArray;
 - (void) computeImageData:(id)afaceIDCounts:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) facesRoiRect;
 - (int) AEAverage;
 - (int) AETarget;
 - (BOOL) AEStable;
 - (BOOL) AFStable;
 - (int) orientation;
 - (^S) aeMatrix;
 - (void) setTemporalOrder:(int)a;
 - (void) setTimeReceived:(double)a;
 - (int) temporalOrder;
 - (void) setEmotionallyRejected:(BOOL)a;
 - (float) avgHorzDiffY;
 - (float) blurExtent;
 - (void) setImageScore:(float)a;
 - (void) setActionScore:(float)a;
 - (float) tx;
 - (float) ty;
 - (float) computeAEMatrixDifference:(id)a;
 - (int) canRegister;
 - (void) allocateMeanStdPingPongBuffers:(^^f)a;
 - (void) assignMeanStdBuffers:(^f)a;
 - (void) performRegistration:(id)adeltaCol:(^f)bdeltaRow:(^f)c;
 - (float) maxSkewness;
 - (void) setMaxSkewness:(float)a;
 - (void) setTx:(float)a;
 - (void) setTy:(float)a;
 - (float) computeSmoothedGridROI:(id)anextStat:(id)b;
 - (BOOL) doLimitedSharpnessAndBlur;
 - (BOOL) hasRegistrationData;
 - (void) collapseSharpnessGrid;
 - (void) setIsGarbage:(BOOL)a;
 - (void) flagAsGarbage;
 - (float) roiSize;
 - (float) registrationErrorX;
 - (float) registrationErrorY;
 - (float) computeScore:(float)a;
 - (void) writeGridROI:(id)a;
 - (float) actionScore;
 - (float) imageScore;
 - (BOOL) emotionallyRejected;
 - (long long) compareImageOrder:(id)a;
 - (int) numHWFaces;
 - (float) actionClusteringScore;
 - (float) computeImageDistance:(id)a;
 - (void) setFacesRoiRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNumHWFaces:(int)a;
 - ({GridROI_t=iiii}) getSharpnessAndBlurLimits;
 - (void) setAEDelta:(int)a;
 - (void) setRegistrationErrorX:(float)a;
 - (void) setRegistrationErrorY:(float)a;
 - (void) setHasRegistrationData:(BOOL)a;
 - (void) setRegistrationErrorIntegral:(float)a;
 - (void) setActionClusteringScore:(float)a;
 - (void) updateROI:({GridROI_t=iiii})a;
 - (void) computeImageColorHistogram:(id)a;
 - (void) computeImageSharpnessOnGrid:(id)a;
 - (void) computeBlurStatsOnGrid:(id)a;
 - (void) computeImageProjections:(id)a;
 - (float) computeFacialFocusScoreSum;
 - (float) computeRuleOfThreeDistance;
 - (float) computeSmilePercentage;
 - (int) setAEMatrix:(id)a;
 - (void) computeAEMatrix:(id)a;
 - (long long) compareImageStats:(id)a;
 - (^f) colorHistogram;
 - (void) setImageId:(id)a;
 - (void) setOrientation:(int)a;
 - (void) setFaceStatArray:(id)a;
 - (BOOL) exclude;
 - (void) setExclude:(BOOL)a;
 - (void) setAEStable:(BOOL)a;
 - (void) setAEAverage:(int)a;
 - (void) setAETarget:(int)a;
 - (void) setAFStable:(BOOL)a;
 - (void) setAvgHorzDiffY:(float)a;
 - (void) setBlurExtent:(float)a;
 - (double) timeReceived;
 - (void) setDoLimitedSharpnessAndBlur:(BOOL)a;
 - (void) setRoiSize:(float)a;
 - (int) AEDelta;
 - (int) fullsizeJpegSize;
 - (void) setFullsizeJpegSize:(int)a;
 - (double) timestamp;
 - (void) setTimestamp:(double)a;


@end
