
@interface WebCache : NSObject {

}
 + (void) initialize;
 + (BOOL) addImageToCache:(^{CGImage=})aforURL:(id)bforFrame:(id)c;
 + (void) removeImageFromCacheForURL:(id)aforFrame:(id)b;
 + (void) setDisabled:(BOOL)a;
 + (id) statistics;
 + (void) empty;
 + (void) emptyInMemoryResources;
 + (void) sizeOfDeadResources:(^i)a;
 + (void) clearCachedCredentials;
 + (BOOL) addImageToCache:(^{CGImage=})aforURL:(id)b;
 + (void) removeImageFromCacheForURL:(id)a;
 + (^{CGImage=}) imageForURL:(id)a;
 + (BOOL) isDisabled;



@end
