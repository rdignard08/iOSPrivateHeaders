
@interface UIInputSwitcherTableView : UITableView {

    UIKeyboardMenuView* _menu;
}

 - (void) selectRowAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(long long)c;
 - (void) deselectRowAtIndexPath:(id)aanimated:(BOOL)b;
 - (id) menu;
 - (void) setMenu:(id)a;


@end
