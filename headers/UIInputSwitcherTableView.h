
@interface UIInputSwitcherTableView : UITableView {

    @"UIKeyboardMenuView" _menu;
}

 - (void) selectRowAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(q)c;
 - (void) deselectRowAtIndexPath:(id)aanimated:(BOOL)b;
 - (id) menu;
 - (void) setMenu:(id)a;


@end
