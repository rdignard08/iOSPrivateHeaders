
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UIKeyboardEmojiSplit : UIKBKeyView <UITableViewDelegate, UITableViewDataSource> {

    @"UITableView" _picker;
}

 - (void) dealloc;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (d) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (id) defaultIndexPath;
 - (BOOL) shouldCache;
 - (id) picker;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
