
@interface UIKBCandidateCollectionView : UICollectionView {

}

 - (void) configureAsCandidatesBar;
 - (id) selectedItemIndexPath;
 - (BOOL) _selectAndScrollToItemAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(Q)c;


@end
