
@interface CIFeature : NSObject {

}
@property (atomic, retain, readonly) NSString* type;
@property (atomic, assign, readonly) NSNumber* bounds;

 - (id) init;
 - (id) type;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;


@end
