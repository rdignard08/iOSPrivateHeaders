
@protocol UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate;
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {

    BOOL _reducedWidth;
    BOOL _showHiddenCandidatesOnly;
    i _position;
    @"TIKeyboardCandidateResultSet" _candidateSet;
    @"NSString" _inlineText;
    d _maxX;
    @"UIKeyboardCandidateGridCollectionViewController" _collectionViewController;
    @"<UIKeyboardCandidateListDelegate>" _candidateListDelegate;
    @"UIKeyboardCandidateSortControl" _sortSelectionBar;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _inlineRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _previousCollapsedFrame;
}

 - (i) position;
 - ({CGSize=dd}) size;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) showCandidateAtIndex:(Q)a;
 - (void) showNextCandidate;
 - (id) candidateListDelegate;
 - (void) candidateListAcceptCandidate:(id)a;
 - (id) candidateSet;
 - (void) setCandidateSet:(id)a;
 - (void) setCandidates:(id)ainlineText:(id)binlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})cmaxX:(d)dlayout:(BOOL)e;
 - (void) setCandidateListDelegate:(id)a;
 - (id) statisticsIdentifier;
 - (void) candidateListSelectionDidChange:(id)a;
 - (BOOL) isExtendedList;
 - (BOOL) isHiddenCandidatesList;
 - (void) setUIKeyboardCandidateListDelegate:(id)a;
 - (BOOL) showCandidate:(id)a;
 - (void) showPreviousCandidate;
 - (void) showNextPage;
 - (void) showPreviousPage;
 - (void) showNextRow;
 - (void) showPreviousRow;
 - (Q) currentIndex;
 - (void) candidateAcceptedAtIndex:(Q)a;
 - (id) keyboardBehaviors;
 - (Q) selectedSortIndex;
 - (void) setCandidates:(id)atype:(i)binlineText:(id)cinlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})dmaxX:(d)elayout:(BOOL)f;
 - (void) setInlineText:(id)a;
 - (BOOL) handleNumberKey:(Q)a;
 - (BOOL) handleTabKeyWithShift:(BOOL)a;
 - (void) candidatesDidChange;
 - (void) revealHiddenCandidates;
 - (id) inlineText;
 - (id) _inheritedRenderConfig;
 - (BOOL) padInlineFloatingViewIsExpanded:(id)a;
 - (void) padInlineFloatingViewExpand:(id)a;
 - (Q) gridCollectionViewNumberOfColumns:(id)a;
 - (Q) gridCollectionViewSelectedSortMethodIndex:(id)a;
 - (BOOL) showHiddenCandidatesOnly;
 - (void) setShowHiddenCandidatesOnly:(BOOL)a;
 - (id) activeCandidateList;
 - (void) candidateListShouldBeDismissed:(id)a;
 - (void) setCandidateSet:(id)ashowHiddenCandidatesOnly:(BOOL)b;
 - (id) collectionViewController;
 - (BOOL) isReducedWidth;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) inlineRect;
 - (void) updateLayerBorderWidth;
 - (BOOL) isAcceptableFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aafterScrollBy:(d)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustedInlineRectFromInlineText:(id)ainlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustedFrameFromDesiredFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atextHeight:(d)b;
 - (d) maxX;
 - (void) setCandidates:(id)atype:(i)binlineText:(id)cinlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})dmaxX:(d)elayout:(BOOL)fshowHiddenCandidatesOnly:(BOOL)g;
 - (void) setInlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setMaxX:(d)a;
 - (void) adjustFrameForInlineText:(id)ainlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})bmaxX:(d)c;
 - (id) sortSelectionBar;
 - (void) expand;
 - (void) sortSelectionBarAction;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) previousCollapsedFrame;
 - (void) setPreviousCollapsedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setPosition:(i)a;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidates;


@end