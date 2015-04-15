
@interface UIDropShadowView : UIView {

    d _cornerRadius;
    @"UIView" _contentView;
    @"UIView" _backgroundImage;
    @"NSDictionary" _preservedLayerValues;
}

 - (void) dealloc;
 - (void) setCornerRadius:(d)a;
 - (void) willBeginRotationWithOriginalBounds:({CGRect={CGPoint=dd}{CGSize=dd}})anewBounds:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) didFinishRotation;
 - (void) updateShadowPath;
 - (id) init;
 - (id) contentView;
 - (void) setContentView:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) cornerRadius;


@end
