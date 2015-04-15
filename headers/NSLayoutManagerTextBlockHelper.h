
@interface NSLayoutManagerTextBlockHelper : NSObject {

    @"NSTextBlock" _block;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _layoutRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _boundsRect;
}

 - (void) dealloc;
 - (id) initWithTextBlock:(id)alayoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})bboundsRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;


@end
