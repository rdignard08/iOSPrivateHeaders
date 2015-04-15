
@interface CIBurstFaceConfigEntry : NSObject {

    int faceId;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} faceRect;
    int framesSinceLast;
}
@property (atomic, assign, readwrite) NSNumber* faceId;
@property (atomic, assign, readwrite) NSNumber* faceRect;
@property (atomic, assign, readwrite) NSNumber* framesSinceLast;

 - (int) faceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) faceRect;
 - (id) initWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a withFaceId:(int)b ;
 - (void) setFaceId:(int)a ;
 - (void) setFaceRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (int) framesSinceLast;
 - (void) setFramesSinceLast:(int)a ;


@end
