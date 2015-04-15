
@protocol NSSecureCoding, NSCopying;
@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {

    NSURLProtectionSpaceInternal* _internal;
}
@property (atomic, copy, readonly) NSString* realm;
@property (atomic, assign, readonly) NSNumber* receivesCredentialSecurely;
@property (atomic, assign, readonly) NSNumber* isProxy;
@property (atomic, copy, readonly) NSString* host;
@property (atomic, assign, readonly) NSNumber* port;
@property (atomic, copy, readonly) NSString* proxyType;
@property (atomic, copy, readonly) NSString* protocol;
@property (atomic, copy, readonly) NSString* authenticationMethod;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) host;
 - (long long) port;
 - (id) init;
 - (BOOL) isProxy;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) _initWithCFURLProtectionSpace:(^{_CFURLProtectionSpace=})a;
 - (^{_CFURLProtectionSpace=}) _cfurlprtotectionspace;
 - (id) _internalInit;
 - (id) authenticationMethod;
 - (id) realm;
 - (id) proxyType;
 - (BOOL) receivesCredentialSecurely;
 - (id) protocol;
 - (^{_CFURLProtectionSpace=}) _CFURLProtectionSpace;
 - (id) initWithProxyHost:(id)aport:(long long)btype:(id)crealm:(id)dauthenticationMethod:(id)e;
 - (id) initWithHost:(id)aport:(long long)bprotocol:(id)crealm:(id)dauthenticationMethod:(id)e;
 - (id) distinguishedNames;
 - (^{__SecTrust=}) serverTrust;


@end
