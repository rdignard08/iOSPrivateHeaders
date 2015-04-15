
@interface NSURLProtocolInternal : NSObject {

    <NSURLProtocolClient> client;
    NSURLRequest request;
    NSCachedURLResponse cachedResponse;
    NSLock mutex;
}

 - (void) dealloc;
 - (id) init;


@end
