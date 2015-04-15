
@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView {

}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) scrollViewWillEndDragging:(id)awithVelocity:({CGPoint=dd})btargetContentOffset:(N^{CGPoint=dd})c;
 - (void) reloadForCategory:(int)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - ({UIEdgeInsets=dddd}) collectionView:(id)alayout:(id)binsetForSectionAtIndex:(long long)c;
 - (double) collectionView:(id)alayout:(id)bminimumLineSpacingForSectionAtIndex:(long long)c;
 - (double) collectionView:(id)alayout:(id)bminimumInteritemSpacingForSectionAtIndex:(long long)c;
 - (double) snappedYOffsetForOffset:(double)a;


@end
