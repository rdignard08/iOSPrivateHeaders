
@interface UIWebPaginationInfo : NSObject {

    NSObject<WebDocumentView>* _documentView;
    double _scaleFactor;
    {CGSize="width"d"height"d} _layoutSize;
    NSArray* _pageRects;
    UIWebDocumentView* _webDocumentView;
}
@property (nonatomic, assign, readonly) NSNumber* pageCount;
@property (nonatomic, assign, readonly) NSNumber* lastPageHeight;
@property (nonatomic, retain, readwrite) UIWebDocumentView* webDocumentView;

 - (void) dealloc;
 - (id) initWithDocumentView:(id)ascaleFactor:(double)blayoutSize:({CGSize=dd})cpageRects:(id)d;
 - (void) setWebDocumentView:(id)a;
 - (double) scaleFactor;
 - ({CGSize=dd}) layoutSize;
 - (unsigned long long) pageCount;
 - (double) lastPageHeight;
 - ({CGSize=dd}) sizeForPageAtIndex:(long long)a;
 - (id) webDocumentView;
 - (id) pageRects;
 - (id) documentView;


@end
