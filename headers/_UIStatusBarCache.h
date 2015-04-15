
@interface _UIStatusBarCache : NSObject {

    @"CPBitmapStore" _store;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (BOOL) _canCacheImages;
 - (id) imageNamed:(id)aforGroup:(id)bwithScale:(d)c;
 - (void) cacheImage:(id)anamed:(id)bforGroup:(id)c;
 - (void) removeImagesInGroup:(id)a;
 - (id) init;


@end
