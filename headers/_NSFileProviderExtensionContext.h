
@protocol _NSFileProviderVendor;
@interface _NSFileProviderExtensionContext : NSExtensionContext <_NSFileProviderVendor> {

    NSFileProviderExtension* _principalInstance;
}
 + (id) _extensionAuxiliaryHostProtocol;
 + (id) _extensionAuxiliaryVendorProtocol;

 - (void) setPrincipalInstance:(id)a ;
 - (void) _performInitialSetupWithCompletion:(@?)a ;
 - (void) _providePlaceholderAtURL:(id)a completion:(@?)b ;
 - (void) _startProvidingItemAtURL:(id)a completion:(@?)b ;
 - (void) _itemChangedAtURL:(id)a completion:(@?)b ;
 - (void) _stopProvidingItemAtURL:(id)a completion:(@?)b ;
 - (void) _identifierForItemAtURL:(id)a completion:(@?)b ;
 - (void) _URLForItemIdentifier:(id)a completion:(@?)b ;
 - (id) principalInstance;


@end
