
@interface UIKBSplitTraits : NSObject {

    int _corners;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _leftFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rightFrame;
}
@property (nonatomic, assign, readonly) NSNumber* leftFrame;
@property (nonatomic, assign, readonly) NSNumber* rightFrame;
@property (nonatomic, assign, readonly) NSNumber* corners;
 + (id) traitsWithLeftFrame:({CGRect={CGPoint=dd}{CGSize=dd}})arightFrame:({CGRect={CGPoint=dd}{CGSize=dd}})bcorners:(int)c;

 - (id) initWithLeftFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a rightFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b corners:(unsigned long long)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) leftFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightFrame;
 - (int) corners;


@end
