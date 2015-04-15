
@interface WebApplicationCache : NSObject {

}
 + (void) deleteAllApplicationCaches;
 + (void) initializeWithBundleIdentifier:(id)a;
 + (long long) maximumSize;
 + (long long) defaultOriginQuota;
 + (void) setDefaultOriginQuota:(long long)a;
 + (long long) diskUsageForOrigin:(id)a;
 + (void) deleteCacheForOrigin:(id)a;
 + (id) originsWithCache;
 + (void) setMaximumSize:(long long)a;



@end
