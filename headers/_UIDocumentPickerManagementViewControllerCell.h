
@interface _UIDocumentPickerManagementViewControllerCell : UITableViewCell {

    @"UIImageView" _newlyAddedView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) initWithStyle:(long long)areuseIdentifier:(id)b;
 - (void) prepareForReuse;
 - (id) _dotImage;
 - (void) setShowNewlyAdded:(BOOL)a;
 - (void) setNewlyAddedView:(id)a;
 - (id) newlyAddedView;
 - (BOOL) showNewlyAdded;


@end
