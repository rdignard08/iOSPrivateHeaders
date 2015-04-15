
@interface __NSCFMemoryURLCredentialStorage : NSURLCredentialStorage {

}
 + (void) initialize;

 - (id) description;
 - (id) init;
 - (id) allCredentials;
 - (void) removeCredential:(id)a forProtectionSpace:(id)b ;
 - (id) defaultCredentialForProtectionSpace:(id)a ;
 - (id) credentialsForProtectionSpace:(id)a ;
 - (void) setCredential:(id)a forProtectionSpace:(id)b ;
 - (void) setDefaultCredential:(id)a forProtectionSpace:(id)b ;


@end
