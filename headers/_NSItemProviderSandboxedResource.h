
@protocol NSSecureCoding, NSCopying;
@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {

    BOOL _accessingSecurityScopedResource;
    NSURL* _resourceURL;
    NSData* _sandboxExtensionToken;
}
@property (nonatomic, copy, readwrite) NSURL* resourceURL;
@property (nonatomic, copy, readwrite) NSData* sandboxExtensionToken;
@property (nonatomic, assign, readwrite, getter=isAccessingSecurityScopedResource) NSNumber* accessingSecurityScopedResource;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) resourceURL;
 - (id) initWithContentsOfURL:(id)aerror:(^@)b;
 - (void) setResourceURL:(id)a;
 - (void) setSandboxExtensionToken:(id)a;
 - (BOOL) isAccessingSecurityScopedResource;
 - (void) setAccessingSecurityScopedResource:(BOOL)a;
 - (id) sandboxExtensionToken;
 - (id) resolveURLAndReturnError:(^@)a;


@end
