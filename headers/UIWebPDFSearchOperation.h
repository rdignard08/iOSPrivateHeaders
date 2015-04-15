
@interface UIWebPDFSearchOperation : NSOperation {

    @"NSMutableArray" _results;
    Q _pageIndex;
    Q _numberOfResultsToSkip;
    Q _totalResultsCount;
    Q _currentPageResultCount;
    BOOL _complete;
    Q startingPageIndex;
    @"UIPDFDocument" documentToSearch;
    @"NSObject<UIWebPDFSearchOperationDelegate>" searchDelegate;
    d documentScale;
    @"NSString" searchString;
    Q resultLimit;
}

 - (void) main;
 - (void) dealloc;
 - (d) documentScale;
 - (void) setDocumentToSearch:(id)a;
 - (void) setDocumentScale:(d)a;
 - (void) setSearchDelegate:(id)a;
 - (Q) currentPageIndex;
 - (void) setResultLimit:(Q)a;
 - (void) setSearchString:(id)a;
 - (Q) resultLimit;
 - (BOOL) _hitSearchLimit;
 - (^{__CTFont=}) _fontWithPDFFont:(^{CGPDFFont=})asize:(d)b;
 - (id) documentToSearch;
 - (id) sanitizedAttributedStringForAttributedString:(id)a;
 - (void) _search;
 - (void) _notifyDelegateOfStatus;
 - (Q) currentPageResultCount;
 - (Q) startingPageIndex;
 - (void) setStartingPageIndex:(Q)a;
 - (id) searchDelegate;
 - (Q) numberOfResultsToSkip;
 - (void) setNumberOfResultsToSkip:(Q)a;
 - (id) init;
 - (void) cancel;
 - (id) searchString;


@end
