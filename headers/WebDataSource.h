
@interface WebDataSource : NSObject {

    ^v _private;
}
@property (nonatomic, copy, readonly) NSData* data;
@property (nonatomic, assign, readonly) NSNumber* representation;
@property (nonatomic, assign, readonly) WebFrame* webFrame;
@property (nonatomic, assign, readonly) NSURLRequest* initialRequest;
@property (nonatomic, assign, readonly) NSMutableURLRequest* request;
@property (nonatomic, assign, readonly) NSURLResponse* response;
@property (nonatomic, copy, readonly) NSString* textEncodingName;
@property (nonatomic, assign, readonly, getter=isLoading) NSNumber* loading;
@property (nonatomic, copy, readonly) NSString* pageTitle;
@property (nonatomic, assign, readonly) NSURL* unreachableURL;
@property (nonatomic, assign, readonly) WebArchive* webArchive;
@property (nonatomic, assign, readonly) WebResource* mainResource;
@property (nonatomic, copy, readonly) NSArray* subresources;
 + (void) initialize;
 + (Class) _representationClassForMIMEType:(id)aallowingPlugins:(BOOL)b;
 + (id) _repTypesAllowImageTypeOmission:(BOOL)a;

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - (void) dealloc;
 - (void) finalize;
 - (id) data;
 - (id) initWithRequest:(id)a;
 - (id) response;
 - (id) request;
 - (id) subresources;
 - (id) webFrame;
 - (id) subresourceForURL:(id)a;
 - (id) representation;
 - (id) webArchive;
 - (void) setDataSourceDelegate:(id)a;
 - (void) _setAllowToBeMemoryMapped;
 - (id) mainResource;
 - (void) _setRepresentation:(id)a;
 - (id) dataSourceDelegate;
 - (id) _mainDocumentError;
 - (void) _addSubframeArchives:(id)a;
 - (id) _responseMIMEType;
 - (BOOL) _transferApplicationCache:(id)a;
 - (void) _setDeferMainResourceDataLoad:(BOOL)a;
 - (void) _setOverrideTextEncodingName:(id)a;
 - (id) _documentFragmentWithArchive:(id)a;
 - (id) _documentFragmentWithImageResource:(id)a;
 - (id) _imageElementWithImageResource:(id)a;
 - (void) addSubresource:(id)a;
 - (id) _webView;
 - (void) _finishedLoading;
 - (void) _receivedData:(id)a;
 - (void) _setMainDocumentError:(id)a;
 - (void) _revertToProvisionalState;
 - (void) _replaceSelectionWithArchive:(id)aselectReplacement:(BOOL)b;
 - (id) _URL;
 - (BOOL) _isDocumentHTML;
 - (void) _makeRepresentation;
 - (^{DocumentLoader=^^?IB^{Frame}{Ref<WebCore::CachedResourceLoader>=^{CachedResourceLoader}}{CachedResourceHandle<WebCore::CachedRawResource>=^{CachedResource}}{HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >={HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> >=^{KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >}iiii}}{HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >={HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> >=^{KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >}iiii}}{HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >={HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> >=^{KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >}iiii}}{DocumentWriter=^{Frame}B{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}B{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{RefPtr<WebCore::TextResourceDecoder>=^{TextResourceDecoder}}{RefPtr<WebCore::DocumentParser>=^{DocumentParser}}i}{ResourceRequest={URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}d{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{HTTPHeaderMap={HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::String>}iiii}}}{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{RefPtr<WebCore::FormData>=^{FormData}}b3b1b1b1b1b1b1b1b1b1b4B{RetainPtr<const _CFURLRequest *>=^v}{RetainPtr<NSURLRequest>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{SubstituteData={RefPtr<WebCore::SharedBuffer>=^{SharedBuffer}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}B}{ResourceRequest={URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}d{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{HTTPHeaderMap={HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::String>}iiii}}}{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{RefPtr<WebCore::FormData>=^{FormData}}b3b1b1b1b1b1b1b1b1b1b4B{RetainPtr<const _CFURLRequest *>=^v}{RetainPtr<NSURLRequest>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{ResourceRequest={URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}d{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{HTTPHeaderMap={HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::String>}iiii}}}{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{RefPtr<WebCore::FormData>=^{FormData}}b3b1b1b1b1b1b1b1b1b1b4B{RetainPtr<const _CFURLRequest *>=^v}{RetainPtr<NSURLRequest>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{ResourceResponse={URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}q{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{HTTPHeaderMap={HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::String>}iiii}}}{ResourceLoadTiming=iiiiiii}iIdddddb1b1b1b1b1b1b1b1b1b1b1b3b1{RetainPtr<_CFURLResponse *>=^v}{RetainPtr<NSURLResponse>=^v}{RetainPtr<const __CFArray *>=^v}}{ResourceError={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}ib1b1b1B{RetainPtr<__CFError *>=^v}{RetainPtr<NSError>=^v}}BBBBBBB{StringWithDirection={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}i}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{NavigationAction={ResourceRequest={URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}d{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{HTTPHeaderMap={HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::String>}iiii}}}{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{RefPtr<WebCore::FormData>=^{FormData}}b3b1b1b1b1b1b1b1b1b1b4B{RetainPtr<const _CFURLRequest *>=^v}{RetainPtr<NSURLRequest>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}i{RefPtr<WebCore::Event>=^{Event}}B}{ResourceRequest={URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}d{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{HTTPHeaderMap={HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::String>}iiii}}}{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{RefPtr<WebCore::FormData>=^{FormData}}b3b1b1b1b1b1b1b1b1b1b4B{RetainPtr<const _CFURLRequest *>=^v}{RetainPtr<NSURLRequest>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{Vector<WebCore::ResourceResponse, 0, WTF::CrashOnOverflow>=^{ResourceResponse}II}B{HashMap<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource>, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > >={HashTable<WTF::RefPtr<WebCore::ResourceLoader>, WTF::KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> > >, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >=^{KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> >}iiii}}{Timer<WebCore::DocumentLoader>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{OwnPtr<WebCore::ArchiveResourceCollection>=^{ArchiveResourceCollection}}{RefPtr<WebCore::Archive>=^{Archive}}{RefPtr<WebCore::SharedBuffer>=^{SharedBuffer}}{HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >=^{String}iiii}}{Vector<WebCore::ResourceRequest, 0, WTF::CrashOnOverflow>=^{ResourceRequest}II}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}BB{DocumentLoadTiming=dddddddsddddBB}dQ{Timer<WebCore::DocumentLoader>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}B{RefPtr<WebCore::EnumCallback<WebCore::IconLoadDecision> >=^{EnumCallback<WebCore::IconLoadDecision>}}{RefPtr<WebCore::ObjectCallback<WebCore::SharedBuffer *> >=^{ObjectCallback<WebCore::SharedBuffer *>}}B{OwnPtr<WebCore::ApplicationCacheHost>=^{ApplicationCacheHost}}{unique_ptr<WebCore::ContentFilter, std::__1::default_delete<WebCore::ContentFilter> >={__compressed_pair<WebCore::ContentFilter *, std::__1::default_delete<WebCore::ContentFilter> >=^{ContentFilter}}}{unique_ptr<WebCore::QuickLookHandle, std::__1::default_delete<WebCore::QuickLookHandle> >={__compressed_pair<WebCore::QuickLookHandle *, std::__1::default_delete<WebCore::QuickLookHandle> >=^{QuickLookHandle}}}}) _documentLoader;
 - (id) _initWithDocumentLoader:({PassRefPtr<WebDocumentLoaderMac>=^{WebDocumentLoaderMac}})a;
 - (id) textEncodingName;
 - (id) initialRequest;
 - (BOOL) isLoading;
 - (id) pageTitle;
 - (id) unreachableURL;


@end
