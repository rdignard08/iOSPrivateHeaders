
@interface UIInlineCandidateTextView : UIView {

    i m_type;
    i m_edgeType;
    BOOL m_animating;
    @"NSMutableArray" _candidateCellArray;
    @"NSArray" _candidates;
    id _target;
    SEL _action;
    Q _selectedItem;
    @"_UIInlineCandidateCell" _currentlyPushedItem;
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
 - (void) setSelectedItem:(Q)a;
 - (void) setAnimating:(BOOL)a;
 - (i) textEffectsVisibilityLevel;
 - (void) setEdgeType:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _calculateRectForExpandedHitRegion;
 - (Q) numberOfShownItems;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acandidates:(id)btype:(i)cmaxScreenWidth:(d)dhasExtensionCandidates:(BOOL)e;
 - (i) edgeType;
 - (void) setTarget:(id)aaction:(SEL)b;
 - (Q) selectedItem;
 - (d) _layoutCandidates:(id)amaxCount:(i)bheight:(d)cmaxScreenWidth:(d)dhasExtensionCandidates:(BOOL)e;
 - (void) _cellSelected:(id)a;
 - (id) findCell:({CGPoint=dd})a;
 - (void) redrawArrow;
 - (BOOL) _arrowHighlighted;
 - (void) showHighlightedArrow;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
