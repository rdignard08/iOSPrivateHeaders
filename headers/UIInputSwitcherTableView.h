
@interface UIInputSwitcherTableView : UITableView {

    UIKeyboardMenuView* _menu;
}

 - (void) selectRowAtIndexPath:(id)a animated:(BOOL)b scrollPosition:(long long)c ;
 - (void) deselectRowAtIndexPath:(id)a animated:(BOOL)b ;
 - (id) menu;
 - (void) setMenu:(id)a ;


@end
