
@interface NSCachedURLResponseInternal : NSObject {

    NSURLResponse response;
    NSData data;
    NSDictionary userInfo;
    unsigned long long storagePolicy;
    ^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}} _cachedURLResponse;
}

 - (void) dealloc;


@end
