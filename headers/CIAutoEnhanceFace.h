
@interface CIAutoEnhanceFace : NSObject {

    int size;
    int centerX;
    int centerY;
    double I;
    double Q;
}
@property (atomic, assign, readonly) NSNumber* size;
@property (atomic, assign, readonly) NSNumber* centerX;
@property (atomic, assign, readonly) NSNumber* centerY;
@property (atomic, assign, readonly) NSNumber* I;
@property (atomic, assign, readonly) NSNumber* Q;

 - (int) size;
 - (id) description;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) faceRect;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})aandImage:(id)busingContext:(id)c;
 - (int) centerX;
 - (int) centerY;
 - (double) I;
 - (double) Q;


@end
