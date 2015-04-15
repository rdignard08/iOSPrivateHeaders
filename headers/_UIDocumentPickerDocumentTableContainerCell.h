
@interface _UIDocumentPickerDocumentTableContainerCell : _UIDocumentPickerDocumentTableCell {

    UIImageView _containerIconView;
}

 - (void) dealloc;
 - (id) initWithStyle:(long long)areuseIdentifier:(id)b;
 - (void) prepareForReuse;
 - (void) reloadItem:(BOOL)a;
 - (id) containerIconView;
 - (void) containersChangedWithSnapshot:(id)adifferences:(id)b;
 - (void) setContainerIconView:(id)a;


@end
