
@interface UITextSelection : NSObject {

    UIResponder<UITextInputPrivate> _document;
    long long _granularity;
    UITextRange _selectedRange;
    UITextRange _base;
    UITextRange _initialExtent;
    BOOL _isCommitting;
}
@property (nonatomic, assign, readonly) NSNumber* document;
@property (nonatomic, retain, readwrite) UITextRange* selectedRange;
@property (nonatomic, assign, readwrite) NSNumber* granularity;
@property (nonatomic, assign, readonly) NSNumber* isCommitting;
@property (nonatomic, retain, readwrite) UITextRange* base;
@property (nonatomic, retain, readwrite) UITextRange* initialExtent;
@property (nonatomic, assign, readonly, getter=_domRange) DOMRange* domRange;

 - (void) dealloc;
 - (void) invalidate;
 - (void) setSelectionWithPoint:({CGPoint=dd})a;
 - (void) setSelectedRange:(id)a;
 - (void) selectionChanged;
 - (void) selectAll;
 - (void) clearSelection;
 - (void) collapseSelection;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRect;
 - (BOOL) hasEditableSelection;
 - (long long) granularity;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectAtEndOfDocument;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectAtBeginOfDocument;
 - (id) selectionRects;
 - (void) alterSelection:({CGPoint=dd})agranularity:(long long)b;
 - (void) setGranularity:(long long)a;
 - (void) setRangedSelectionBaseToCurrentSelection;
 - (void) clearRangedSelectionInitialExtent;
 - (void) setRangedSelectionWithExtentPoint:({CGPoint=dd})a;
 - (void) moveCaretToBoundaryOfWhitespaceOrLine;
 - (BOOL) pointAtEndOfLine:({CGPoint=dd})a;
 - (id) wordContainingCaretSelection;
 - (id) _domRange;
 - (void) setSelectionWithFirstPoint:({CGPoint=dd})asecondPoint:({CGPoint=dd})b;
 - (BOOL) setRangedSelectionExtentPoint:({CGPoint=dd})abaseIsStart:(BOOL)b;
 - (void) smartExtendRangedSelection:(int)adownstream:(BOOL)b;
 - (void) setRangedSelectionBaseToCurrentSelectionStart;
 - (void) setRangedSelectionInitialExtentToCurrentSelectionEnd;
 - (void) setRangedSelectionBaseToCurrentSelectionEnd;
 - (void) setRangedSelectionInitialExtentToCurrentSelectionStart;
 - (void) aggressivelyExpandSelectionToWordContainingCaretSelection;
 - (BOOL) setRangedSelectionExtentPoint:({CGPoint=dd})abaseIsStart:(BOOL)ballowFlipping:(BOOL)c;
 - (BOOL) isCommitting;
 - (id) initWithDocument:(id)a;
 - ({CGPoint=dd}) clipPoint:({CGPoint=dd})ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (id) base;
 - (void) setBase:(id)a;
 - (void) setInitialExtent:(id)a;
 - (id) initialExtent;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) closestCaretRectForPoint:({CGPoint=dd})ainSelection:(BOOL)b;
 - (unsigned long long) offsetInMarkedText;
 - (BOOL) pointAtStartOfLine:({CGPoint=dd})a;
 - (void) commit;
 - (id) selectedText;
 - (id) selectedRange;
 - (id) document;


@end
