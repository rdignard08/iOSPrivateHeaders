
@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel {

    NSString* _queryString;
}

 - (void) dealloc;
 - (id) scopes;
 - (void) startMonitoringChanges;
 - (id) displayTitle;
 - (void) setQueryString:(id)a;
 - (void) _updateObserverForQuery;
 - (id) queryString;


@end
