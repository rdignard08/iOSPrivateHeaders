
@interface UIKBCandidateCollectionView : UICollectionView {

}

 - (void) configureAsCandidatesBar;
 - (id) selectedItemIndexPath;
 - (BOOL) _selectAndScrollToItemAtIndexPath:(id)a animated:(BOOL)b scrollPosition:(unsigned long long)c ;


@end
