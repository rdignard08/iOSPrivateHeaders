
@protocol UIWebPDFSearchOperationDelegate;
@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {

    Q _resultIndexWhenLimitHit;
    BOOL _notifiedThatSearchBegin;
    Q _pageIndexWhenLimitHit;
    @"NSOperationQueue" _searchQueue;
    @"NSMutableArray" _results;
    @"NSString" _searchString;
    @"UIPDFDocument" _documentToSearch;
    @"NSObject<UIWebPDFSearchControllerDelegate>" searchDelegate;
    Q startingPageIndex;
    d documentScale;
    Q resultLimit;
}
@property (nonatomic, assign, readwrite) NSNumber* searchDelegate;
@property (nonatomic, retain, readwrite) UIPDFDocument* documentToSearch;
@property (nonatomic, assign, readwrite) NSNumber* documentScale;
@property (nonatomic, assign, readwrite) NSNumber* startingPageIndex;
@property (nonatomic, assign, readwrite) NSNumber* resultLimit;
@property (nonatomic, assign, readonly) NSNumber* searching;
@property (nonatomic, assign, readonly) NSNumber* paused;
@property (nonatomic, retain, readwrite) NSArray* results;
@property (nonatomic, retain, readwrite) NSString* searchString;

 - (void) pause;
 - (void) dealloc;
 - (id) results;
 - (d) documentScale;
 - (void) setDocumentToSearch:(id)a;
 - (void) setDocumentScale:(d)a;
 - (void) setSearchDelegate:(id)a;
 - (void) setResultLimit:(Q)a;
 - (void) setSearchString:(id)a;
 - (Q) resultLimit;
 - (void) searchWasCancelled:(id)a;
 - (void) search:(id)ahasPartialResults:(id)b;
 - (void) searchDidFinish:(id)a;
 - (void) searchLimitHit:(id)a;
 - (id) documentToSearch;
 - (void) searchDidBegin:(id)a;
 - (Q) startingPageIndex;
 - (void) setStartingPageIndex:(Q)a;
 - (id) searchDelegate;
 - (BOOL) paused;
 - (Q) _actualStartingPageIndex;
 - (void) _clearSearchQueue;
 - (void) search:(id)a;
 - (void) searchDidTimeOut:(id)a;
 - (BOOL) searching;
 - (id) init;
 - (void) cancel;
 - (void) resume;
 - (void) setResults:(id)a;
 - (id) searchString;


@end
