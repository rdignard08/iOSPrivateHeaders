
@protocol AFImageCache;
@interface AFImageCache : NSCache <AFImageCache> {

}

 - (id) cachedImageForRequest:(id)a;
 - (void) cacheImage:(id)aforRequest:(id)b;


@end
