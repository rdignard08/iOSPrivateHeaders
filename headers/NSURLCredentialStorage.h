
@interface NSURLCredentialStorage : NSObject {

    NSURLCredentialStorageInternal* _internal;
}
@property (atomic, copy, readonly) NSDictionary* allCredentials;
 + (id) sharedCredentialStorage;

 - (void) dealloc;
 - (id) init;
 - (id) allCredentials;
 - (void) removeCredential:(id)a forProtectionSpace:(id)b ;
 - (void) getCredentialsForProtectionSpace:(id)a task:(id)b completionHandler:(@?)c ;
 - (void) getDefaultCredentialForProtectionSpace:(id)a task:(id)b completionHandler:(@?)c ;
 - (void) setCredential:(id)a forProtectionSpace:(id)b task:(id)c ;
 - (void) setDefaultCredential:(id)a forProtectionSpace:(id)b task:(id)c ;
 - (id) defaultCredentialForProtectionSpace:(id)a ;
 - (id) credentialsForProtectionSpace:(id)a ;
 - (void) setCredential:(id)a forProtectionSpace:(id)b ;
 - (void) setDefaultCredential:(id)a forProtectionSpace:(id)b ;
 - (id) _initWithCFURLCredentialStorage:(^{_CFURLCredentialStorage=})a ;
 - (void) removeCredential:(id)a forProtectionSpace:(id)b options:(id)c ;
 - (id) _initWithIdentifier:(id)a private:(BOOL)b ;
 - (^{_CFURLCredentialStorage=}) _CFURLCredentialStorage;
 - (void) removeCredential:(id)a forProtectionSpace:(id)b options:(id)c task:(id)d ;


@end
