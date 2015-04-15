
@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate;
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {

    UIView* _clippingView;
    UIView* _topBorder;
    unsigned long long _selectedSortIndex;
    UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
    UIKeyboardCandidateSortControl* _scrollViewSortControl;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
}

 - (void) dealloc;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - (void) setRenderConfig:(id)a ;
 - (void) showCandidateAtIndex:(unsigned long long)a ;
 - (void) showNextCandidate;
 - (void) setCandidates:(id)a inlineText:(id)b inlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})c maxX:(double)d layout:(BOOL)e ;
 - (id) statisticsIdentifier;
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
 - (void) setVisualStyling:({?=b6b1b1b8b16})a ;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) updateForKeyplane:(id)a key:(id)b ;
 - (id) candidateList;
 - (unsigned long long) gridCollectionViewNumberOfColumns:(id)a ;
 - (id) headerViewForCandidateSet:(id)a ;
 - (unsigned long long) gridCollectionViewSelectedSortMethodIndex:(id)a ;
 - (BOOL) isTenKey;
 - (void) updateCollectionViewController;
 - (void) clearCollectionViewController;
 - (id) scrollViewSortControl;
 - (id) collectionViewController;
 - (void) updateCollectionViewController:(BOOL)a ;
 - (void) setCollectionViewController:(id)a ;
 - (void) setSelectedSortIndex:(unsigned long long)a ;
 - (void) sortSelectionBarAction:(id)a ;
 - (void) setScrollViewSortControl:(id)a ;
 - (id) groupedCandidatesFromCandidateSet:(id)a forSortIndex:(unsigned long long)b ;
 - (void) displayLayer:(id)a ;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidateResultSet;
 - (void) addSubview:(id)a ;


@end
