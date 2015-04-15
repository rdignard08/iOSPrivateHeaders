
@interface UITextFieldBorderView : UIView {

    UIImage _image;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) useBlockyMagnificationInClassic;
 - (void) _updateViewPropertiesForBackgroundImage;
 - (void) setImage:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
