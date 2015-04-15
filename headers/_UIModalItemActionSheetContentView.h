
@interface _UIModalItemActionSheetContentView : _UIModalItemContentView {

    @"UITableView" _otherButtonTableView;
    @"UITableView" _cancelTableView;
    @"_UIBackdropView" _effectView;
}

 - (void) dealloc;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) _prepareViewIfNeeded;
 - (void) _createOtherButtonTableView;
 - (d) numberOfOtherButtonTitles;
 - (void) _moveAllSubviewsToEffectContentView;
 - (void) layout;


@end
