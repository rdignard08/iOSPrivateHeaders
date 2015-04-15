
@protocol _UIDocumentPickerDirectoryObserverItem;
@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {

    @"_UIDocumentPickerContainerModel" _weak_parentModel;
    @"_UIDocumentPickerURLContainerModel" _model;
    @"_UIDocumentPickerURLContainerModel" _weak_model;
    q _modelDisplayCount;
    id _observer;
    id _resourceIdentifier;
    BOOL _pickable;
    id _item;
    q _type;
    @"NSMapTable" _thumbnailsBySize;
    @"NSString" _pickabilityReason;
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
 - (void) setItem:(id)a;
 - (id) modificationDate;
 - (id) item;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithItem:(id)a;
 - (void) setPickable:(BOOL)a;
 - (void) _valuesChanged;
 - (void) setParentModel:(id)a;
 - (void) setPickabilityReason:(id)a;
 - (BOOL) pickable;
 - (id) _defaultThumbnailWithSize:({CGSize=dd})ascale:(d)b;
 - (id) parentModel;
 - (id) _createThumbnailWithSize:({CGSize=dd})ascale:(d)b;
 - (id) _blockingThumbnailWithSize:({CGSize=dd})ascale:(d)b;
 - (id) _resourceIdentifier;
 - (id) _blipWithTags:(id)aheight:(d)bscale:(d)c;
 - (id) sortDate;
 - (void) _ensureModelPresent;
 - (void) _modelChanged;
 - (id) thumbnailWithSize:({CGSize=dd})ascale:(d)b;
 - (id) subtitle;
 - (id) subtitle2;
 - (id) model;
 - (id) tagBlipsWithHeight:(d)ascale:(d)b;
 - (id) sortTag;
 - (void) incrementModelDisplayCount;
 - (void) decrementModelDisplayCount;
 - (id) _formattedSubtitleForNumberOfItems:(Q)a;
 - (id) thumbnailsBySize;
 - (void) setThumbnailsBySize:(id)a;
 - (id) pickabilityReason;
 - (q) type;
 - (id) url;
 - (id) tags;


@end
