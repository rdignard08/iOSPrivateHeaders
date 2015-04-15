
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {

    NSMutableArray m_menuOptions;
    {CGSize="width"d"height"d} m_preferredSize;
    @? _finishSplitTransitionBlock;
}
 + (id) sharedInstance;
 + (id) activeInstance;

 - (void) dealloc;
 - (void) setSplitAndUndocked:(BOOL)a;
 - (void) didFinishSplitTransition;
 - ({CGSize=dd}) preferredSize;
 - (long long) defaultSelectedIndex;
 - (void) didSelectItemAtIndex:(int)a;
 - (id) titleForItemAtIndex:(int)a;
 - (void) setFinishSplitTransitionBlock:(@?)a;
 - (@?) finishSplitTransitionBlock;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (long long) numberOfItems;


@end
