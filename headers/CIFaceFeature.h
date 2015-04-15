
@interface CIFaceFeature : CIFeature {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} bounds;
    BOOL hasLeftEyePosition;
    {CGPoint="x"d"y"d} leftEyePosition;
    BOOL hasRightEyePosition;
    {CGPoint="x"d"y"d} rightEyePosition;
    BOOL hasMouthPosition;
    {CGPoint="x"d"y"d} mouthPosition;
    BOOL hasTrackingID;
    i trackingID;
    BOOL hasTrackingFrameCount;
    i trackingFrameCount;
    BOOL hasFaceAngle;
    f faceAngle;
    BOOL hasSmile;
    BOOL leftEyeClosed;
    BOOL rightEyeClosed;
}
 + (id) faceFeatureWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) faceFeaturesWithBoundsArray:(r^{CGRect={CGPoint=dd}{CGSize=dd}})acount:(Q)b;

 - (id) .cxx_construct;
 - (id) type;
 - (BOOL) hasLeftEyePosition;
 - ({CGPoint=dd}) leftEyePosition;
 - (BOOL) hasRightEyePosition;
 - ({CGPoint=dd}) rightEyePosition;
 - (BOOL) hasMouthPosition;
 - ({CGPoint=dd}) mouthPosition;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})ahasLeftEyePosition:(BOOL)bleftEyePosition:({CGPoint=dd})chasRightEyePosition:(BOOL)drightEyePosition:({CGPoint=dd})ehasMouthPosition:(BOOL)fmouthPosition:({CGPoint=dd})ghasFaceAngle:(BOOL)hfaceAngle:(f)ihasTrackingID:(BOOL)jtrackingID:(i)khasTrackingFrameCount:(BOOL)ltrackingFrameCount:(i)mhasSmile:(BOOL)nleftEyeClosed:(BOOL)orightEyeClosed:(BOOL)p;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setHasLeftEyePosition:(BOOL)a;
 - (void) setLeftEyePosition:({CGPoint=dd})a;
 - (void) setHasRightEyePosition:(BOOL)a;
 - (void) setRightEyePosition:({CGPoint=dd})a;
 - (void) setHasMouthPosition:(BOOL)a;
 - (void) setMouthPosition:({CGPoint=dd})a;
 - (BOOL) hasTrackingID;
 - (void) setHasTrackingID:(BOOL)a;
 - (i) trackingID;
 - (void) setTrackingID:(i)a;
 - (BOOL) hasTrackingFrameCount;
 - (void) setHasTrackingFrameCount:(BOOL)a;
 - (i) trackingFrameCount;
 - (void) setTrackingFrameCount:(i)a;
 - (BOOL) hasFaceAngle;
 - (void) setHasFaceAngle:(BOOL)a;
 - (BOOL) hasSmile;
 - (void) setHasSmile:(BOOL)a;
 - (BOOL) leftEyeClosed;
 - (void) setLeftEyeClosed:(BOOL)a;
 - (BOOL) rightEyeClosed;
 - (void) setRightEyeClosed:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (f) faceAngle;
 - (void) setFaceAngle:(f)a;


@end