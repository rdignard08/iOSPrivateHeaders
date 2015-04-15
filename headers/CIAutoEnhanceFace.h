
@interface CIAutoEnhanceFace : NSObject {

    i size;
    i centerX;
    i centerY;
    d I;
    d Q;
}
@property (atomic, assign, readonly) NSNumber* size;
@property (atomic, assign, readonly) NSNumber* centerX;
@property (atomic, assign, readonly) NSNumber* centerY;
@property (atomic, assign, readonly) NSNumber* I;
@property (atomic, assign, readonly) NSNumber* Q;

 - (i) size;
 - (id) description;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) faceRect;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})aandImage:(id)busingContext:(id)c;
 - (i) centerX;
 - (i) centerY;
 - (d) I;
 - (d) Q;


@end
