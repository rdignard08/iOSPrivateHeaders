
@protocol UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate;
@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {

    @"<UIKeyboardCandidateListDelegate>" _candidateListDelegate;
    q _selectedIndex;
    BOOL _justDeleted;
    @"_UIDynamicCaretInput" _inputView;
    @"_UIDynamicCaretAlternatives" _alternativesView;
    @"_UIDynamicCaretNoContentView" _noContentView;
    @"_UIDynamicCaretHelpLabel" _helpLabel;
    @"TIKeyboardCandidateResultSet" _candidateSet;
}

 - (BOOL) isActive;
 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) didMoveToSuperview;
 - (id) backgroundImage;
 - (void) showCandidateAtIndex:(Q)a;
 - (void) showNextCandidate;
 - (id) candidateSet;
 - (void) setCandidateSet:(id)a;
 - (void) setCandidates:(id)ainlineText:(id)binlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})cmaxX:(d)dlayout:(BOOL)e;
 - (id) statisticsIdentifier;
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
 - (id) inputView;
 - (void) setInputView:(id)a;
 - (void) setIsActive:(BOOL)a;
 - (void) setAlternativesView:(id)a;
 - (void) setNoContentView:(id)a;
 - (void) setHelpLabel:(id)a;
 - (id) alternativesView;
 - (id) noContentView;
 - (id) helpLabel;
 - (void) displayAlternatives:(BOOL)a;
 - (void) setDocumentHasContent:(BOOL)a;
 - (void) alternativeTappedAtIndex:(q)a;
 - (BOOL) isDeleteCandidate:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;


@end