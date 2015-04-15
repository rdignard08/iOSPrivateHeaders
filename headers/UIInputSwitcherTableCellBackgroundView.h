
@interface UIInputSwitcherTableCellBackgroundView : UIView {

    UITableView _tableView;
    UITableViewCell _cell;
    UIKeyboardMenuView _menu;
}

 - (void) setTableView:(id)a;
 - (id) tableView;
 - (id) cell;
 - (void) setCell:(id)a;
 - (id) menu;
 - (id) initWithTableView:(id)acell:(id)b;
 - (void) setMenu:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
