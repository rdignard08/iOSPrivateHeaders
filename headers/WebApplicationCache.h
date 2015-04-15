
@interface WebApplicationCache : NSObject {

}
 + (void) deleteAllApplicationCaches;
 + (void) initializeWithBundleIdentifier:(id)a;
 + (q) maximumSize;
 + (q) defaultOriginQuota;
 + (void) setDefaultOriginQuota:(q)a;
 + (q) diskUsageForOrigin:(id)a;
 + (void) deleteCacheForOrigin:(id)a;
 + (id) originsWithCache;
 + (void) setMaximumSize:(q)a;



@end
