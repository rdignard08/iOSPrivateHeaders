
@protocol NSExtensionRequestHandling;
@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling> {

    NSObject<OS_dispatch_queue> _extensionDispatchQueue;
    NSObject<OS_dispatch_queue> _memberQueue;
    NSURL _memberQueueDocumentStorageURL;
    NSString _memberQueueProviderIdentifier;
}
@property (nonatomic, retain, readwrite) NSNumber* memberQueue;
@property (nonatomic, retain, readwrite) NSURL* memberQueueDocumentStorageURL;
@property (nonatomic, copy, readwrite) NSString* memberQueueProviderIdentifier;
 + (id) _resourceIDOfURL:(id)aoutError:(^@)b;
 + (id) _relativeComponentsOfURL:(id)afromBaseURL:(id)b;
 + (BOOL) writePlaceholderAtURL:(id)awithMetadata:(id)berror:(^@)c;
 + (id) placeholderURLForURL:(id)a;

 - (void) dealloc;
 - (id) documentStorageURL;
 - (id) providerIdentifier;
 - (id) memberQueue;
 - (id) memberQueueDocumentStorageURL;
 - (id) URLForItemWithPersistentIdentifier:(id)a;
 - (id) persistentIdentifierForItemAtURL:(id)a;
 - (void) providePlaceholderAtURL:(id)acompletionHandler:(@?)b;
 - (void) startProvidingItemAtURL:(id)acompletionHandler:(@?)b;
 - (void) itemChangedAtURL:(id)a;
 - (void) stopProvidingItemAtURL:(id)a;
 - (void) setMemberQueue:(id)a;
 - (void) setMemberQueueDocumentStorageURL:(id)a;
 - (id) memberQueueProviderIdentifier;
 - (void) setMemberQueueProviderIdentifier:(id)a;
 - (id) init;
 - (void) beginRequestWithExtensionContext:(id)a;


@end
