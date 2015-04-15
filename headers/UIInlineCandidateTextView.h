
@interface UIInlineCandidateTextView : UIView {

    int m_type;
    int m_edgeType;
    BOOL m_animating;
    NSMutableArray* _candidateCellArray;
    NSArray* _candidates;
    id _target;
    SEL _action;
    unsigned long long _selectedItem;
    _UIInlineCandidateCell* _currentlyPushedItem;
    BOOL _showingArrow;
    BOOL _arrowHighlighted;
    BOOL _phraseEditable;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) setSelectedItem:(unsigned long long)a ;
 - (void) setAnimating:(BOOL)a ;
 - (int) textEffectsVisibilityLevel;
 - (void) setEdgeType:(int)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _calculateRectForExpandedHitRegion;
 - (unsigned long long) numberOfShownItems;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a candidates:(id)b type:(int)c maxScreenWidth:(double)d hasExtensionCandidates:(BOOL)e ;
 - (int) edgeType;
 - (void) setTarget:(id)a action:(SEL)b ;
 - (unsigned long long) selectedItem;
 - (double) _layoutCandidates:(id)a maxCount:(int)b height:(double)c maxScreenWidth:(double)d hasExtensionCandidates:(BOOL)e ;
 - (void) _cellSelected:(id)a ;
 - (id) findCell:({CGPoint=dd})a ;
 - (void) redrawArrow;
 - (BOOL) _arrowHighlighted;
 - (void) showHighlightedArrow;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
