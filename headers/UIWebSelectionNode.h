
@interface UIWebSelectionNode : NSObject {

    UIWebSelectionNode* _fromTopByExpanding;
    UIWebSelectionNode* _fromTopByContracting;
    UIWebSelectionNode* _fromBottomByExpanding;
    UIWebSelectionNode* _fromBottomByContracting;
    UIWebSelectionNode* _fromRightByExpanding;
    UIWebSelectionNode* _fromRightByContracting;
    UIWebSelectionNode* _fromLeftByExpanding;
    UIWebSelectionNode* _fromLeftByContracting;
    UIWebSelectionGraph* _sharedGraph;
    UIWebSelection* _selection;
    BOOL _invalid;
}
@property (atomic, retain, readwrite) UIWebSelection* selection;

 - (void) dealloc;
 - (void) invalidate;
 - (id) selection;
 - (void) setSelection:(id)a ;
 - (id) nodeByMovingEdge:(int)a outwards:(BOOL)b ;
 - (^@) nodeByReferenceFromEdge:(int)a outwards:(BOOL)b ;
 - (id) initWithSelection:(id)a inGraph:(id)b ;
 - (int) oppositeEdge:(int)a ;


@end
