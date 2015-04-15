
@interface _UIDocumentPickerContainerModel : NSObject {

    int _sortOrder;
    @"NSArray" _pickableTypes;
    unsigned long long _pickerMode;
    @"NSMutableArray" _updateHandlers;
    @"NSOperationQueue" _thumbnailQueue;
}
@property (nonatomic, assign, readonly) NSArray* modelObjects;
@property (nonatomic, copy, readwrite) NSArray* pickableTypes;
@property (nonatomic, assign, readwrite) NSNumber* pickerMode;
@property (nonatomic, assign, readwrite) NSNumber* sortOrder;
@property (nonatomic, assign, readonly) NSNumber* afterInitialUpdate;
@property (nonatomic, retain, readwrite) NSMutableArray* updateHandlers;
@property (nonatomic, retain, readwrite) NSOperationQueue* thumbnailQueue;

 - (void) dealloc;
 - (BOOL) afterInitialUpdate;
 - (void) updateSortDescriptors;
 - (id) addUpdateHandler:(@?)aweakSelf:(id)b;
 - (void) removeUpdateHandler:(id)a;
 - (id) modelObjects;
 - (void) startMonitoringChanges;
 - (void) stopMonitoringChanges;
 - (id) displayTitle;
 - (void) refreshItem:(id)athumbnailOnly:(BOOL)b;
 - (void) setSortOrder:(int)a;
 - (id) pickableTypes;
 - (void) setPickableTypes:(id)a;
 - (unsigned long long) pickerMode;
 - (void) setPickerMode:(unsigned long long)a;
 - (int) sortOrder;
 - (id) updateHandlers;
 - (void) setUpdateHandlers:(id)a;
 - (id) thumbnailQueue;
 - (void) setThumbnailQueue:(id)a;
 - (id) init;


@end
