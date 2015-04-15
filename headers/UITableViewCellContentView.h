
@interface UITableViewCellContentView : UIView {

    CALayer* _mask;
}
 + (id) classFallbacksForKeyedArchiver;

 - (void) dealloc;
 - (void) updateConstraintsIfNeeded;
 - (id) _cell;
 - (void) _tableViewCellContentViewCommonSetup;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) mask;
 - (void) setMask:(id)a;


@end
