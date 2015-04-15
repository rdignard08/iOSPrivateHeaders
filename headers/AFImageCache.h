
@protocol AFImageCache;
@interface AFImageCache : NSCache <AFImageCache> {

}

 - (id) cachedImageForRequest:(id)a ;
 - (void) cacheImage:(id)a forRequest:(id)b ;


@end
