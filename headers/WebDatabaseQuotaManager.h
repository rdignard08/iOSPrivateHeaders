
@protocol WebQuotaManager;
@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {

    WebSecurityOrigin* _origin;
}

 - (id) origin;
 - (void) setQuota:(unsigned long long)a ;
 - (unsigned long long) usage;
 - (id) initWithOrigin:(id)a ;
 - (unsigned long long) quota;


@end
