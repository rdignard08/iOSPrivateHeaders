
@protocol _NSItemProviderLoading;
@interface _NSItemProviderCopyingLoadOperator : NSObject <_NSItemProviderLoading> {

    NSItemProvider* _itemProvider;
    NSDictionary* _loadedItems;
}
@property (nonatomic, assign, readwrite) NSItemProvider* itemProvider;
@property (nonatomic, retain, readwrite) NSDictionary* loadedItems;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) loadItemForTypeIdentifier:(id)acompletionHandler:(@?)bexpectedValueClass:(Class)coptions:(id)d;
 - (void) loadPreviewImageWithCompletionHandler:(@?)aexpectedValueClass:(Class)boptions:(id)c;
 - (id) initWithItemProvider:(id)a;
 - (void) setItemProvider:(id)a;
 - (void) setLoadedItems:(id)a;
 - (id) itemProvider;
 - (id) _loadItemsForTypeIdentifiers:(id)aitemProvider:(id)b;
 - (id) loadedItems;
 - (id) _sandboxedResourceForItemIfNeeded:(id)aerror:(^@)b;


@end
