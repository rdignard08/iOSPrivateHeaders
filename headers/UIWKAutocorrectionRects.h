
@interface UIWKAutocorrectionRects : NSObject {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _firstRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _lastRect;
}
@property (nonatomic, assign, readwrite) NSNumber* firstRect;
@property (nonatomic, assign, readwrite) NSNumber* lastRect;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) firstRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lastRect;
 - (void) setFirstRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setLastRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
