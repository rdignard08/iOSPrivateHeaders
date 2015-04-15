
@protocol UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource;
@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource> {

    BOOL _showsHiddenCandidates;
    <UIKeyboardCandidateRowViewControllerDelegate>* _delegate;
    <UIKeyboardCandidateListDelegate>* _candidateListDelegate;
    TIKeyboardCandidateResultSet* _candidateSet;
    Class _cellClass;
}
 + (double) suggestedHeightForCellClass:(Class)a;

 - (void) setDelegate:(id)a ;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInCollectionView:(id)a ;
 - (id) collectionView:(id)a viewForSupplementaryElementOfKind:(id)b atIndexPath:(id)c ;
 - (void) collectionView:(id)a didSelectItemAtIndexPath:(id)b ;
 - (Class) cellClass;
 - (double) suggestedHeight;
 - (void) _showCandidateAtIndex:(unsigned long long)a scrollCellToVisible:(BOOL)b animated:(BOOL)c ;
 - (void) showCandidateAtIndex:(unsigned long long)a ;
 - (void) _stepSelectedCandidateInDirection:(BOOL)a ;
 - (BOOL) showsHiddenCandidates;
 - (void) showNextCandidate;
 - (id) candidateListDelegate;
 - (id) collectionView;
 - (id) candidateSet;
 - (void) setCandidateSet:(id)a ;
 - (void) setCandidates:(id)a inlineText:(id)b inlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})c maxX:(double)d layout:(BOOL)e ;
 - (void) setCandidateListDelegate:(id)a ;
 - (id) statisticsIdentifier;
 - (void) _reloadCandidates;
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
 - (void) candidatesDidChange;
 - (void) revealHiddenCandidates;
 - (id) initWithCellClass:(Class)a ;
 - (void) loadView;
 - ({CGSize=dd}) collectionView:(id)a layout:(id)b sizeForItemAtIndexPath:(id)c ;
 - ({CGSize=dd}) sizeOfDummyItemForCollectionView:(id)a layout:(id)b ;
 - (void) setShowsHiddenCandidates:(BOOL)a ;
 - (void) setCellClass:(Class)a ;
 - (id) delegate;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;
 - (id) candidates;


@end
