
@protocol _NSExtensionContextHosting;
@interface NSExtension : NSObject <_NSExtensionContextHosting> {

    BOOL _observingHostAppStateChanges;
    NSString* _identifier;
    NSString* _version;
    NSDictionary* _attributes;
    NSDictionary* _infoDictionary;
    NSString* _extensionPointIdentifier;
    @? _requestCompletionBlock;
    @? _requestCancellationBlock;
    @? _requestInterruptionBlock;
    <PKPlugIn>* __plugIn;
    NSBundle* __extensionBundle;
    @? __requestPostCompletionBlock;
    @? __requestPostCompletionBlockWithItems;
    NSMutableDictionary* __extensionExpirationIdentifiers;
    NSMutableDictionary* __extensionServiceConnections;
    NSMutableDictionary* __extensionContexts;
    BKSProcessAssertion* __extensionProcessAssertion;
    long long __assertionRefCount;
    NSObject<OS_dispatch_queue>* __safePluginQueue;
}
@property (nonatomic, assign, readonly, getter=_isMarkedNew) NSNumber* _markedNew;
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, copy, readwrite) NSString* version;
@property (nonatomic, copy, readwrite) NSDictionary* attributes;
@property (nonatomic, copy, readwrite) NSDictionary* infoDictionary;
@property (nonatomic, copy, readwrite) NSString* extensionPointIdentifier;
@property (nonatomic, copy, readwrite) NSArray* icons;
@property (nonatomic, assign, readonly) NSNumber* optedIn;
@property (nonatomic, copy, readwrite) NSNumber* requestCompletionBlock;
@property (nonatomic, copy, readwrite) NSNumber* requestCancellationBlock;
@property (nonatomic, copy, readwrite) NSNumber* requestInterruptionBlock;
@property (nonatomic, retain, readwrite, setter=_setPlugIn:) NSNumber* _plugIn;
@property (nonatomic, retain, readwrite, setter=_setExtensionBundle:) NSBundle* _extensionBundle;
@property (nonatomic, copy, readwrite) NSNumber* _requestPostCompletionBlock;
@property (nonatomic, copy, readwrite) NSNumber* _requestPostCompletionBlockWithItems;
@property (nonatomic, retain, readwrite, setter=_setExtensionExpirationsIdentifiers:) NSMutableDictionary* _extensionExpirationIdentifiers;
@property (nonatomic, retain, readwrite, setter=_setExtensionServiceConnections:) NSMutableDictionary* _extensionServiceConnections;
@property (nonatomic, retain, readwrite, setter=_setExtensionContexts:) NSMutableDictionary* _extensionContexts;
@property (nonatomic, copy, readwrite, getter=_extensionState, setter=_setExtensionState:) NSDictionary* _extensionState;
@property (nonatomic, retain, readwrite, setter=_setExtensionProcessAssertion:) BKSProcessAssertion* _extensionProcessAssertion;
@property (nonatomic, assign, readwrite, setter=_setAssertionRefCount:) NSNumber* _assertionRefCount;
@property (nonatomic, assign, readwrite, getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:) NSNumber* observingHostAppStateChanges;
@property (nonatomic, assign, readwrite) NSNumber* _safePluginQueue;
 + (void) initialize;
 + (id) extensionWithIdentifier:(id)aerror:(^@)b;
 + (void) endMatchingExtensions:(id)a;
 + (id) beginMatchingExtensionsWithAttributes:(id)acompletion:(@?)b;
 + (void) initializeFiltering;
 + (BOOL) evaluateActivationRule:(id)awithExtensionItemsRepresentation:(id)b;
 + (id) predicateForActivationRule:(id)a;
 + (BOOL) _shouldLogExtensionDiscovery;
 + (void) extensionsWithMatchingAttributes:(id)acompletion:(@?)b;
 + (id) extensionsWithMatchingAttributes:(id)aerror:(^@)b;

 - (void) instantiateViewControllerWithInputItems:(id)aconnectionHandler:(@?)b;
 - (void) instantiateViewControllerWithInputItems:(id)alistenerEndpoint:(id)bconnectionHandler:(@?)c;
 - (id) __UIKit_upcall_icons;
 - (id) objectForInfoDictionaryKey:(id)a;
 - (void) setVersion:(id)a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) icons;
 - (void) cancelExtensionRequestWithIdentifier:(id)a;
 - (BOOL) attemptOptIn:(^@)a;
 - (BOOL) attemptOptOut:(^@)a;
 - (BOOL) optedIn;
 - (BOOL) _isPhotoServiceAccessGranted;
 - (void) set_requestPostCompletionBlockWithItems:(@?)a;
 - (void) setRequestCompletionBlock:(@?)a;
 - (void) setRequestCancellationBlock:(@?)a;
 - (id) extensionPointIdentifier;
 - (void) setRequestInterruptionBlock:(@?)a;
 - (void) beginExtensionRequestWithInputItems:(id)acompletion:(@?)b;
 - (int) pidForRequestIdentifier:(id)a;
 - (id) init;
 - (id) _plugIn;
 - (id) _extensionState;
 - (void) _setExtensionState:(id)a;
 - (BOOL) _isMarkedNew;
 - (void) _didShowExtensionManagementInterface;
 - (void) _didShowNewExtensionIndicator;
 - (void) _resetExtensionState;
 - (id) infoDictionary;
 - (id) _extensionContextForUUID:(id)a;
 - (id) _extensionServiceConnections;
 - (void) _setExtensionServiceConnections:(id)a;
 - (id) _extensionContexts;
 - (void) _setExtensionContexts:(id)a;
 - (void) _completeRequestReturningItems:(id)aforExtensionContextWithUUID:(id)bcompletion:(@?)c;
 - (void) _cancelRequestWithError:(id)aforExtensionContextWithUUID:(id)bcompletion:(@?)c;
 - (void) _loadItemForPayload:(id)acontextIdentifier:(id)bcompletionHandler:(@?)c;
 - (void) _loadPreviewImageForPayload:(id)acontextIdentifier:(id)bcompletionHandler:(@?)c;
 - (void) _openURL:(id)acompletion:(@?)b;
 - (id) _initWithPKPlugin:(id)a;
 - (id) identifier;
 - (id) version;
 - (id) attributes;
 - (id) _extensionBundle;
 - (id) _bareExtensionServiceConnection;
 - (void) _didCreateExtensionContext:(id)a;
 - (@?) requestInterruptionBlock;
 - (id) _safePluginQueue;
 - (void) _reallyBeginExtensionRequestWithInputItems:(id)alistenerEndpoint:(id)bcompletion:(@?)c;
 - (void) _safelyBeginUsing:(@?)a;
 - (void) beginExtensionRequestWithInputItems:(id)alistenerEndpoint:(id)bcompletion:(@?)c;
 - (@?) _requestPostCompletionBlock;
 - (void) _hostWillEnterForegroundNote:(id)a;
 - (void) _hostDidEnterBackgroundNote:(id)a;
 - (void) _hostWillResignActiveNote:(id)a;
 - (void) _hostDidBecomeActiveNote:(id)a;
 - (@?) requestCompletionBlock;
 - (@?) _requestPostCompletionBlockWithItems;
 - (@?) requestCancellationBlock;
 - (id) _itemProviderForPayload:(id)aextensionContext:(id)b;
 - (int) _plugInProcessIdentifier;
 - (void) _kill:(int)a;
 - (BOOL) _isSystemExtension;
 - (void) _safelyEndUsing:(@?)a;
 - (void) setIdentifier:(id)a;
 - (void) setAttributes:(id)a;
 - (void) setInfoDictionary:(id)a;
 - (void) setExtensionPointIdentifier:(id)a;
 - (void) _setPlugIn:(id)a;
 - (void) _setExtensionBundle:(id)a;
 - (void) set_requestPostCompletionBlock:(@?)a;
 - (id) _extensionExpirationIdentifiers;
 - (void) _setExtensionExpirationsIdentifiers:(id)a;
 - (id) _extensionProcessAssertion;
 - (void) _setExtensionProcessAssertion:(id)a;
 - (long long) _assertionRefCount;
 - (void) _setAssertionRefCount:(long long)a;
 - (BOOL) _isObservingHostAppStateChanges;
 - (void) _setObservingHostAppStateChanges:(BOOL)a;
 - (void) set_safePluginQueue:(id)a;


@end
