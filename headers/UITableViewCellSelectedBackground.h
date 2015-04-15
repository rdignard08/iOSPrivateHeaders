
@interface UITableViewCellSelectedBackground : UIView {

    q _selectionStyle;
    @"UIColor" _multiselectBackgroundColor;
    @"UIColor" _selectionTintColor;
    BOOL _multiselect;
}

 - (void) dealloc;
 - (void) setSelectionTintColor:(id)a;
 - (void) setMultiselect:(BOOL)a;
 - (BOOL) isMultiselect;
 - (void) setSelectionStyle:(q)a;
 - (q) selectionStyle;
 - (id) multiselectBackgroundColor;
 - (void) setMultiselectBackgroundColor:(id)a;
 - (id) selectionTintColor;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
