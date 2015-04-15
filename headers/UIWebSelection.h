
@interface UIWebSelection : NSObject {

    @"UIWebDocumentView" _documentView;
    @"<UIWebSelectionBlock>" _base;
    @"<UIWebSelectionBlock>" _extent;
    {CGSize="width"d"height"d} _desiredSize;
    @"UITextSelection" _textSelection;
}
@property (nonatomic, assign, readonly) UIWebDocumentView* documentView;
@property (nonatomic, assign, readonly) UITextSelection* textSelection;
@property (nonatomic, assign, readonly) NSNumber* valid;
@property (nonatomic, assign, readonly) NSNumber* boundingRect;
@property (nonatomic, assign, readwrite) NSNumber* desiredSize;
@property (nonatomic, assign, readonly, isTextOnly) NSNumber* textOnly;
@property (nonatomic, retain, readwrite) NSNumber* base;
@property (nonatomic, retain, readwrite) NSNumber* extent;

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) setSelectionWithPoint:({CGPoint=dd})a;
 - (void) selectionChanged;
 - (id) textSelection;
 - (id) textSelectionRects;
 - (void) setSelectionWithPoint:({CGPoint=dd})aignoringLargeBlocks:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRect;
 - (BOOL) isTextOnly;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingTextSelectionRectAndInsideFixedPosition:(^i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectAndInsideFixedPosition:(^i)a;
 - (BOOL) blockContainsPoint:({CGPoint=dd})a;
 - (id) base;
 - (void) applySelectionToWebDocumentView;
 - (void) setBase:(id)a;
 - (void) setExtent:(id)a;
 - (id) blockAtPoint:({CGPoint=dd})a;
 - ({CGSize=dd}) desiredSize;
 - (id) asDomRange;
 - (void) shrinkSelectionFromPoint:({CGPoint=dd})atowardsPoint:({CGPoint=dd})bwithNewRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) growSelectionTowardsPoint:({CGPoint=dd})a;
 - (void) useBlock;
 - (double) distanceBetweenFirstRect:({CGRect={CGPoint=dd}{CGSize=dd}})asecond:({CGRect={CGPoint=dd}{CGSize=dd}})bedge:(int)c;
 - (id) duplicate;
 - (void) setDesiredSize:({CGSize=dd})a;
 - (BOOL) tryToShrinkToBaseAndExtent;
 - (BOOL) isEqualToSelection:(id)a;
 - (void) growFromEdge:(int)a;
 - (void) shrinkFromEdge:(int)a;
 - (id) domDocument;
 - (id) blockOfSameWidthAtPoint:({CGPoint=dd})a;
 - (id) textRepresentation;
 - (void) adjustSelectionFromPoint:({CGPoint=dd})atowardsPoint:({CGPoint=dd})bwithNewRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) moveEdge:(int)aoutwards:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingTextSelectionRect;
 - (BOOL) valid;
 - (id) webFrame;
 - (id) webView;
 - (id) webArchive;
 - (id) extent;
 - (id) elementAtPoint:({CGPoint=dd})a;
 - (id) initWithDocumentView:(id)a;
 - (id) documentView;


@end
