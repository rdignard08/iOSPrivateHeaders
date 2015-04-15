
@interface _UIDocumentPickerDocumentTableContainerCell : _UIDocumentPickerDocumentTableCell {

    UIImageView* _containerIconView;
}

 - (void) dealloc;
 - (id) initWithStyle:(long long)a reuseIdentifier:(id)b ;
 - (void) prepareForReuse;
 - (void) reloadItem:(BOOL)a ;
 - (id) containerIconView;
 - (void) containersChangedWithSnapshot:(id)a differences:(id)b ;
 - (void) setContainerIconView:(id)a ;


@end
