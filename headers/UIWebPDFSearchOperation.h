
@interface UIWebPDFSearchOperation : NSOperation {

    NSMutableArray* _results;
    unsigned long long _pageIndex;
    unsigned long long _numberOfResultsToSkip;
    unsigned long long _totalResultsCount;
    unsigned long long _currentPageResultCount;
    BOOL _complete;
    unsigned long long startingPageIndex;
    UIPDFDocument* documentToSearch;
    NSObject<UIWebPDFSearchOperationDelegate>* searchDelegate;
    double documentScale;
    NSString* searchString;
    unsigned long long resultLimit;
}

 - (void) main;
 - (void) dealloc;
 - (double) documentScale;
 - (void) setDocumentToSearch:(id)a;
 - (void) setDocumentScale:(double)a;
 - (void) setSearchDelegate:(id)a;
 - (unsigned long long) currentPageIndex;
 - (void) setResultLimit:(unsigned long long)a;
 - (void) setSearchString:(id)a;
 - (unsigned long long) resultLimit;
 - (BOOL) _hitSearchLimit;
 - (^{__CTFont=}) _fontWithPDFFont:(^{CGPDFFont=})asize:(double)b;
 - (id) documentToSearch;
 - (id) sanitizedAttributedStringForAttributedString:(id)a;
 - (void) _search;
 - (void) _notifyDelegateOfStatus;
 - (unsigned long long) currentPageResultCount;
 - (unsigned long long) startingPageIndex;
 - (void) setStartingPageIndex:(unsigned long long)a;
 - (id) searchDelegate;
 - (unsigned long long) numberOfResultsToSkip;
 - (void) setNumberOfResultsToSkip:(unsigned long long)a;
 - (id) init;
 - (void) cancel;
 - (id) searchString;


@end
