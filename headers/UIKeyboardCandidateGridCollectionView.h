
@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView {

    d _indexMaximumHeight;
    @"UIKeyboardCandidateGridCollectionViewController" _parentViewController;
    d _previousGroupBarStartingY;
    @"UITableViewIndex" _index;
    @"UIView" _headerView;
}

 - (void) dealloc;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acollectionViewLayout:(id)b;
 - (id) parentViewController;
 - (void) setContentOffset:({CGPoint=dd})a;
 - (void) selectItemAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(Q)c;
 - (void) setParentViewController:(id)a;
 - (id) headerView;
 - (void) scrollToOffsetFromTop:(d)awithAnimation:(BOOL)b;
 - (void) scrollToTopWithAnimation:(BOOL)a;
 - (void) scrollToBottomWithAnimation:(BOOL)a;
 - (void) setHeaderView:(id)a;
 - (id) index;
 - (void) keyboardDidHideNotification:(id)a;
 - (void) keyboardWillShowNotification:(id)a;
 - (d) groupBarStartingY;
 - (void) setPreviousGroupBarStartingY:(d)a;
 - (BOOL) shouldShowIndex;
 - (void) updateIndex:(BOOL)a;
 - (void) updateIndex;
 - (d) previousGroupBarStartingY;
 - (void) showIndex:(BOOL)a;
 - (void) delayUpdateIndex;
 - (BOOL) isCellVisible:(id)a;
 - (id) indexTitles;
 - (void) setIndexTitles:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
