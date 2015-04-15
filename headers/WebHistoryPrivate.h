
@interface WebHistoryPrivate : NSObject {

    @"NSMutableDictionary" _entriesByURL;
    {unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > >="__ptr_"{__compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > >="__first_"^{HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >}}} _entriesByDate;
    @"NSMutableArray" _orderedLastVisitedDays;
    BOOL itemLimitSet;
    i itemLimit;
    BOOL ageInDaysLimitSet;
    i ageInDaysLimit;
}
 + (void) initialize;

 - (BOOL) removeItem:(id)a;
 - (BOOL) removeAllItems;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) finalize;
 - (id) data;
 - (id) init;
 - (id) itemForURL:(id)a;
 - (BOOL) findKey:(^q)aforDay:(d)b;
 - (BOOL) removeItemFromDateCaches:(id)a;
 - (void) insertItem:(id)aforDateKey:(q)b;
 - (void) addItemToDateCaches:(id)a;
 - (BOOL) removeItemForURLString:(id)a;
 - (BOOL) addItem:(id)adiscardDuplicate:(BOOL)b;
 - (id) itemForURLString:(id)a;
 - (i) historyAgeInDaysLimit;
 - (i) historyItemLimit;
 - (id) ageLimitDate;
 - (BOOL) loadHistoryGutsFromURL:(id)asavedItemsCount:(^i)bcollectDiscardedItemsInto:(id)cerror:(^@)d;
 - (id) visitedURL:(id)awithTitle:(id)b;
 - (void) rebuildHistoryByDayIfNeeded:(id)a;
 - (BOOL) removeItems:(id)a;
 - (void) addItems:(id)a;
 - (id) orderedLastVisitedDays;
 - (id) orderedItemsLastVisitedOnDay:(id)a;
 - (BOOL) containsURL:(id)a;
 - (id) allItems;
 - (void) setHistoryAgeInDaysLimit:(i)a;
 - (void) setHistoryItemLimit:(i)a;
 - (BOOL) loadFromURL:(id)acollectDiscardedItemsInto:(id)berror:(^@)c;
 - (BOOL) saveToURL:(id)aerror:(^@)b;
 - (void) addVisitedLinksToPageGroup:(^{PageGroup={HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >={HashTable<const char *, WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >, WTF::PtrHash<const char *>, WTF::HashMap<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > >, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > > >::KeyValuePairTraits, WTF::HashTraits<const char *> >=^{KeyValuePair<const char *, std::__1::unique_ptr<WebCore::Supplement<WebCore::PageGroup>, std::__1::default_delete<WebCore::Supplement<WebCore::PageGroup> > > >}iiii}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{HashSet<WebCore::Page *, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> >={HashTable<WebCore::Page *, WebCore::Page *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> >=^^{Page}iiii}}{RefPtr<WebCore::VisitedLinkStore>=^{VisitedLinkStore}}{HashSet<unsigned long long, WebCore::LinkHashHash, WTF::HashTraits<unsigned long long> >={HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WebCore::LinkHashHash, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> >=^Qiiii}}BI{RefPtr<WebCore::StorageNamespace>=^{StorageNamespace}}{HashMap<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace>, WebCore::SecurityOriginHash, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> >, WTF::HashTraits<WTF::RefPtr<WebCore::StorageNamespace> > >={HashTable<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> > >, WebCore::SecurityOriginHash, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> >, WTF::HashTraits<WTF::RefPtr<WebCore::StorageNamespace> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin> > >=^{KeyValuePair<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::RefPtr<WebCore::StorageNamespace> >}iiii}}{RefPtr<WebCore::UserContentController>=^{UserContentController}}{unique_ptr<WebCore::GroupSettings, std::__1::default_delete<WebCore::GroupSettings> >={__compressed_pair<WebCore::GroupSettings *, std::__1::default_delete<WebCore::GroupSettings> >=^{GroupSettings}}}{unique_ptr<WebCore::CaptionUserPreferences, std::__1::default_delete<WebCore::CaptionUserPreferences> >={__compressed_pair<WebCore::CaptionUserPreferences *, std::__1::default_delete<WebCore::CaptionUserPreferences> >=^{CaptionUserPreferences}}}})a;


@end
