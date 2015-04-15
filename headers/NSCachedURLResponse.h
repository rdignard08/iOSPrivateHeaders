
@protocol NSSecureCoding, NSCopying;
@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {

    @"NSCachedURLResponseInternal" _internal;
}
@property (atomic, copy, readonly) NSURLResponse* response;
@property (atomic, copy, readonly) NSData* data;
@property (atomic, copy, readonly) NSDictionary* userInfo;
@property (atomic, assign, readonly) NSNumber* storagePolicy;
 + (BOOL) supportsSecureCoding;
 + (void) initialize;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) data;
 - (id) userInfo;
 - (^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}}) _CFCachedURLResponse;
 - (id) _initWithCFCachedURLResponse:(^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}})a;
 - (id) response;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) _reestablishInternalCFCachedURLResponse:(^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}})a;
 - (id) initWithResponse:(id)adata:(id)buserInfo:(id)cstoragePolicy:(unsigned long long)d;
 - (unsigned long long) storagePolicy;
 - (id) _private_initWithCoder:(id)a;
 - (void) _private_encodeWithCoder:(id)a;
 - (id) initWithResponse:(id)adata:(id)b;
 - (id) initWithResponse:(id)adataArray:(id)buserInfo:(id)cstoragePolicy:(unsigned long long)d;
 - (id) dataArray;
 - (void) _deallocInternalCFCachedURLResponse;


@end
