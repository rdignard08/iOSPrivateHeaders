
@interface NSLayoutManagerTextBlockHelper : NSObject {

    NSTextBlock* _block;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _layoutRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _boundsRect;
}

 - (void) dealloc;
 - (id) initWithTextBlock:(id)a layoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})b boundsRect:({CGRect={CGPoint=dd}{CGSize=dd}})c ;


@end
