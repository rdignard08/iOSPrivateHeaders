
@protocol NSCopying;
@interface UIPrintFormatter : NSObject <NSCopying> {

    @"UIPrintPageRenderer" _printPageRenderer;
    d _maximumContentHeight;
    d _maximumContentWidth;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInsets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _perPageContentInsets;
    q _startPage;
    q _pageCount;
    BOOL _needsRecalc;
}
@property (nonatomic, assign, readwrite) UIPrintPageRenderer* printPageRenderer;
@property (nonatomic, assign, readwrite) NSNumber* maximumContentHeight;
@property (nonatomic, assign, readwrite) NSNumber* maximumContentWidth;
@property (nonatomic, assign, readwrite) NSNumber* contentInsets;
@property (nonatomic, assign, readwrite) NSNumber* perPageContentInsets;
@property (nonatomic, assign, readwrite) NSNumber* startPage;
@property (nonatomic, assign, readonly) NSNumber* pageCount;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (q) pageCount;
 - (void) _setNeedsRecalc;
 - (q) _recalcPageCount;
 - (void) _recalcIfNecessary;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _pageContentRect:(BOOL)a;
 - (void) removeFromPrintPageRenderer;
 - (void) setMaximumContentWidth:(d)a;
 - (void) setMaximumContentHeight:(d)a;
 - (void) setContentInsets:({UIEdgeInsets=dddd})a;
 - (void) setPerPageContentInsets:({UIEdgeInsets=dddd})a;
 - (void) setPrintPageRenderer:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(q)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(q)b;
 - (id) printPageRenderer;
 - (d) maximumContentHeight;
 - (d) maximumContentWidth;
 - ({UIEdgeInsets=dddd}) perPageContentInsets;
 - (q) startPage;
 - (void) setStartPage:(q)a;
 - (id) init;
 - ({UIEdgeInsets=dddd}) contentInsets;


@end
