
@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView {

    double _indexMaximumHeight;
    @"UIKeyboardCandidateGridCollectionViewController" _parentViewController;
    double _previousGroupBarStartingY;
    @"UITableViewIndex" _index;
    @"UIView" _headerView;
}

 - (void) dealloc;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acollectionViewLayout:(id)b;
 - (id) parentViewController;
 - (void) setContentOffset:({CGPoint=dd})a;
 - (void) selectItemAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(unsigned long long)c;
 - (void) setParentViewController:(id)a;
 - (id) headerView;
 - (void) scrollToOffsetFromTop:(double)awithAnimation:(BOOL)b;
 - (void) scrollToTopWithAnimation:(BOOL)a;
 - (void) scrollToBottomWithAnimation:(BOOL)a;
 - (void) setHeaderView:(id)a;
 - (id) index;
 - (void) keyboardDidHideNotification:(id)a;
 - (void) keyboardWillShowNotification:(id)a;
 - (double) groupBarStartingY;
 - (void) setPreviousGroupBarStartingY:(double)a;
 - (BOOL) shouldShowIndex;
 - (void) updateIndex:(BOOL)a;
 - (void) updateIndex;
 - (double) previousGroupBarStartingY;
 - (void) showIndex:(BOOL)a;
 - (void) delayUpdateIndex;
 - (BOOL) isCellVisible:(id)a;
 - (id) indexTitles;
 - (void) setIndexTitles:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
