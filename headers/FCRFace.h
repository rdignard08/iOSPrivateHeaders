
@interface FCRFace : NSObject {

    {?="center"{CGPoint="x"d"y"d}"bounds"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}} face;
    {?="center"{CGPoint="x"d"y"d}"bounds"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}} leftEye;
    {?="center"{CGPoint="x"d"y"d}"bounds"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}} rightEye;
    {?="center"{CGPoint="x"d"y"d}"bounds"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}} mouth;
    double faceSize;
    double faceAngle;
    long long trackID;
    unsigned long long trackDuration;
    NSData faceprint;
    int faceType;
    NSDictionary faceLandmarkPoints;
    NSDictionary expressionFeatures;
    NSDictionary additionalInfo;
}
@property (atomic, assign, readwrite) NSNumber* face;
@property (atomic, assign, readwrite) NSNumber* leftEye;
@property (atomic, assign, readwrite) NSNumber* rightEye;
@property (atomic, assign, readwrite) NSNumber* mouth;
@property (atomic, assign, readwrite) NSNumber* faceSize;
@property (atomic, assign, readwrite) NSNumber* faceAngle;
@property (atomic, assign, readwrite) NSNumber* trackID;
@property (atomic, assign, readwrite) NSNumber* trackDuration;
@property (atomic, retain, readwrite) NSData* faceprint;
@property (atomic, assign, readwrite) NSNumber* faceType;
@property (atomic, retain, readwrite) NSDictionary* faceLandmarkPoints;
@property (atomic, retain, readwrite) NSDictionary* expressionFeatures;
@property (atomic, retain, readwrite) NSDictionary* additionalInfo;
@property (atomic, assign, readonly) NSNumber* hasLeftEyeBounds;
@property (atomic, assign, readonly) NSNumber* hasRightEyeBounds;
@property (atomic, assign, readonly) NSNumber* hasMouthBounds;

 - (void) dealloc;
 - (BOOL) hasLeftEyeBounds;
 - (BOOL) hasRightEyeBounds;
 - (BOOL) hasMouthBounds;
 - (id) expressionFeatures;
 - (void) setExpressionFeatures:(id)a;
 - (double) faceAngle;
 - (void) setFaceAngle:(double)a;
 - ({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}}) face;
 - (void) setFace:({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}})a;
 - (id) faceLandmarkPoints;
 - (void) setFaceLandmarkPoints:(id)a;
 - (double) faceSize;
 - (void) setFaceSize:(double)a;
 - (int) faceType;
 - (void) setFaceType:(int)a;
 - (id) faceprint;
 - (void) setFaceprint:(id)a;
 - ({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}}) leftEye;
 - (void) setLeftEye:({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}})a;
 - ({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}}) mouth;
 - (void) setMouth:({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}})a;
 - ({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}}) rightEye;
 - (void) setRightEye:({?={CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}})a;
 - (unsigned long long) trackDuration;
 - (void) setTrackDuration:(unsigned long long)a;
 - (long long) trackID;
 - (void) setTrackID:(long long)a;
 - (id) additionalInfo;
 - (void) setAdditionalInfo:(id)a;


@end
