
@protocol UICollectionViewDataSource, UIKeyboardCandidateList, UIKeyboardCandidateGridLayoutDelegate;
@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateList, UIKeyboardCandidateGridLayoutDelegate> {

    BOOL _alwaysShowExtensionCandidates;
    BOOL _hasSecondaryCandidates;
    BOOL _showHiddenCandidatesOnly;
    BOOL _singleLineMode;
    BOOL _showsExtensionCandidates;
    BOOL _supportsNumberKeySelection;
    BOOL _secondaryCandidatesViewIsCurrent;
    BOOL __usesDeemphasizedTextAppearance;
    int _candidatesVisualStyle;
    <UIKeyboardCandidateGridCollectionViewControllerDelegate>* _delegate;
    <UIKeyboardCandidateListDelegate>* _candidateListDelegate;
    TIKeyboardCandidateResultSet* _candidateSet;
    NSArray* _candidateGroups;
    double _rowHeight;
    {?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16} _visualStyling;
    UIButton* _padInlineFloatingArrowButton;
    UIView* _headerView;
    UIKBCandidateCollectionView* _secondaryCandidatesView;
    double _groupBarWidth;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) reloadData;
 - (void) setRowHeight:(double)a;
 - (double) rowHeight;
 - (void) scrollViewDidScroll:(id)a;
 - (void) scrollViewWillBeginDragging:(id)a;
 - (long long) collectionView:(id)anumberOfItemsInSection:(long long)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (long long) numberOfSectionsInCollectionView:(id)a;
 - (id) collectionView:(id)aviewForSupplementaryElementOfKind:(id)batIndexPath:(id)c;
 - (BOOL) collectionView:(id)ashouldHighlightItemAtIndexPath:(id)b;
 - (void) collectionView:(id)adidSelectItemAtIndexPath:(id)b;
 - (void) showCandidateAtIndex:(unsigned long long)a;
 - (void) showNextCandidate;
 - (id) candidateListDelegate;
 - (id) collectionView;
 - (id) selectedItemIndexPath;
 - (id) candidateSet;
 - (void) setCandidateSet:(id)a;
 - (void) setCandidates:(id)ainlineText:(id)binlineRect:({CGRect={CGPoint=dd}{CGSize=dd}})cmaxX:(double)dlayout:(BOOL)e;
 - (void) setCandidateListDelegate:(id)a;
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
 - (BOOL) handleNumberKey:(unsigned long long)a;
 - (BOOL) hasNextPage;
 - (BOOL) hasPreviousPage;
 - (void) candidatesDidChange;
 - (void) revealHiddenCandidates;
 - (void) loadView;
 - ({CGSize=dd}) collectionView:(id)alayout:(id)bsizeForItemAtIndexPath:(id)c;
 - (void) viewDidLoad;
 - (void) setVisualStyling:({?=b6b1b1b8b16})a;
 - ({?=b6b1b1b8b16}) visualStyling;
 - (void) setCandidatesVisualStyle:(int)a;
 - (void) loadSecondaryCandidatesView;
 - (BOOL) hasSecondaryCandidates;
 - (id) secondaryCandidatesView;
 - (int) candidatesVisualStyle;
 - (void) setSecondaryCandidatesView:(id)a;
 - (id) headerView;
 - (void) scrollToTopWithAnimation:(BOOL)a;
 - (void) scrollToTopWithAnimation:(BOOL)arevealHeaderView:(BOOL)b;
 - (void) scrollToBottomWithAnimation:(BOOL)a;
 - (void) set_usesDeemphasizedTextAppearance:(BOOL)a;
 - (id) collectionViewGridLayout;
 - (BOOL) _usesDeemphasizedTextAppearance;
 - (id) candidateGroups;
 - (unsigned long long) padInlineHighlightedRowIndex;
 - (void) padInlineFloatingExpand;
 - (void) setHeaderView:(id)a;
 - (void) setSecondaryCandidatesViewIsCurrent:(BOOL)a;
 - (unsigned long long) groupsCount;
 - (BOOL) secondaryCandidatesViewIsCurrent;
 - (id) groupAtIndex:(unsigned long long)a;
 - (unsigned long long) candidateIndexOffset;
 - (id) firstCandidateIndexPathInGroupAtIndex:(unsigned long long)a;
 - (id) lastCandidateIndexPathInGroupAtIndex:(unsigned long long)a;
 - (void) updateHeaderView;
 - (void) updateIndexTitles;
 - (BOOL) supportsNumberKeySelection;
 - (void) setSupportsNumberKeySelection:(BOOL)a;
 - (BOOL) padInlineFloatingIsExpanded;
 - (void) setCandidateGroups:(id)a;
 - (void) setHasSecondaryCandidates:(BOOL)a;
 - (double) groupBarWidth;
 - (void) setGroupBarWidth:(double)a;
 - (void) scrollViewIndexChanged:(id)a;
 - (id) indexPathForCandidate:(id)a;
 - (id) firstCandidateIndexPath;
 - (void) stepOneLine:(BOOL)a;
 - (id) candidateAtIndexPath:(id)a;
 - (BOOL) showHiddenCandidatesOnly;
 - (unsigned long long) rowIndexForCellAtIndexPath:(id)a;
 - (BOOL) alwaysShowExtensionCandidates;
 - (void) setShowsExtensionCandidates:(BOOL)a;
 - ({CGSize=dd}) rowSizeForGridLayout;
 - (void) candidateViewWillBeginExtendingWithVisibleCandidates:(id)a;
 - (void) candidateViewDidFinishExtending;
 - (id) lastCandidateIndexPath;
 - (BOOL) hasGroupBar;
 - (void) setAlwaysShowExtensionCandidates:(BOOL)a;
 - (id) padInlineFloatingArrowButton;
 - (void) setShowHiddenCandidatesOnly:(BOOL)a;
 - (BOOL) singleLineMode;
 - (void) setSingleLineMode:(BOOL)a;
 - (BOOL) showsExtensionCandidates;
 - (id) init;
 - (id) delegate;
 - (void) layout;
 - (id) currentCandidate;
 - (BOOL) hasCandidates;


@end
