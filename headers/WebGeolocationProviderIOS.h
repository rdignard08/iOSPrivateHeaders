
@protocol WebGeolocationProvider;
@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider> {

    m_ptr* _coreLocationProvider;
    m_ptr* _coreLocationUpdateListenerProxy;
    BOOL _enableHighAccuracy;
    BOOL _isSuspended;
    BOOL _shouldResetOnResume;
    {HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >="m_impl"{HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView> > >="m_table"^{KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > >}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} _webViewsWaitingForCoreLocationAuthorization;
    {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} _pendingInitialPositionWebView;
    {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} _registeredWebViews;
    {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} _trackedWebViews;
    m_ptr* _sendLastPositionAsynchronouslyTimer;
    m_ptr* _lastPosition;
}
 + (id) sharedGeolocationProvider;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) suspend;
 - (void) resume;
 - (void) registerWebView:(id)a ;
 - (void) unregisterWebView:(id)a ;
 - (void) setEnableHighAccuracy:(BOOL)a ;
 - (void) initializeGeolocationForWebView:(id)a listener:(id)b ;
 - (id) lastPosition;
 - (void) resetGeolocation;
 - (void) _handlePendingInitialPosition:(id)a ;
 - (void) stopTrackingWebView:(id)a ;
 - (void) geolocationAuthorizationGranted;
 - (void) geolocationAuthorizationDenied;
 - (void) positionChanged:(id)a ;
 - (void) errorOccurred:(id)a ;


@end
