
@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell {

    BOOL _enabled;
    _UIDocumentPickerContainerItem* _item;
}

 - (void) setItem:(id)a;
 - (id) item;
 - (void) dealloc;
 - (void) traitCollectionDidChange:(id)a;
 - (void) prepareForReuse;
 - (BOOL) enabled;
 - (void) _showPickableDiagnostic;
 - (id) viewControllerForDisplay;
 - (void) reloadItem:(BOOL)a;
 - (void) updateContents;
 - (void) updateThumbnail;
 - (void) setEnabled:(BOOL)a;


@end
