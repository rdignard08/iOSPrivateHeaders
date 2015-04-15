
@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {

    q _cachedType;
    @"NSString" _cachedTitle;
    @"NSString" _cachedSubtitle;
    @"NSString" _cachedSubtitle2;
    @"NSArray" _cachedTags;
    @"NSURL" _cachedURL;
}

 - (id) title;
 - (void) dealloc;
 - (id) initWithItem:(id)a;
 - (void) _valuesChanged;
 - (id) sortDate;
 - (void) _modelChanged;
 - (id) subtitle;
 - (id) subtitle2;
 - (void) cacheValues;
 - (void) _removeCachedValues;
 - (q) type;
 - (id) url;
 - (id) tags;


@end
