
@protocol NSSecureCoding, NSCopying;
@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {

    @"NSURLCredentialInternal" _internal;
}
@property (atomic, assign, readonly) NSNumber* persistence;
 + (id) credentialForTrust:(^{__SecTrust=})a;
 + (BOOL) supportsSecureCoding;
 + (id) credentialWithUser:(id)apassword:(id)bpersistence:(unsigned long long)c;
 + (id) credentialWithIdentity:(^{__SecIdentity=})acertificates:(id)bpersistence:(unsigned long long)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) user;
 - (id) password;
 - (id) _initWithCFURLCredential:(^{_CFURLCredential=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (^{_CFURLCredential=}) _cfurlcredential;
 - (id) initWithUser:(id)apassword:(id)bpersistence:(unsigned long long)c;
 - (id) initWithIdentity:(^{__SecIdentity=})acertificates:(id)bpersistence:(unsigned long long)c;
 - (id) initWithTrust:(^{__SecTrust=})a;
 - (^{_CFURLCredential=}) _CFURLCredential;
 - (BOOL) hasPassword;
 - (unsigned long long) persistence;
 - (^{__SecIdentity=}) identity;
 - (id) certificates;
 - (BOOL) _hasSWCACreatorAttribute;
 - (void) _removeSWCACreatorAttribute;


@end
