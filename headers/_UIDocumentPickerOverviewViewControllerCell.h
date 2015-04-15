
@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell {

    @"UIImageView" _iconView;
    @"UIImageView" _newlyAddedView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) initWithStyle:(q)areuseIdentifier:(id)b;
 - (void) prepareForReuse;
 - (id) _dotImage;
 - (id) iconView;
 - (void) setIconView:(id)a;
 - (void) setShowNewlyAdded:(BOOL)a;
 - (void) setNewlyAddedView:(id)a;
 - (id) newlyAddedView;
 - (BOOL) showNewlyAdded;


@end
