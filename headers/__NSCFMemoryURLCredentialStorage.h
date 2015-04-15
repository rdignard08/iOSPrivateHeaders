
@interface __NSCFMemoryURLCredentialStorage : NSURLCredentialStorage {

}
 + (void) initialize;

 - (id) description;
 - (id) init;
 - (id) allCredentials;
 - (void) removeCredential:(id)aforProtectionSpace:(id)b;
 - (id) defaultCredentialForProtectionSpace:(id)a;
 - (id) credentialsForProtectionSpace:(id)a;
 - (void) setCredential:(id)aforProtectionSpace:(id)b;
 - (void) setDefaultCredential:(id)aforProtectionSpace:(id)b;


@end
