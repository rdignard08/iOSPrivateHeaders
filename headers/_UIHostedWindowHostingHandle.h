
@protocol NSSecureCoding;
@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding> {

    unsigned int _contextID;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _rootLayerTransform;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rootLayerFrame;
}
@property (nonatomic, assign, readonly) NSNumber* contextID;
@property (nonatomic, assign, readonly) NSNumber* rootLayerTransform;
@property (nonatomic, assign, readonly) NSNumber* rootLayerFrame;
 + (BOOL) supportsSecureCoding;
 + (id) hostedWindowHostingHandleWithContextID:(unsigned int)arootLayerTransform:({CGAffineTransform=dddddd})brootLayerFrame:({CGRect={CGPoint=dd}{CGSize=dd}})c;

 - ({CGAffineTransform=dddddd}) rootLayerTransform;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rootLayerFrame;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned int) contextID;


@end
