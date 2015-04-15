
@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate;
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {

    @"UIView" _clippingView;
    @"UIView" _topBorder;
    Q _selectedSortIndex;
    @"UIKeyboardCandidateGridCollectionViewController" _collectionViewController;
    @"UIKeyboardCandidateSortControl" _scrollViewSortControl;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
}

 - (void) dealloc;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (void) setRenderConfig:(id)a;
 - (void) showCandidateAtIndex:(Q)a;
 - (void) showNextCandidate;
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
 - (void) setVisualStyling:({?=b6b1b1b8b16})a;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) updateForKeyplane:(id)akey:(id)b;
 - (id) candidateList;
 - (Q) gridCollectionViewNumberOfColumns:(id)a;
 - (id) headerViewForCandidateSet:(id)a;
 - (Q) gridCollectionViewSelectedSortMethodIndex:(id)a;
 - (BOOL) isTenKey;
 - (void) updateCollectionViewController;
 - (void) clearCollectionViewController;
 - (id) scrollViewSortControl;
 - (id) collectionViewController;
 - (void) updateCollectionViewController:(BOOL)a;
 - (void) setCollectionViewController:(id)a;
 - (void) setSelectedSortIndex:(Q)a;
 - (void) sortSelectionBarAction:(id)a;
 - (void) setScrollViewSortControl:(id)a;
 - (id) groupedCandidatesFromCandidateSet:(id)aforSortIndex:(Q)b;
 - (void) displayLayer:(id)a;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidateResultSet;
 - (void) addSubview:(id)a;


@end
