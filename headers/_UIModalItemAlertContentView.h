
@interface _UIModalItemAlertContentView : _UIModalItemContentView {

    _UIModalItemTextFiledBGView* _textFieldBGView;
    BOOL _alertViewIsSetup;
    UITableView* _otherTableView;
    UIView* _2ButtonsSeparators;
    UIView* _tableViewTopSeparator;
    UIScrollView* _labelsScrollView;
    BOOL _itemWantsVerticalButtons;
    BOOL _itemNeedsTwoTableViews;
}

 - (void) dealloc;
 - (void) tableView:(id)a willDisplayCell:(id)b forRowAtIndexPath:(id)c ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (void) _reloadButtons;
 - (void) setEnableFirstOtherButton:(BOOL)a ;
 - (void) _prepareViewIfNeeded;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
