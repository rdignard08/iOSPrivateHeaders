
@protocol NSCopying;
@interface CIBurstFaceStat : NSObject <NSCopying> {

    BOOL leftEyeOpen;
    BOOL rightEyeOpen;
    BOOL smiling;
    BOOL foundByFaceCore;
    BOOL hasLeftEye;
    BOOL hasRightEye;
    BOOL leftEyePleasant;
    BOOL rightEyePleasant;
    BOOL mouthPleasant;
    BOOL hasRollAngle;
    BOOL hasYawAngle;
    BOOL smallFace;
    BOOL _isSyncedWithImage;
    f normalizedSigma;
    i faceId;
    i hwFaceId;
    i framesSinceLast;
    f focusScore;
    f normalizedFocusScore;
    f faceScore;
    f leftEyeBlinkScore;
    f rightEyeBlinkScore;
    f smileScore;
    i FCRLeftEyeFeaturesOffset;
    i FCRRightEyeFeaturesOffset;
    i FCRSmileFeaturesOffset;
    i FCRBlinkFeaturesSize;
    i FCRSmileFeaturesSize;
    f faceHOGTime;
    f faceCropTime;
    f faceScoreTime;
    f normalizedSmileScore;
    f rollAngle;
    f yawAngle;
    @"NSMutableArray" FCRSmileAndBlinkFeatures;
    @"NSMutableArray" faceHOG;
    d timestamp;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} faceRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} normalizedFaceRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} leftEyeRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} rightEyeRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _hwFaceRect;
}
@property (atomic, assign, readwrite) NSNumber* leftEyeOpen;
@property (atomic, assign, readwrite) NSNumber* rightEyeOpen;
@property (atomic, assign, readwrite) NSNumber* smiling;
@property (atomic, assign, readwrite) NSNumber* leftEyeBlinkScore;
@property (atomic, assign, readwrite) NSNumber* rightEyeBlinkScore;
@property (atomic, assign, readwrite) NSNumber* smileScore;
@property (atomic, assign, readwrite) NSNumber* hasLeftEye;
@property (atomic, assign, readwrite) NSNumber* hasRightEye;
@property (atomic, assign, readwrite) NSNumber* foundByFaceCore;
@property (atomic, assign, readwrite) NSNumber* faceRect;
@property (atomic, assign, readwrite) NSNumber* normalizedFaceRect;
@property (atomic, assign, readwrite) NSNumber* faceId;
@property (atomic, assign, readwrite) NSNumber* framesSinceLast;
@property (atomic, assign, readwrite) NSNumber* focusScore;
@property (atomic, assign, readwrite) NSNumber* faceScore;
@property (atomic, assign, readwrite) NSNumber* leftEyeRect;
@property (atomic, assign, readwrite) NSNumber* rightEyeRect;
@property (atomic, assign, readwrite) NSNumber* FCRLeftEyeFeaturesOffset;
@property (atomic, assign, readwrite) NSNumber* FCRRightEyeFeaturesOffset;
@property (atomic, assign, readwrite) NSNumber* FCRSmileFeaturesOffset;
@property (atomic, assign, readwrite) NSNumber* FCRBlinkFeaturesSize;
@property (atomic, assign, readwrite) NSNumber* FCRSmileFeaturesSize;
@property (atomic, assign, readwrite) NSMutableArray* FCRSmileAndBlinkFeatures;
@property (atomic, assign, readwrite) NSNumber* faceHOGTime;
@property (atomic, assign, readwrite) NSNumber* faceCropTime;
@property (atomic, assign, readwrite) NSNumber* faceScoreTime;
@property (atomic, assign, readwrite) NSMutableArray* faceHOG;
@property (atomic, assign, readwrite) NSNumber* normalizedSmileScore;
@property (atomic, assign, readwrite) NSNumber* leftEyePleasant;
@property (atomic, assign, readwrite) NSNumber* rightEyePleasant;
@property (atomic, assign, readwrite) NSNumber* mouthPleasant;
@property (atomic, assign, readwrite) NSNumber* hwFaceId;
@property (atomic, assign, readwrite) NSNumber* hwFaceRect;
@property (atomic, assign, readwrite) NSNumber* normalizedFocusScore;
@property (atomic, assign, readwrite) NSNumber* normalizedSigma;
@property (atomic, assign, readwrite) NSNumber* hasRollAngle;
@property (atomic, assign, readwrite) NSNumber* hasYawAngle;
@property (atomic, assign, readwrite) NSNumber* rollAngle;
@property (atomic, assign, readwrite) NSNumber* yawAngle;
@property (atomic, assign, readwrite) NSNumber* timestamp;
@property (atomic, assign, readwrite) NSNumber* isSyncedWithImage;
@property (atomic, assign, readwrite) NSNumber* smallFace;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (i) faceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) normalizedFaceRect;
 - (BOOL) hasRollAngle;
 - (f) rollAngle;
 - (BOOL) hasYawAngle;
 - (f) yawAngle;
 - (BOOL) hasLeftEye;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) leftEyeRect;
 - (f) leftEyeBlinkScore;
 - (BOOL) hasRightEye;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightEyeRect;
 - (f) rightEyeBlinkScore;
 - (f) smileScore;
 - (f) focusScore;
 - (BOOL) leftEyeOpen;
 - (BOOL) rightEyeOpen;
 - (BOOL) smiling;
 - (BOOL) smallFace;
 - (i) FCRLeftEyeFeaturesOffset;
 - (i) FCRRightEyeFeaturesOffset;
 - (i) FCRSmileFeaturesOffset;
 - (i) FCRBlinkFeaturesSize;
 - (i) FCRSmileFeaturesSize;
 - (void) setSmiling:(BOOL)a;
 - (f) normalizedFocusScore;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) faceRect;
 - (void) setFaceId:(i)a;
 - (void) setFaceRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (i) framesSinceLast;
 - (void) setFramesSinceLast:(i)a;
 - (void) setHwFaceId:(i)a;
 - (i) hwFaceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) hwFaceRect;
 - (void) setHwFaceRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isSyncedWithImage;
 - (void) setNormalizedFaceRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFoundByFaceCore:(BOOL)a;
 - (void) setHasLeftEye:(BOOL)a;
 - (void) setHasRightEye:(BOOL)a;
 - (void) setLeftEyeOpen:(BOOL)a;
 - (void) setRightEyeOpen:(BOOL)a;
 - (void) setLeftEyeBlinkScore:(f)a;
 - (void) setRightEyeBlinkScore:(f)a;
 - (void) setSmileScore:(f)a;
 - (void) setSmallFace:(BOOL)a;
 - (void) setLeftEyeRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setRightEyeRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) foundByFaceCore;
 - (void) setFocusScore:(f)a;
 - (void) setNormalizedFocusScore:(f)a;
 - (void) setNormalizedSigma:(f)a;
 - (void) setHasRollAngle:(BOOL)a;
 - (void) setRollAngle:(f)a;
 - (void) setHasYawAngle:(BOOL)a;
 - (void) setYawAngle:(f)a;
 - (void) setIsSyncedWithImage:(BOOL)a;
 - (f) normalizedSigma;
 - (f) faceScore;
 - (f) normalizedSmileScore;
 - (BOOL) leftEyePleasant;
 - (BOOL) rightEyePleasant;
 - (BOOL) mouthPleasant;
 - (id) faceHOG;
 - (id) FCRSmileAndBlinkFeatures;
 - (id) initWithFaceStat:(id)a;
 - (void) setFaceScore:(f)a;
 - (void) setFCRLeftEyeFeaturesOffset:(i)a;
 - (void) setFCRRightEyeFeaturesOffset:(i)a;
 - (void) setFCRSmileFeaturesOffset:(i)a;
 - (void) setFCRBlinkFeaturesSize:(i)a;
 - (void) setFCRSmileFeaturesSize:(i)a;
 - (void) setFCRSmileAndBlinkFeatures:(id)a;
 - (f) faceHOGTime;
 - (void) setFaceHOGTime:(f)a;
 - (f) faceCropTime;
 - (void) setFaceCropTime:(f)a;
 - (f) faceScoreTime;
 - (void) setFaceScoreTime:(f)a;
 - (void) setFaceHOG:(id)a;
 - (void) setNormalizedSmileScore:(f)a;
 - (void) setLeftEyePleasant:(BOOL)a;
 - (void) setRightEyePleasant:(BOOL)a;
 - (void) setMouthPleasant:(BOOL)a;
 - (d) timestamp;
 - (void) setTimestamp:(d)a;


@end