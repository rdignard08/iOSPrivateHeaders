
@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel {

    NSArray* _modelObjects;
    NSURL* _url;
    NSString* _displayTitle;
    _UIDocumentPickerDirectoryObserver* _observer;
}
 + (void) _tagColorsDidChange;
 + (id) tagColorsByTag;
 + (id) _tagBlipColors;
 + (id) allTags;

 - (void) setObserver:(id)a ;
 - (id) description;
 - (void) dealloc;
 - (id) initWithURL:(id)a ;
 - (id) scopes;
 - (BOOL) afterInitialUpdate;
 - (void) updateSortDescriptors;
 - (id) modelObjects;
 - (void) startMonitoringChanges;
 - (void) stopMonitoringChanges;
 - (id) displayTitle;
 - (void) refreshItem:(id)a thumbnailOnly:(BOOL)b ;
 - (void) setUrl:(id)a ;
 - (void) setDisplayTitle:(id)a ;
 - (id) observer;
 - (id) _containerListDidChange;
 - (void) modelChangedWithSnapshot:(id)a differences:(id)b ;
 - (void) callUpdateHandlerWithNewItems:(id)a diff:(id)b ;
 - (BOOL) shouldShowContainerForType:(id)a ;
 - (BOOL) shouldAllowPickingType:(id)a ;
 - (void) setModelObjects:(id)a ;
 - (id) url;


@end
