
@interface _UITableViewHeaderFooterViewBackground : UIView {

    @"UIView" _opaqueBackgroundView;
    @"UIView" _transparentBackgroundView;
}

 - (void) dealloc;
 - (void) setBackgroundImage:(id)a;
 - (id) _opaqueBackgroundView;
 - (id) _transparentBackgroundView;
 - (void) _updateBackingView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setOpaque:(BOOL)a;


@end
