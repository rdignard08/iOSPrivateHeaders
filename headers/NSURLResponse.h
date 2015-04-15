
@protocol NSSecureCoding, NSCopying;
@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

    @"NSURLResponseInternal" _internal;
}
@property (atomic, copy, readonly) NSURL* URL;
@property (atomic, copy, readonly) NSString* MIMEType;
@property (atomic, assign, readonly) NSNumber* expectedContentLength;
@property (atomic, copy, readonly) NSString* textEncodingName;
@property (atomic, copy, readonly) NSString* suggestedFilename;
 + (BOOL) supportsSecureCoding;
 + (id) getObjectKeyWithIndex:(q)a;
 + (id) _responseWithCFURLResponse:(^{_CFURLResponse=})a;

 - (i) statusCode;
 - (id) allHeaderFields;
 - (q) maxExpectedContentLength;
 - (id) MIMEType;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (^{_CFURLResponse=}) _CFURLResponse;
 - (id) URL;
 - (id) _initWithCFURLResponse:(^{_CFURLResponse=})a;
 - (id) initWithURL:(id)aMIMEType:(id)bexpectedContentLength:(q)ctextEncodingName:(id)d;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (q) expectedContentLength;
 - (id) suggestedFilename;
 - (void) _setExpectedContentLength:(q)a;
 - (void) _setMIMEType:(id)a;
 - (BOOL) _mustRevalidate;
 - (d) _freshnessLifetime;
 - (d) _calculatedExpiration;
 - (id) _peerCertificateChain;
 - (id) textEncodingName;
 - (id) _lastModifiedDate;


@end
