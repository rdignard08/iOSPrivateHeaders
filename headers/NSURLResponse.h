
@protocol NSSecureCoding, NSCopying;
@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

    NSURLResponseInternal* _internal;
}
@property (atomic, copy, readonly) NSURL* URL;
@property (atomic, copy, readonly) NSString* MIMEType;
@property (atomic, assign, readonly) NSNumber* expectedContentLength;
@property (atomic, copy, readonly) NSString* textEncodingName;
@property (atomic, copy, readonly) NSString* suggestedFilename;
 + (BOOL) supportsSecureCoding;
 + (id) getObjectKeyWithIndex:(long long)a;
 + (id) _responseWithCFURLResponse:(^{_CFURLResponse=})a;

 - (int) statusCode;
 - (id) allHeaderFields;
 - (long long) maxExpectedContentLength;
 - (id) MIMEType;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (^{_CFURLResponse=}) _CFURLResponse;
 - (id) URL;
 - (id) _initWithCFURLResponse:(^{_CFURLResponse=})a ;
 - (id) initWithURL:(id)a MIMEType:(id)b expectedContentLength:(long long)c textEncodingName:(id)d ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (long long) expectedContentLength;
 - (id) suggestedFilename;
 - (void) _setExpectedContentLength:(long long)a ;
 - (void) _setMIMEType:(id)a ;
 - (BOOL) _mustRevalidate;
 - (double) _freshnessLifetime;
 - (double) _calculatedExpiration;
 - (id) _peerCertificateChain;
 - (id) textEncodingName;
 - (id) _lastModifiedDate;


@end
