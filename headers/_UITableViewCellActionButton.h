
@interface _UITableViewCellActionButton : UIButton {

    UITableViewRowAction* _action;
    unsigned long long _style;
    UIVisualEffect* _backgroundEffect;
}
 + (id) actionButtonWithStyle:(unsigned long long)a;

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) action;
 - (id) backgroundEffect;
 - (void) setBackgroundEffect:(id)a;
 - (void) setAction:(id)a;
 - (unsigned long long) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setStyle:(unsigned long long)a;


@end
