
@protocol NSSecureCoding, NSCopying;
@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {

    @"NSURLCredentialInternal" _internal;
}
@property (atomic, assign, readonly) NSNumber* persistence;
 + (id) credentialForTrust:(^{__SecTrust=})a;
 + (BOOL) supportsSecureCoding;
 + (id) credentialWithUser:(id)apassword:(id)bpersistence:(Q)c;
 + (id) credentialWithIdentity:(^{__SecIdentity=})acertificates:(id)bpersistence:(Q)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) user;
 - (id) password;
 - (id) _initWithCFURLCredential:(^{_CFURLCredential=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (^{_CFURLCredential=}) _cfurlcredential;
 - (id) initWithUser:(id)apassword:(id)bpersistence:(Q)c;
 - (id) initWithIdentity:(^{__SecIdentity=})acertificates:(id)bpersistence:(Q)c;
 - (id) initWithTrust:(^{__SecTrust=})a;
 - (^{_CFURLCredential=}) _CFURLCredential;
 - (BOOL) hasPassword;
 - (Q) persistence;
 - (^{__SecIdentity=}) identity;
 - (id) certificates;
 - (BOOL) _hasSWCACreatorAttribute;
 - (void) _removeSWCACreatorAttribute;


@end
