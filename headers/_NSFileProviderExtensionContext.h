
@protocol _NSFileProviderVendor;
@interface _NSFileProviderExtensionContext : NSExtensionContext <_NSFileProviderVendor> {

    NSFileProviderExtension _principalInstance;
}
 + (id) _extensionAuxiliaryHostProtocol;
 + (id) _extensionAuxiliaryVendorProtocol;

 - (void) setPrincipalInstance:(id)a;
 - (void) _performInitialSetupWithCompletion:(@?)a;
 - (void) _providePlaceholderAtURL:(id)acompletion:(@?)b;
 - (void) _startProvidingItemAtURL:(id)acompletion:(@?)b;
 - (void) _itemChangedAtURL:(id)acompletion:(@?)b;
 - (void) _stopProvidingItemAtURL:(id)acompletion:(@?)b;
 - (void) _identifierForItemAtURL:(id)acompletion:(@?)b;
 - (void) _URLForItemIdentifier:(id)acompletion:(@?)b;
 - (id) principalInstance;


@end
