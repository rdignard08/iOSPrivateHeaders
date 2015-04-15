
@interface NSURLCredentialStorage : NSObject {

    NSURLCredentialStorageInternal* _internal;
}
@property (atomic, copy, readonly) NSDictionary* allCredentials;
 + (id) sharedCredentialStorage;

 - (void) dealloc;
 - (id) init;
 - (id) allCredentials;
 - (void) removeCredential:(id)aforProtectionSpace:(id)b;
 - (void) getCredentialsForProtectionSpace:(id)atask:(id)bcompletionHandler:(@?)c;
 - (void) getDefaultCredentialForProtectionSpace:(id)atask:(id)bcompletionHandler:(@?)c;
 - (void) setCredential:(id)aforProtectionSpace:(id)btask:(id)c;
 - (void) setDefaultCredential:(id)aforProtectionSpace:(id)btask:(id)c;
 - (id) defaultCredentialForProtectionSpace:(id)a;
 - (id) credentialsForProtectionSpace:(id)a;
 - (void) setCredential:(id)aforProtectionSpace:(id)b;
 - (void) setDefaultCredential:(id)aforProtectionSpace:(id)b;
 - (id) _initWithCFURLCredentialStorage:(^{_CFURLCredentialStorage=})a;
 - (void) removeCredential:(id)aforProtectionSpace:(id)boptions:(id)c;
 - (id) _initWithIdentifier:(id)aprivate:(BOOL)b;
 - (^{_CFURLCredentialStorage=}) _CFURLCredentialStorage;
 - (void) removeCredential:(id)aforProtectionSpace:(id)boptions:(id)ctask:(id)d;


@end
