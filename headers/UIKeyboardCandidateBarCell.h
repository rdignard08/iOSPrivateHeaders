
@protocol UIKBCacheableView;
@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {

    BOOL _beginsFirstPage;
    BOOL _endsLastPage;
    BOOL _isAtLeftEdge;
    @"UIKBThemedView" _themedView;
    @"UILabel" _label;
    @"NSString" _candidateText;
}
 + (id) reuseIdentifier;
 + (double) widthForCandidateText:(id)a;
 + ({UIEdgeInsets=dddd}) cacheInsets;
 + (BOOL) drawsSideBorders;
 + (id) textColorWithHighlight:(BOOL)awhiteText:(BOOL)b;
 + (BOOL) highlightAffectsBackground;
 + (id) font;

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) setHighlighted:(BOOL)a;
 - (void) prepareForReuse;
 - (void) setSelected:(BOOL)a;
 - (void) setLabel:(id)a;
 - (void) _setRenderConfig:(id)a;
 - (id) cacheKey;
 - (double) cachedWidth;
 - (id) cacheKeysForRenderFlags:(id)a;
 - (BOOL) cacheDeferable;
 - (BOOL) keepNonPersistent;
 - (void) setThemedView:(id)a;
 - (id) themedView;
 - (void) updateLabels;
 - (void) applyLayoutAttributes:(id)a;
 - (void) updateIsAtLeftEdgeState;
 - (void) setBeginsFirstPage:(BOOL)a;
 - (void) setEndsLastPage:(BOOL)a;
 - (BOOL) beginsFirstPage;
 - (BOOL) endsLastPage;
 - (void) setCandidateText:(id)a;
 - (id) candidateText;
 - (BOOL) isAtLeftEdge;
 - (void) setIsAtLeftEdge:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) displayLayer:(id)a;
 - (id) label;
 - (void) setCandidate:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
