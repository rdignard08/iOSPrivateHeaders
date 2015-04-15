
@interface UIWebPaginationInfo : NSObject {

    @"NSObject<WebDocumentView>" _documentView;
    d _scaleFactor;
    {CGSize="width"d"height"d} _layoutSize;
    @"NSArray" _pageRects;
    @"UIWebDocumentView" _webDocumentView;
}
@property (nonatomic, assign, readonly) NSNumber* pageCount;
@property (nonatomic, assign, readonly) NSNumber* lastPageHeight;
@property (nonatomic, retain, readwrite) UIWebDocumentView* webDocumentView;

 - (void) dealloc;
 - (id) initWithDocumentView:(id)ascaleFactor:(d)blayoutSize:({CGSize=dd})cpageRects:(id)d;
 - (void) setWebDocumentView:(id)a;
 - (d) scaleFactor;
 - ({CGSize=dd}) layoutSize;
 - (Q) pageCount;
 - (d) lastPageHeight;
 - ({CGSize=dd}) sizeForPageAtIndex:(q)a;
 - (id) webDocumentView;
 - (id) pageRects;
 - (id) documentView;


@end
