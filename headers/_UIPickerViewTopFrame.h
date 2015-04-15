
@interface _UIPickerViewTopFrame : UIView {

    UIImage* _leftImage;
    UIImage* _middleImage;
    UIImage* _rightImage;
    double _inset;
    double _shift;
}

 - (void) dealloc;
 - (void) setLeftImage:(id)a middleImage:(id)b rightImage:(id)c ;
 - (void) setInset:(double)a ;
 - (void) setShift:(double)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
