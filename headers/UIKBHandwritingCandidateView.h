
@protocol UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;
@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

    BOOL _usesCandidateSelection;
    <UIKeyboardCandidateListDelegate>* _delegate;
    TIKeyboardCandidateResultSet* _candidateResultSet;
    UIKBCandidateCollectionView* _candidatesCollectionView;
    UIKeyboardCandidatePocketShadow* _pocketShadow;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
    UIKeyboardCandidateLogButton* _logButton;
    unsigned long long _dummyCellCount;
    double _dummyCellWidth;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (long long) collectionView:(id)anumberOfItemsInSection:(long long)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (void) collectionView:(id)adidSelectItemAtIndexPath:(id)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (void) setRenderConfig:(id)a;
 - (void) showCandidateAtIndex:(unsigned long long)a;
 - (void) showNextCandidate;
 - (void) setCandidates:(id)ainlineText:(id)binlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})cmaxX:(double)dlayout:(BOOL)e;
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
 - (unsigned long long) currentIndex;
 - (void) candidateAcceptedAtIndex:(unsigned long long)a;
 - (id) keyboardBehaviors;
 - (unsigned long long) selectedSortIndex;
 - (BOOL) hasNextPage;
 - (BOOL) hasPreviousPage;
 - (void) jumpToCompositions;
 - ({CGSize=dd}) collectionView:(id)alayout:(id)bsizeForItemAtIndexPath:(id)c;
 - (void) _setRenderConfig:(id)a;
 - (id) _inheritedRenderConfig;
 - (BOOL) usesCandidateSelection;
 - (void) setUsesCandidateSelection:(BOOL)a;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) updatePocketShadowForKeyplane:(id)a;
 - (void) calculateDummyCellAttributes;
 - (id) candidatesCollectionView;
 - (id) logButton;
 - (id) pocketShadow;
 - (void) setPocketShadow:(id)a;
 - (void) setDummyCellWidth:(double)a;
 - (void) setDummyCellCount:(unsigned long long)a;
 - (void) reloadDataByAppendingAtEnd:(BOOL)a;
 - (unsigned long long) dummyCellCount;
 - (double) dummyCellWidth;
 - (void) setCandidateResultSet:(id)a;
 - (void) selectAndScrollToCandidateAtIndexPath:(id)aanimated:(BOOL)b;
 - (void) setCandidatesCollectionView:(id)a;
 - (void) updateForKeyplane:(id)akey:(id)b;
 - (id) candidateList;
 - (void) setLogButton:(id)a;
 - (id) delegate;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidateResultSet;
 - (id) candidates;


@end
