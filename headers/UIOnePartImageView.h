
@interface UIOnePartImageView : UIView {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _fromRect;
    UIImage _image;
}

 - (void) dealloc;
 - (void) setFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setImage:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
