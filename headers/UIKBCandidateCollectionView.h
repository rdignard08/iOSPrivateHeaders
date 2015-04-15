
@interface UIKBCandidateCollectionView : UICollectionView {

}

 - (void) configureAsCandidatesBar;
 - (id) selectedItemIndexPath;
 - (BOOL) _selectAndScrollToItemAtIndexPath:(id)aanimated:(BOOL)bscrollPosition:(unsigned long long)c;


@end
