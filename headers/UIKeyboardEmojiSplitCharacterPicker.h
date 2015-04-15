
@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView {

}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) scrollViewWillEndDragging:(id)awithVelocity:({CGPoint=dd})btargetContentOffset:(N^{CGPoint=dd})c;
 - (void) reloadForCategory:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - ({UIEdgeInsets=dddd}) collectionView:(id)alayout:(id)binsetForSectionAtIndex:(q)c;
 - (d) collectionView:(id)alayout:(id)bminimumLineSpacingForSectionAtIndex:(q)c;
 - (d) collectionView:(id)alayout:(id)bminimumInteritemSpacingForSectionAtIndex:(q)c;
 - (d) snappedYOffsetForOffset:(d)a;


@end
