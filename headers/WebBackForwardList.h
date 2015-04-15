
@interface WebBackForwardList : NSObject {

    @"WebBackForwardListPrivate" _private;
}
@property (nonatomic, assign, readonly) WebHistoryItem* backItem;
@property (nonatomic, assign, readonly) WebHistoryItem* currentItem;
@property (nonatomic, assign, readonly) WebHistoryItem* forwardItem;
@property (nonatomic, assign, readwrite) NSNumber* capacity;
@property (nonatomic, assign, readonly) NSNumber* backListCount;
@property (nonatomic, assign, readonly) NSNumber* forwardListCount;
 + (void) initialize;

 - (void) removeItem:(id)a;
 - (id) dictionaryRepresentation;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) backItem;
 - (id) currentItem;
 - (void) setToMatchDictionaryRepresentation:(id)a;
 - (id) init;
 - (void) setCapacity:(int)a;
 - (id) initWithBackForwardList:({PassRefPtr<WebCore::BackForwardList>=^{BackForwardList}})a;
 - (void) _close;
 - (void) addItem:(id)a;
 - (BOOL) containsItem:(id)a;
 - (void) goBack;
 - (void) goForward;
 - (void) goToItem:(id)a;
 - (id) forwardItem;
 - (id) backListWithLimit:(int)a;
 - (id) forwardListWithLimit:(int)a;
 - (void) setPageCacheSize:(unsigned long long)a;
 - (unsigned long long) pageCacheSize;
 - (int) backListCount;
 - (int) forwardListCount;
 - (id) itemAtIndex:(int)a;
 - (int) capacity;


@end
