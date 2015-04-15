
@interface _UIModalItemAlertContentView : _UIModalItemContentView {

    @"_UIModalItemTextFiledBGView" _textFieldBGView;
    BOOL _alertViewIsSetup;
    @"UITableView" _otherTableView;
    @"UIView" _2ButtonsSeparators;
    @"UIView" _tableViewTopSeparator;
    @"UIScrollView" _labelsScrollView;
    BOOL _itemWantsVerticalButtons;
    BOOL _itemNeedsTwoTableViews;
}

 - (void) dealloc;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) _reloadButtons;
 - (void) setEnableFirstOtherButton:(BOOL)a;
 - (void) _prepareViewIfNeeded;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
