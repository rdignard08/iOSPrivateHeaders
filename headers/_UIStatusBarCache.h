
@interface _UIStatusBarCache : NSObject {

    CPBitmapStore* _store;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (BOOL) _canCacheImages;
 - (id) imageNamed:(id)a forGroup:(id)b withScale:(double)c ;
 - (void) cacheImage:(id)a named:(id)b forGroup:(id)c ;
 - (void) removeImagesInGroup:(id)a ;
 - (id) init;


@end
