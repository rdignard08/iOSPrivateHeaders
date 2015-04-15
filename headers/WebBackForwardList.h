
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
 - (void) setCapacity:(i)a;
 - (id) initWithBackForwardList:({PassRefPtr<WebCore::BackForwardList>=^{BackForwardList}})a;
 - (void) _close;
 - (void) addItem:(id)a;
 - (BOOL) containsItem:(id)a;
 - (void) goBack;
 - (void) goForward;
 - (void) goToItem:(id)a;
 - (id) forwardItem;
 - (id) backListWithLimit:(i)a;
 - (id) forwardListWithLimit:(i)a;
 - (void) setPageCacheSize:(Q)a;
 - (Q) pageCacheSize;
 - (i) backListCount;
 - (i) forwardListCount;
 - (id) itemAtIndex:(i)a;
 - (i) capacity;


@end
