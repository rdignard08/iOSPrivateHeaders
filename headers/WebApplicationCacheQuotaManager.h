
@protocol WebQuotaManager;
@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {

    @"WebSecurityOrigin" _origin;
}

 - (id) origin;
 - (void) setQuota:(Q)a;
 - (Q) usage;
 - (id) initWithOrigin:(id)a;
 - (Q) quota;


@end
