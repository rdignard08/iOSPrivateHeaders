
@interface UIKBSplitTraits : NSObject {

    i _corners;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _leftFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rightFrame;
}
@property (nonatomic, assign, readonly) NSNumber* leftFrame;
@property (nonatomic, assign, readonly) NSNumber* rightFrame;
@property (nonatomic, assign, readonly) NSNumber* corners;
 + (id) traitsWithLeftFrame:({CGRect={CGPoint=dd}{CGSize=dd}})arightFrame:({CGRect={CGPoint=dd}{CGSize=dd}})bcorners:(i)c;

 - (id) initWithLeftFrame:({CGRect={CGPoint=dd}{CGSize=dd}})arightFrame:({CGRect={CGPoint=dd}{CGSize=dd}})bcorners:(Q)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) leftFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightFrame;
 - (i) corners;


@end
