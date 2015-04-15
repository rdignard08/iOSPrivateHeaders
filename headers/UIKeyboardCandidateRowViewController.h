
@protocol UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource;
@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource> {

    BOOL _showsHiddenCandidates;
    @"<UIKeyboardCandidateRowViewControllerDelegate>" _delegate;
    @"<UIKeyboardCandidateListDelegate>" _candidateListDelegate;
    @"TIKeyboardCandidateResultSet" _candidateSet;
    Class _cellClass;
}
 + (d) suggestedHeightForCellClass:(Class)a;

 - (void) setDelegate:(id)a;
 - (q) collectionView:(id)anumberOfItemsInSection:(q)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (q) numberOfSectionsInCollectionView:(id)a;
 - (id) collectionView:(id)aviewForSupplementaryElementOfKind:(id)batIndexPath:(id)c;
 - (void) collectionView:(id)adidSelectItemAtIndexPath:(id)b;
 - (Class) cellClass;
 - (d) suggestedHeight;
 - (void) _showCandidateAtIndex:(Q)ascrollCellToVisible:(BOOL)banimated:(BOOL)c;
 - (void) showCandidateAtIndex:(Q)a;
 - (void) _stepSelectedCandidateInDirection:(BOOL)a;
 - (BOOL) showsHiddenCandidates;
 - (void) showNextCandidate;
 - (id) candidateListDelegate;
 - (id) collectionView;
 - (id) candidateSet;
 - (void) setCandidateSet:(id)a;
 - (void) setCandidates:(id)ainlineText:(id)binlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})cmaxX:(d)dlayout:(BOOL)e;
 - (void) setCandidateListDelegate:(id)a;
 - (id) statisticsIdentifier;
 - (void) _reloadCandidates;
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
 - (void) candidatesDidChange;
 - (void) revealHiddenCandidates;
 - (id) initWithCellClass:(Class)a;
 - (void) loadView;
 - ({CGSize=dd}) collectionView:(id)alayout:(id)bsizeForItemAtIndexPath:(id)c;
 - ({CGSize=dd}) sizeOfDummyItemForCollectionView:(id)alayout:(id)b;
 - (void) setShowsHiddenCandidates:(BOOL)a;
 - (void) setCellClass:(Class)a;
 - (id) delegate;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidates;


@end
