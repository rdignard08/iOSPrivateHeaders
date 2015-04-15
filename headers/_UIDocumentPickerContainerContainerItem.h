
@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {

    @"NSString" _cachedSubtitle;
}

 - (id) title;
 - (void) dealloc;
 - (id) _defaultThumbnailWithSize:({CGSize=dd})ascale:(double)b;
 - (id) _blockingThumbnailWithSize:({CGSize=dd})ascale:(double)b;
 - (id) sortDate;
 - (void) _modelChanged;
 - (id) subtitle;
 - (long long) type;
 - (id) url;


@end
