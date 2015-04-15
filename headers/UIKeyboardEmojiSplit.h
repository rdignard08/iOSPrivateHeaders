
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UIKeyboardEmojiSplit : UIKBKeyView <UITableViewDelegate, UITableViewDataSource> {

    UITableView* _picker;
}

 - (void) dealloc;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (double) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (id) defaultIndexPath;
 - (BOOL) shouldCache;
 - (id) picker;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
