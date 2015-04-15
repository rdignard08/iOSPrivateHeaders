
@interface CIFaceFeature : CIFeature {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} bounds;
    BOOL hasLeftEyePosition;
    {CGPoint="x"d"y"d} leftEyePosition;
    BOOL hasRightEyePosition;
    {CGPoint="x"d"y"d} rightEyePosition;
    BOOL hasMouthPosition;
    {CGPoint="x"d"y"d} mouthPosition;
    BOOL hasTrackingID;
    int trackingID;
    BOOL hasTrackingFrameCount;
    int trackingFrameCount;
    BOOL hasFaceAngle;
    float faceAngle;
    BOOL hasSmile;
    BOOL leftEyeClosed;
    BOOL rightEyeClosed;
}
 + (id) faceFeatureWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) faceFeaturesWithBoundsArray:(r^{CGRect={CGPoint=dd}{CGSize=dd}})acount:(unsigned long long)b;

 - (id) .cxx_construct;
 - (id) type;
 - (BOOL) hasLeftEyePosition;
 - ({CGPoint=dd}) leftEyePosition;
 - (BOOL) hasRightEyePosition;
 - ({CGPoint=dd}) rightEyePosition;
 - (BOOL) hasMouthPosition;
 - ({CGPoint=dd}) mouthPosition;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a hasLeftEyePosition:(BOOL)b leftEyePosition:({CGPoint=dd})c hasRightEyePosition:(BOOL)d rightEyePosition:({CGPoint=dd})e hasMouthPosition:(BOOL)f mouthPosition:({CGPoint=dd})g hasFaceAngle:(BOOL)h faceAngle:(float)i hasTrackingID:(BOOL)j trackingID:(int)k hasTrackingFrameCount:(BOOL)l trackingFrameCount:(int)m hasSmile:(BOOL)n leftEyeClosed:(BOOL)o rightEyeClosed:(BOOL)p ;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setHasLeftEyePosition:(BOOL)a ;
 - (void) setLeftEyePosition:({CGPoint=dd})a ;
 - (void) setHasRightEyePosition:(BOOL)a ;
 - (void) setRightEyePosition:({CGPoint=dd})a ;
 - (void) setHasMouthPosition:(BOOL)a ;
 - (void) setMouthPosition:({CGPoint=dd})a ;
 - (BOOL) hasTrackingID;
 - (void) setHasTrackingID:(BOOL)a ;
 - (int) trackingID;
 - (void) setTrackingID:(int)a ;
 - (BOOL) hasTrackingFrameCount;
 - (void) setHasTrackingFrameCount:(BOOL)a ;
 - (int) trackingFrameCount;
 - (void) setTrackingFrameCount:(int)a ;
 - (BOOL) hasFaceAngle;
 - (void) setHasFaceAngle:(BOOL)a ;
 - (BOOL) hasSmile;
 - (void) setHasSmile:(BOOL)a ;
 - (BOOL) leftEyeClosed;
 - (void) setLeftEyeClosed:(BOOL)a ;
 - (BOOL) rightEyeClosed;
 - (void) setRightEyeClosed:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (float) faceAngle;
 - (void) setFaceAngle:(float)a ;


@end
