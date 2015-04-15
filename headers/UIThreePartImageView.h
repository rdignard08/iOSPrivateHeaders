
@interface UIThreePartImageView : UIView {

    {?="left"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}"middle"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}"right"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}} _slices;
    UIImage* _image;
}

 - (void) dealloc;
 - (void) setSlices:({?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}})a ;
 - (void) setImage:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
