
@interface NSNetServiceBrowser : NSObject {

    id _netServiceBrowser;
    id _delegate;
    ^v _reserved;
    BOOL _includesPeerToPeer;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readwrite) NSNumber* includesPeerToPeer;

 - (void) stop;
 - (void) dealloc;
 - (void) finalize;
 - (void) setDelegate:(id)a ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (id) init;
 - (id) delegate;
 - (BOOL) includesPeerToPeer;
 - (BOOL) _includesAWDL;
 - (void) setIncludesPeerToPeer:(BOOL)a ;
 - (void) _setIncludesAWDL:(BOOL)a ;
 - (^{__CFNetServiceBrowser=}) _internalNetServiceBrowser;
 - (void) searchForBrowsableDomains;
 - (void) searchForRegistrationDomains;
 - (void) searchForServicesOfType:(id)a inDomain:(id)b ;
 - (void) _dispatchCallBack:(^v)a flags:(unsigned long long)b error:({?=qi})c ;
 - (void) searchForAllDomains;


@end
