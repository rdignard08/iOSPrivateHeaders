
@protocol NSCopying;
@interface WebHistoryItem : NSObject <NSCopying> {

    @"WebHistoryItemPrivate" _private;
}
@property (nonatomic, copy, readonly) NSString* originalURLString;
@property (nonatomic, copy, readonly) NSString* URLString;
@property (nonatomic, copy, readonly) NSString* title;
@property (nonatomic, assign, readonly) NSNumber* lastVisitedTimeInterval;
@property (nonatomic, copy, readwrite) NSString* alternateTitle;
 + (void) initialize;
 + (id) entryWithURL:(id)a;

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - (id) dictionaryRepresentation;
 - (id) target;
 - (id) title;
 - (void) setTitle:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (f) _scale;
 - (BOOL) _scaleIsInitial;
 - (BOOL) lastVisitWasFailure;
 - (void) _setScrollPoint:({CGPoint=dd})a;
 - (void) _setScale:(f)aisInitial:(BOOL)b;
 - ({CGPoint=dd}) _scrollPoint;
 - (id) init;
 - (id) URL;
 - (id) dictionaryRepresentationIncludingChildren:(BOOL)a;
 - (id) initFromDictionaryRepresentation:(id)a;
 - ({CGPoint=dd}) scrollPoint;
 - (void) setViewState:(id)a;
 - (d) lastVisitedTimeInterval;
 - (void) _visitedWithTitle:(id)a;
 - (id) initWithURLString:(id)atitle:(id)blastVisitedTimeInterval:(d)c;
 - (id) URLString;
 - (id) initWithWebCoreHistoryItem:({PassRefPtr<WebCore::HistoryItem>=^{HistoryItem}})a;
 - (id) initWithURL:(id)atitle:(id)b;
 - (id) initWithURLString:(id)atitle:(id)bdisplayTitle:(id)clastVisitedTimeInterval:(d)d;
 - (void) _setViewportArguments:(id)a;
 - (id) originalURLString;
 - (void) setAlternateTitle:(id)a;
 - (id) alternateTitle;
 - (id) initWithURL:(id)atarget:(id)bparent:(id)ctitle:(id)d;
 - (id) _viewportArguments;
 - (id) _sharedLinkUniqueIdentifier;
 - (BOOL) isTargetItem;
 - (id) RSSFeedReferrer;
 - (void) setRSSFeedReferrer:(id)a;
 - (id) targetItem;
 - (id) _transientPropertyForKey:(id)a;
 - (void) _setTransientProperty:(id)aforKey:(id)b;
 - (id) _redirectURLs;
 - (I) _bookmarkID;
 - (void) _setBookmarkID:(I)a;
 - (void) _setSharedLinkUniqueIdentifier:(id)a;
 - (BOOL) _isInPageCache;
 - (BOOL) _hasCachedPageExpired;
 - (id) children;


@end