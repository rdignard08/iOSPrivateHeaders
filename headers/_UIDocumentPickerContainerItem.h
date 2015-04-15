
@protocol _UIDocumentPickerDirectoryObserverItem;
@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {

    _UIDocumentPickerContainerModel* _weak_parentModel;
    _UIDocumentPickerURLContainerModel* _model;
    _UIDocumentPickerURLContainerModel* _weak_model;
    long long _modelDisplayCount;
    id _observer;
    id _resourceIdentifier;
    BOOL _pickable;
    id _item;
    long long _type;
    NSMapTable* _thumbnailsBySize;
    NSString* _pickabilityReason;
}
@property (nonatomic, retain, readwrite) NSNumber* item;
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, retain, readonly) NSString* title;
@property (nonatomic, retain, readonly) NSString* subtitle;
@property (nonatomic, retain, readonly) NSString* subtitle2;
@property (nonatomic, retain, readonly) NSURL* url;
@property (nonatomic, assign, readwrite) NSNumber* pickable;
@property (nonatomic, assign, readonly) NSDate* sortDate;
@property (nonatomic, retain, readonly) _UIDocumentPickerContainerModel* model;
@property (nonatomic, retain, readwrite) NSMapTable* thumbnailsBySize;
@property (nonatomic, weak, readwrite) _UIDocumentPickerContainerModel* parentModel;
@property (nonatomic, copy, readwrite) NSString* pickabilityReason;
 + (id) _lruThumbnailArray;
 + (void) markThumbnailAsRecentlyUsed:(id)a;
 + (void) clearLRUThumbnailCache;

 - (id) title;
 - (void) setItem:(id)a ;
 - (id) modificationDate;
 - (id) item;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithItem:(id)a ;
 - (void) setPickable:(BOOL)a ;
 - (void) _valuesChanged;
 - (void) setParentModel:(id)a ;
 - (void) setPickabilityReason:(id)a ;
 - (BOOL) pickable;
 - (id) _defaultThumbnailWithSize:({CGSize=dd})a scale:(double)b ;
 - (id) parentModel;
 - (id) _createThumbnailWithSize:({CGSize=dd})a scale:(double)b ;
 - (id) _blockingThumbnailWithSize:({CGSize=dd})a scale:(double)b ;
 - (id) _resourceIdentifier;
 - (id) _blipWithTags:(id)a height:(double)b scale:(double)c ;
 - (id) sortDate;
 - (void) _ensureModelPresent;
 - (void) _modelChanged;
 - (id) thumbnailWithSize:({CGSize=dd})a scale:(double)b ;
 - (id) subtitle;
 - (id) subtitle2;
 - (id) model;
 - (id) tagBlipsWithHeight:(double)a scale:(double)b ;
 - (id) sortTag;
 - (void) incrementModelDisplayCount;
 - (void) decrementModelDisplayCount;
 - (id) _formattedSubtitleForNumberOfItems:(unsigned long long)a ;
 - (id) thumbnailsBySize;
 - (void) setThumbnailsBySize:(id)a ;
 - (id) pickabilityReason;
 - (long long) type;
 - (id) url;
 - (id) tags;


@end
