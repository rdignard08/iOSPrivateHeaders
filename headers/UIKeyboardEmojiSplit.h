
@protocol UITableViewDelegate, UITableViewDataSource;
@interface UIKeyboardEmojiSplit : UIKBKeyView <UITableViewDelegate, UITableViewDataSource> {

    UITableView* _picker;
}

 - (void) dealloc;
 - (void) tableView:(id)a willDisplayCell:(id)b forRowAtIndexPath:(id)c ;
 - (double) tableView:(id)a heightForRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (id) defaultIndexPath;
 - (BOOL) shouldCache;
 - (id) picker;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
