
@interface UIViewControllerWrapperView : UIView {

    BOOL _tightWrappingDisabled;
}
 + (id) existingWrapperViewForView:(id)a;
 + (id) wrapperViewForView:(id)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) wrapperViewForView:(id)awrapperFrame:({CGRect={CGPoint=dd}{CGSize=dd}})bviewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})c;

 - (void) setTightWrappingDisabled:(BOOL)a;
 - (BOOL) tightWrappingDisabled;
 - (void) unwrapView;
 - (void) unwrapView:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
