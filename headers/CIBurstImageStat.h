
@interface CIBurstImageStat : NSObject {

    f normalizedFocusScore;
    f normalizedSigma;
    [1024f] colorHistogram;
    i numEntries;
    [256S] aeMatrix;
    i dissimilarity;
    d timeReceived;
    d timestamp;
    ^v projectionMemoryBlock;
    {FastRegistration_Signatures="piRow"^f"nPiRow"Q"piRowTable"{Projections_meanStdTable="sumTable"^f"sumSqTable"^f}"piCol"^f"nPiCol"Q"piColTable"{Projections_meanStdTable="sumTable"^f"sumSqTable"^f}} projectionSignature;
    ^{SharpnessGridElement_t=CCf} sharpnessGrid;
    i gridWidth;
    i gridHeight;
    {GridROI_t="startX"i"startY"i"endX"i"endY"i} gridROI;
    {GridROI_t="startX"i"startY"i"endX"i"endY"i} smoothedROI;
    BOOL hasRegistrationData;
    f maxSkewness;
    f roiSize;
    BOOL exclude;
    BOOL AEStable;
    BOOL AFStable;
    BOOL emotionallyRejected;
    BOOL doLimitedSharpnessAndBlur;
    BOOL isGarbage;
    i orientation;
    i AEAverage;
    i AETarget;
    i temporalOrder;
    f avgHorzDiffY;
    f blurExtent;
    f imageScore;
    f actionScore;
    f registrationErrorX;
    f registrationErrorY;
    f registrationErrorIntegral;
    f actionClusteringScore;
    i numHWFaces;
    f tx;
    f ty;
    i _AEDelta;
    i _fullsizeJpegSize;
    i _version;
    @"NSString" imageId;
    @"NSMutableArray" faceStatArray;
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

 - (void) setVersion:(i)a;
 - (void) dealloc;
 - (id) initWithIdentifier:(id)a;
 - (i) version;
 - (BOOL) isGarbage;
 - (f) registrationErrorIntegral;
 - (id) imageId;
 - (id) faceStatArray;
 - (void) computeImageData:(id)afaceIDCounts:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) facesRoiRect;
 - (i) AEAverage;
 - (i) AETarget;
 - (BOOL) AEStable;
 - (BOOL) AFStable;
 - (i) orientation;
 - (^S) aeMatrix;
 - (void) setTemporalOrder:(i)a;
 - (void) setTimeReceived:(d)a;
 - (i) temporalOrder;
 - (void) setEmotionallyRejected:(BOOL)a;
 - (f) avgHorzDiffY;
 - (f) blurExtent;
 - (void) setImageScore:(f)a;
 - (void) setActionScore:(f)a;
 - (f) tx;
 - (f) ty;
 - (f) computeAEMatrixDifference:(id)a;
 - (i) canRegister;
 - (void) allocateMeanStdPingPongBuffers:(^^f)a;
 - (void) assignMeanStdBuffers:(^f)a;
 - (void) performRegistration:(id)adeltaCol:(^f)bdeltaRow:(^f)c;
 - (f) maxSkewness;
 - (void) setMaxSkewness:(f)a;
 - (void) setTx:(f)a;
 - (void) setTy:(f)a;
 - (f) computeSmoothedGridROI:(id)anextStat:(id)b;
 - (BOOL) doLimitedSharpnessAndBlur;
 - (BOOL) hasRegistrationData;
 - (void) collapseSharpnessGrid;
 - (void) setIsGarbage:(BOOL)a;
 - (void) flagAsGarbage;
 - (f) roiSize;
 - (f) registrationErrorX;
 - (f) registrationErrorY;
 - (f) computeScore:(f)a;
 - (void) writeGridROI:(id)a;
 - (f) actionScore;
 - (f) imageScore;
 - (BOOL) emotionallyRejected;
 - (q) compareImageOrder:(id)a;
 - (i) numHWFaces;
 - (f) actionClusteringScore;
 - (f) computeImageDistance:(id)a;
 - (void) setFacesRoiRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNumHWFaces:(i)a;
 - ({GridROI_t=iiii}) getSharpnessAndBlurLimits;
 - (void) setAEDelta:(i)a;
 - (void) setRegistrationErrorX:(f)a;
 - (void) setRegistrationErrorY:(f)a;
 - (void) setHasRegistrationData:(BOOL)a;
 - (void) setRegistrationErrorIntegral:(f)a;
 - (void) setActionClusteringScore:(f)a;
 - (void) updateROI:({GridROI_t=iiii})a;
 - (void) computeImageColorHistogram:(id)a;
 - (void) computeImageSharpnessOnGrid:(id)a;
 - (void) computeBlurStatsOnGrid:(id)a;
 - (void) computeImageProjections:(id)a;
 - (f) computeFacialFocusScoreSum;
 - (f) computeRuleOfThreeDistance;
 - (f) computeSmilePercentage;
 - (i) setAEMatrix:(id)a;
 - (void) computeAEMatrix:(id)a;
 - (q) compareImageStats:(id)a;
 - (^f) colorHistogram;
 - (void) setImageId:(id)a;
 - (void) setOrientation:(i)a;
 - (void) setFaceStatArray:(id)a;
 - (BOOL) exclude;
 - (void) setExclude:(BOOL)a;
 - (void) setAEStable:(BOOL)a;
 - (void) setAEAverage:(i)a;
 - (void) setAETarget:(i)a;
 - (void) setAFStable:(BOOL)a;
 - (void) setAvgHorzDiffY:(f)a;
 - (void) setBlurExtent:(f)a;
 - (d) timeReceived;
 - (void) setDoLimitedSharpnessAndBlur:(BOOL)a;
 - (void) setRoiSize:(f)a;
 - (i) AEDelta;
 - (i) fullsizeJpegSize;
 - (void) setFullsizeJpegSize:(i)a;
 - (d) timestamp;
 - (void) setTimestamp:(d)a;


@end
