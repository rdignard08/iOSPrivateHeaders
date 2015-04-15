
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
 - (void) setDelegate:(id)a ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (void) collectionView:(id)a didSelectItemAtIndexPath:(id)b ;
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
 - (BOOL) hasNextPage;
 - (BOOL) hasPreviousPage;
 - (void) jumpToCompositions;
 - ({CGSize=dd}) collectionView:(id)a layout:(id)b sizeForItemAtIndexPath:(id)c ;
 - (void) _setRenderConfig:(id)a ;
 - (id) _inheritedRenderConfig;
 - (BOOL) usesCandidateSelection;
 - (void) setUsesCandidateSelection:(BOOL)a ;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a ;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) updatePocketShadowForKeyplane:(id)a ;
 - (void) calculateDummyCellAttributes;
 - (id) candidatesCollectionView;
 - (id) logButton;
 - (id) pocketShadow;
 - (void) setPocketShadow:(id)a ;
 - (void) setDummyCellWidth:(double)a ;
 - (void) setDummyCellCount:(unsigned long long)a ;
 - (void) reloadDataByAppendingAtEnd:(BOOL)a ;
 - (unsigned long long) dummyCellCount;
 - (double) dummyCellWidth;
 - (void) setCandidateResultSet:(id)a ;
 - (void) selectAndScrollToCandidateAtIndexPath:(id)a animated:(BOOL)b ;
 - (void) setCandidatesCollectionView:(id)a ;
 - (void) updateForKeyplane:(id)a key:(id)b ;
 - (id) candidateList;
 - (void) setLogButton:(id)a ;
 - (id) delegate;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidateResultSet;
 - (id) candidates;


@end
