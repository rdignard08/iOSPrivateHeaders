
@interface CIBurstFaceConfigEntry : NSObject {

    i faceId;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} faceRect;
    i framesSinceLast;
}
@property (atomic, assign, readwrite) NSNumber* faceId;
@property (atomic, assign, readwrite) NSNumber* faceRect;
@property (atomic, assign, readwrite) NSNumber* framesSinceLast;

 - (i) faceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) faceRect;
 - (id) initWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithFaceId:(i)b;
 - (void) setFaceId:(i)a;
 - (void) setFaceRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (i) framesSinceLast;
 - (void) setFramesSinceLast:(i)a;


@end
