
@protocol WebAllowDenyPolicyListener;
@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {

    m_ptr* _geolocation;
    m_ptr* _webView;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) allow;
 - (BOOL) shouldClearCache;
 - (void) deny;
 - (void) denyOnlyThisRequest;
 - (id) initWithGeolocation:(^{Geolocation=^^?^{ScriptExecutionContext}I{Weak<WebCore::JSDOMWrapper>=^{WeakImpl}}I{HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{RefPtr<WebCore::Geolocation::GeoNotifier>}iiii}}{Watchers={HashMap<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<int, WTF::KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >, WTF::IntHash<unsigned int>, WTF::HashMap<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >::KeyValuePairTraits, WTF::HashTraits<int> >=^{KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >}iiii}}{HashMap<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<int> >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int> >, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<int> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>}iiii}}}{HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{RefPtr<WebCore::Geolocation::GeoNotifier>}iiii}}{RefPtr<WebCore::Geoposition>=^{Geoposition}}iBBB{RefPtr<WebCore::PositionError>=^{PositionError}}{Timer<WebCore::Geolocation>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{RefPtr<WebCore::Geolocation::GeoNotifier>}iiii}}})a forWebView:(id)b ;


@end
