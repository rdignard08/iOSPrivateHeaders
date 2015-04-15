
@interface WebDisplayLinkHandler : NSObject {

    ^{DisplayRefreshMonitorIOS=^^?IdBBBiI{Mutex={_opaque_pthread_mutex_t=q[56c]}}{HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> >={HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> >=^^{DisplayRefreshMonitorClient}iiii}}^{HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> >}{RetainPtr<WebDisplayLinkHandler>=^v}} m_monitor;
    CADisplayLink* m_displayLink;
}

 - (void) dealloc;
 - (void) invalidate;
 - (void) handleDisplayLink:(id)a ;
 - (id) initWithMonitor:(^{DisplayRefreshMonitorIOS=^^?IdBBBiI{Mutex={_opaque_pthread_mutex_t=q[56c]}}{HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> >={HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> >=^^{DisplayRefreshMonitorClient}iiii}}^{HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> >}{RetainPtr<WebDisplayLinkHandler>=^v}})a ;


@end
