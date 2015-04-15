
@interface WebSecurityOrigin : NSObject {

    WebSecurityOriginPrivate _private;
    <WebQuotaManager> _applicationCacheQuotaManager;
    <WebQuotaManager> _databaseQuotaManager;
}
 + (id) webSecurityOriginFromDatabaseIdentifier:(id)a;

 - (void) dealloc;
 - (void) finalize;
 - (BOOL) isEqual:(id)a;
 - (id) stringValue;
 - (id) initWithURL:(id)a;
 - (id) host;
 - (unsigned short) port;
 - (id) databaseQuotaManager;
 - (void) setQuota:(unsigned long long)a;
 - (id) applicationCacheQuotaManager;
 - (id) protocol;
 - (unsigned long long) usage;
 - (^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB}) _core;
 - (id) _initWithWebCoreSecurityOrigin:(^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB})a;
 - (unsigned long long) quota;
 - (id) databaseIdentifier;
 - (id) toString;


@end
