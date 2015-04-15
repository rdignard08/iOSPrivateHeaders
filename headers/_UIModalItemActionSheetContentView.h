
@interface _UIModalItemActionSheetContentView : _UIModalItemContentView {

    UITableView* _otherButtonTableView;
    UITableView* _cancelTableView;
    _UIBackdropView* _effectView;
}

 - (void) dealloc;
 - (void) tableView:(id)a willDisplayCell:(id)b forRowAtIndexPath:(id)c ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (void) _prepareViewIfNeeded;
 - (void) _createOtherButtonTableView;
 - (double) numberOfOtherButtonTitles;
 - (void) _moveAllSubviewsToEffectContentView;
 - (void) layout;


@end
