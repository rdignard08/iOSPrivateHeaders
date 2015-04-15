
@protocol _NSItemProviderLoading;
@interface _NSItemProviderCopyingLoadOperator : NSObject <_NSItemProviderLoading> {

    NSItemProvider* _itemProvider;
    NSDictionary* _loadedItems;
}
@property (nonatomic, assign, readwrite) NSItemProvider* itemProvider;
@property (nonatomic, retain, readwrite) NSDictionary* loadedItems;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) loadItemForTypeIdentifier:(id)a completionHandler:(@?)b expectedValueClass:(Class)c options:(id)d ;
 - (void) loadPreviewImageWithCompletionHandler:(@?)a expectedValueClass:(Class)b options:(id)c ;
 - (id) initWithItemProvider:(id)a ;
 - (void) setItemProvider:(id)a ;
 - (void) setLoadedItems:(id)a ;
 - (id) itemProvider;
 - (id) _loadItemsForTypeIdentifiers:(id)a itemProvider:(id)b ;
 - (id) loadedItems;
 - (id) _sandboxedResourceForItemIfNeeded:(id)a error:(^@)b ;


@end
