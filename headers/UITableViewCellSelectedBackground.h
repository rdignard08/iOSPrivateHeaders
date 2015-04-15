
@interface UITableViewCellSelectedBackground : UIView {

    long long _selectionStyle;
    UIColor _multiselectBackgroundColor;
    UIColor _selectionTintColor;
    BOOL _multiselect;
}

 - (void) dealloc;
 - (void) setSelectionTintColor:(id)a;
 - (void) setMultiselect:(BOOL)a;
 - (BOOL) isMultiselect;
 - (void) setSelectionStyle:(long long)a;
 - (long long) selectionStyle;
 - (id) multiselectBackgroundColor;
 - (void) setMultiselectBackgroundColor:(id)a;
 - (id) selectionTintColor;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
