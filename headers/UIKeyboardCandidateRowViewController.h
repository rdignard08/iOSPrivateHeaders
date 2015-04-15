
@protocol UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource;
@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource> {

    BOOL _showsHiddenCandidates;
    <UIKeyboardCandidateRowViewControllerDelegate>* _delegate;
    <UIKeyboardCandidateListDelegate>* _candidateListDelegate;
    TIKeyboardCandidateResultSet* _candidateSet;
    Class _cellClass;
}
 + (double) suggestedHeightForCellClass:(Class)a;

 - (void) setDelegate:(id)a;
 - (long long) collectionView:(id)anumberOfItemsInSection:(long long)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (long long) numberOfSectionsInCollectionView:(id)a;
 - (id) collectionView:(id)aviewForSupplementaryElementOfKind:(id)batIndexPath:(id)c;
 - (void) collectionView:(id)adidSelectItemAtIndexPath:(id)b;
 - (Class) cellClass;
 - (double) suggestedHeight;
 - (void) _showCandidateAtIndex:(unsigned long long)ascrollCellToVisible:(BOOL)banimated:(BOOL)c;
 - (void) showCandidateAtIndex:(unsigned long long)a;
 - (void) _stepSelectedCandidateInDirection:(BOOL)a;
 - (BOOL) showsHiddenCandidates;
 - (void) showNextCandidate;
 - (id) candidateListDelegate;
 - (id) collectionView;
 - (id) candidateSet;
 - (void) setCandidateSet:(id)a;
 - (void) setCandidates:(id)ainlineText:(id)binlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})cmaxX:(double)dlayout:(BOOL)e;
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
 - (unsigned long long) currentIndex;
 - (void) candidateAcceptedAtIndex:(unsigned long long)a;
 - (id) keyboardBehaviors;
 - (unsigned long long) selectedSortIndex;
 - (void) setCandidates:(id)atype:(int)binlineText:(id)cinlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})dmaxX:(double)elayout:(BOOL)f;
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
