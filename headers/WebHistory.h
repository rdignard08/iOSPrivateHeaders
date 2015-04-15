
@interface WebHistory : NSObject {

    WebHistoryPrivate* _historyPrivate;
}
@property (nonatomic, copy, readonly) NSArray* orderedLastVisitedDays;
@property (nonatomic, assign, readwrite) NSNumber* historyItemLimit;
@property (nonatomic, assign, readwrite) NSNumber* historyAgeInDaysLimit;
 + (void) setOptionalSharedHistory:(id)a;
 + (id) optionalSharedHistory;
 + (void) _setVisitedLinkTrackingEnabled:(BOOL)a;
 + (void) _removeAllVisitedLinks;

 - (void) removeAllItems;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (id) _data;
 - (void) _addVisitedLinksToPageGroup:(^{PageGroup={HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >={HashTable<const char *, WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >, WTF::PtrHash<const char *>, WTF::HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >::KeyValuePairTraits, WTF::HashTraits<const char *> >=^{KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > >}iiii}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{HashSet<WebCore::Page *, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> >={HashTable<WebCore::Page *, WebCore::Page *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> >=^^{Page}iiii}}{RefPtr<WebCore::VisitedLinkStore>=^{VisitedLinkStore}}{HashSet<unsigned long long, WebCore::LinkHashHash, WTF::HashTraits<unsigned long long> >={HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WebCore::LinkHashHash, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> >=^Qiiii}}BI{RefPtr<WebCore::StorageNamespace>=^{StorageNamespace}}{HashMap<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace>, WebCore::SecurityOriginHash, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> >, WTF::HashTraits<WTF::RefPtr<WebCore::StorageNamespace> > >={HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> > >, WebCore::SecurityOriginHash, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> >, WTF::HashTraits<WTF::RefPtr<WebCore::StorageNamespace> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> > >=^{KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> >}iiii}}{RefPtr<WebCore::UserContentController>=^{UserContentController}}{unique_ptr<WebCore::GroupSettings, std::__1::default_delete<WebCore::GroupSettings> >={__compressed_pair<WebCore::GroupSettings *, std::__1::default_delete<WebCore::GroupSettings> >=^{GroupSettings}}}{unique_ptr<WebCore::CaptionUserPreferences, std::__1::default_delete<WebCore::CaptionUserPreferences> >={__compressed_pair<WebCore::CaptionUserPreferences *, std::__1::default_delete<WebCore::CaptionUserPreferences> >=^{CaptionUserPreferences}}}})a;
 - (void) _visitedURL:(id)awithTitle:(id)bmethod:(id)cwasFailure:(BOOL)d;
 - (id) _itemForURLString:(id)a;
 - (id) itemForURL:(id)a;
 - (void) _sendNotification:(id)aentries:(id)b;
 - (int) historyAgeInDaysLimit;
 - (int) historyItemLimit;
 - (void) removeItems:(id)a;
 - (void) addItems:(id)a;
 - (id) orderedLastVisitedDays;
 - (id) orderedItemsLastVisitedOnDay:(id)a;
 - (BOOL) containsURL:(id)a;
 - (id) allItems;
 - (void) setHistoryAgeInDaysLimit:(int)a;
 - (void) setHistoryItemLimit:(int)a;
 - (BOOL) saveToURL:(id)aerror:(^@)b;
 - (void) timeZoneChanged:(id)a;
 - (BOOL) loadFromURL:(id)aerror:(^@)b;


@end
