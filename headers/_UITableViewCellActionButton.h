
@interface _UITableViewCellActionButton : UIButton {

    @"UITableViewRowAction" _action;
    Q _style;
    @"UIVisualEffect" _backgroundEffect;
}
 + (id) actionButtonWithStyle:(Q)a;

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) action;
 - (id) backgroundEffect;
 - (void) setBackgroundEffect:(id)a;
 - (void) setAction:(id)a;
 - (Q) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setStyle:(Q)a;


@end
