
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {

    @"NSMutableArray" m_menuOptions;
    {CGSize="width"d"height"d} m_preferredSize;
    @? _finishSplitTransitionBlock;
}
 + (id) sharedInstance;
 + (id) activeInstance;

 - (void) dealloc;
 - (void) setSplitAndUndocked:(BOOL)a;
 - (void) didFinishSplitTransition;
 - ({CGSize=dd}) preferredSize;
 - (q) defaultSelectedIndex;
 - (void) didSelectItemAtIndex:(i)a;
 - (id) titleForItemAtIndex:(i)a;
 - (void) setFinishSplitTransitionBlock:(@?)a;
 - (@?) finishSplitTransitionBlock;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (q) numberOfItems;


@end
