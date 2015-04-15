
@interface UIInlineCandidateTextView : UIView {

    int m_type;
    int m_edgeType;
    BOOL m_animating;
    NSMutableArray _candidateCellArray;
    NSArray _candidates;
    id _target;
    SEL _action;
    unsigned long long _selectedItem;
    _UIInlineCandidateCell _currentlyPushedItem;
    BOOL _showingArrow;
    BOOL _arrowHighlighted;
    BOOL _phraseEditable;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setSelectedItem:(unsigned long long)a;
 - (void) setAnimating:(BOOL)a;
 - (int) textEffectsVisibilityLevel;
 - (void) setEdgeType:(int)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _calculateRectForExpandedHitRegion;
 - (unsigned long long) numberOfShownItems;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acandidates:(id)btype:(int)cmaxScreenWidth:(double)dhasExtensionCandidates:(BOOL)e;
 - (int) edgeType;
 - (void) setTarget:(id)aaction:(SEL)b;
 - (unsigned long long) selectedItem;
 - (double) _layoutCandidates:(id)amaxCount:(int)bheight:(double)cmaxScreenWidth:(double)dhasExtensionCandidates:(BOOL)e;
 - (void) _cellSelected:(id)a;
 - (id) findCell:({CGPoint=dd})a;
 - (void) redrawArrow;
 - (BOOL) _arrowHighlighted;
 - (void) showHighlightedArrow;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
