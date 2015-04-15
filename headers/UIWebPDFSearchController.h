
@protocol UIWebPDFSearchOperationDelegate;
@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {

    unsigned long long _resultIndexWhenLimitHit;
    BOOL _notifiedThatSearchBegin;
    unsigned long long _pageIndexWhenLimitHit;
    NSOperationQueue* _searchQueue;
    NSMutableArray* _results;
    NSString* _searchString;
    UIPDFDocument* _documentToSearch;
    NSObject<UIWebPDFSearchControllerDelegate>* searchDelegate;
    unsigned long long startingPageIndex;
    double documentScale;
    unsigned long long resultLimit;
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
 - (double) documentScale;
 - (void) setDocumentToSearch:(id)a ;
 - (void) setDocumentScale:(double)a ;
 - (void) setSearchDelegate:(id)a ;
 - (void) setResultLimit:(unsigned long long)a ;
 - (void) setSearchString:(id)a ;
 - (unsigned long long) resultLimit;
 - (void) searchWasCancelled:(id)a ;
 - (void) search:(id)a hasPartialResults:(id)b ;
 - (void) searchDidFinish:(id)a ;
 - (void) searchLimitHit:(id)a ;
 - (id) documentToSearch;
 - (void) searchDidBegin:(id)a ;
 - (unsigned long long) startingPageIndex;
 - (void) setStartingPageIndex:(unsigned long long)a ;
 - (id) searchDelegate;
 - (BOOL) paused;
 - (unsigned long long) _actualStartingPageIndex;
 - (void) _clearSearchQueue;
 - (void) search:(id)a ;
 - (void) searchDidTimeOut:(id)a ;
 - (BOOL) searching;
 - (id) init;
 - (void) cancel;
 - (void) resume;
 - (void) setResults:(id)a ;
 - (id) searchString;


@end
