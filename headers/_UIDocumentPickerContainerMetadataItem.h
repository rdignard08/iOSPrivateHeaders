
@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {

    long long _cachedType;
    NSString* _cachedTitle;
    NSString* _cachedSubtitle;
    NSString* _cachedSubtitle2;
    NSArray* _cachedTags;
    NSURL* _cachedURL;
}

 - (id) title;
 - (void) dealloc;
 - (id) initWithItem:(id)a ;
 - (void) _valuesChanged;
 - (id) sortDate;
 - (void) _modelChanged;
 - (id) subtitle;
 - (id) subtitle2;
 - (void) cacheValues;
 - (void) _removeCachedValues;
 - (long long) type;
 - (id) url;
 - (id) tags;


@end
