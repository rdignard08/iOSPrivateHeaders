
@protocol UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate;
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {

    BOOL _reducedWidth;
    BOOL _showHiddenCandidatesOnly;
    int _position;
    TIKeyboardCandidateResultSet* _candidateSet;
    NSString* _inlineText;
    double _maxX;
    UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
    <UIKeyboardCandidateListDelegate>* _candidateListDelegate;
    UIKeyboardCandidateSortControl* _sortSelectionBar;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _inlineRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _previousCollapsedFrame;
}

 - (int) position;
 - ({CGSize=dd}) size;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) showCandidateAtIndex:(unsigned long long)a ;
 - (void) showNextCandidate;
 - (id) candidateListDelegate;
 - (void) candidateListAcceptCandidate:(id)a ;
 - (id) candidateSet;
 - (void) setCandidateSet:(id)a ;
 - (void) setCandidates:(id)a inlineText:(id)b inlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})c maxX:(double)d layout:(BOOL)e ;
 - (void) setCandidateListDelegate:(id)a ;
 - (id) statisticsIdentifier;
 - (void) candidateListSelectionDidChange:(id)a ;
 - (BOOL) isExtendedList;
 - (BOOL) isHiddenCandidatesList;
 - (void) setUIKeyboardCandidateListDelegate:(id)a ;
 - (BOOL) showCandidate:(id)a ;
 - (void) showPreviousCandidate;
 - (void) showNextPage;
 - (void) showPreviousPage;
 - (void) showNextRow;
 - (void) showPreviousRow;
 - (unsigned long long) currentIndex;
 - (void) candidateAcceptedAtIndex:(unsigned long long)a ;
 - (id) keyboardBehaviors;
 - (unsigned long long) selectedSortIndex;
 - (void) setCandidates:(id)a type:(int)b inlineText:(id)c inlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})d maxX:(double)e layout:(BOOL)f ;
 - (void) setInlineText:(id)a ;
 - (BOOL) handleNumberKey:(unsigned long long)a ;
 - (BOOL) handleTabKeyWithShift:(BOOL)a ;
 - (void) candidatesDidChange;
 - (void) revealHiddenCandidates;
 - (id) inlineText;
 - (id) _inheritedRenderConfig;
 - (BOOL) padInlineFloatingViewIsExpanded:(id)a ;
 - (void) padInlineFloatingViewExpand:(id)a ;
 - (unsigned long long) gridCollectionViewNumberOfColumns:(id)a ;
 - (unsigned long long) gridCollectionViewSelectedSortMethodIndex:(id)a ;
 - (BOOL) showHiddenCandidatesOnly;
 - (void) setShowHiddenCandidatesOnly:(BOOL)a ;
 - (id) activeCandidateList;
 - (void) candidateListShouldBeDismissed:(id)a ;
 - (void) setCandidateSet:(id)a showHiddenCandidatesOnly:(BOOL)b ;
 - (id) collectionViewController;
 - (BOOL) isReducedWidth;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) inlineRect;
 - (void) updateLayerBorderWidth;
 - (BOOL) isAcceptableFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a afterScrollBy:(double)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustedInlineRectFromInlineText:(id)a inlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustedFrameFromDesiredFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a textHeight:(double)b ;
 - (double) maxX;
 - (void) setCandidates:(id)a type:(int)b inlineText:(id)c inlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})d maxX:(double)e layout:(BOOL)f showHiddenCandidatesOnly:(BOOL)g ;
 - (void) setInlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setMaxX:(double)a ;
 - (void) adjustFrameForInlineText:(id)a inlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})b maxX:(double)c ;
 - (id) sortSelectionBar;
 - (void) expand;
 - (void) sortSelectionBarAction;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) previousCollapsedFrame;
 - (void) setPreviousCollapsedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setPosition:(int)a ;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidates;


@end
