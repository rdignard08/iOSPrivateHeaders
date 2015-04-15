
@protocol NSCopying;
@interface UIPrintFormatter : NSObject <NSCopying> {

    UIPrintPageRenderer _printPageRenderer;
    double _maximumContentHeight;
    double _maximumContentWidth;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInsets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _perPageContentInsets;
    long long _startPage;
    long long _pageCount;
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
 - (long long) pageCount;
 - (void) _setNeedsRecalc;
 - (long long) _recalcPageCount;
 - (void) _recalcIfNecessary;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _pageContentRect:(BOOL)a;
 - (void) removeFromPrintPageRenderer;
 - (void) setMaximumContentWidth:(double)a;
 - (void) setMaximumContentHeight:(double)a;
 - (void) setContentInsets:({UIEdgeInsets=dddd})a;
 - (void) setPerPageContentInsets:({UIEdgeInsets=dddd})a;
 - (void) setPrintPageRenderer:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForPageAtIndex:(long long)a;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforPageAtIndex:(long long)b;
 - (id) printPageRenderer;
 - (double) maximumContentHeight;
 - (double) maximumContentWidth;
 - ({UIEdgeInsets=dddd}) perPageContentInsets;
 - (long long) startPage;
 - (void) setStartPage:(long long)a;
 - (id) init;
 - ({UIEdgeInsets=dddd}) contentInsets;


@end
