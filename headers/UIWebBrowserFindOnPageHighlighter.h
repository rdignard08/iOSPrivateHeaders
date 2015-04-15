
@protocol UIWebFindOnPageHighlighter;
@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {

    NSMutableArray* _highlightBubbleViews;
    NSArray* _pdfHighlightViews;
    UIView* _highlightHostView;
    UIWebBrowserView* _browserView;
    UIWebPDFViewHandler* _pdfHandler;
    BOOL _zoomToHighlightSelection;
    <UIWebFindOnPageHighlighterDelegate>* _delegate;
    NSString* _searchText;
    unsigned long long _numberOfMatches;
    unsigned long long _highlightedMatchIndex;
}
@property (nonatomic, copy, readonly) NSString* searchText;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readonly) NSNumber* numberOfMatches;
@property (nonatomic, assign, readonly) NSNumber* highlightedMatchIndex;
 + (BOOL) expandedRectsWouldIntersect:(id)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) searchText;
 - (void) clearBrowserView;
 - (id) initWithBrowserView:(id)a;
 - (BOOL) updateHighlightBubbleWobble:(BOOL)a;
 - (id) initWithPDFViewHandler:(id)a;
 - (void) searchWasCancelled:(id)a;
 - (void) search:(id)ahasPartialResults:(id)b;
 - (void) searchDidFinish:(id)a;
 - (void) searchLimitHit:(id)a;
 - (void) searchDidBegin:(id)a;
 - (void) searchDidTimeOut:(id)a;
 - (void) _commonInitialize;
 - (void) _clearHighlightViews;
 - (void) _addContentViewAtIndex:(unsigned long long)awithRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) _setSelectionRect:({CGRect={CGPoint=dd}{CGSize=dd}})atextRects:(id)bcontentImage:(^{CGImage=})ccontentViews:(id)dwobble:(BOOL)e;
 - (void) setSelectionRect:({CGRect={CGPoint=dd}{CGSize=dd}})atextRects:(id)bcontentImage:(^{CGImage=})cwobble:(BOOL)d;
 - (unsigned long long) findOnPageOptions;
 - (BOOL) _updateHighlightedMatchIndex:(BOOL)a;
 - (id) _currentPDFSearchResult;
 - (void) _highlightFindOnPageMatchForPDF:(BOOL)awithPDFHandler:(id)b;
 - (BOOL) _highlightSelection;
 - (void) _highlightFindOnPageMatch:(BOOL)a;
 - (void) setSearchText:(id)amatchLimit:(unsigned long long)b;
 - (void) setSelectionRect:({CGRect={CGPoint=dd}{CGSize=dd}})atextRects:(id)bcontentViews:(id)cwobble:(BOOL)d;
 - (void) highlightNextMatch;
 - (void) highlightPreviousMatch;
 - (unsigned long long) numberOfMatches;
 - (unsigned long long) highlightedMatchIndex;
 - (id) delegate;


@end
