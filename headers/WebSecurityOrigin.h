
@interface WebSecurityOrigin : NSObject {

    @"WebSecurityOriginPrivate" _private;
    @"<WebQuotaManager>" _applicationCacheQuotaManager;
    @"<WebQuotaManager>" _databaseQuotaManager;
}
 + (id) webSecurityOriginFromDatabaseIdentifier:(id)a;

 - (void) dealloc;
 - (void) finalize;
 - (BOOL) isEqual:(id)a;
 - (id) stringValue;
 - (id) initWithURL:(id)a;
 - (id) host;
 - (S) port;
 - (id) databaseQuotaManager;
 - (void) setQuota:(Q)a;
 - (id) applicationCacheQuotaManager;
 - (id) protocol;
 - (Q) usage;
 - (^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB}) _core;
 - (id) _initWithWebCoreSecurityOrigin:(^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB})a;
 - (Q) quota;
 - (id) databaseIdentifier;
 - (id) toString;


@end
