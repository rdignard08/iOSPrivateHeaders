
@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView {

}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) scrollViewWillEndDragging:(id)a withVelocity:({CGPoint=dd})b targetContentOffset:(N^{CGPoint=dd})c ;
 - (void) reloadForCategory:(int)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - ({UIEdgeInsets=dddd}) collectionView:(id)a layout:(id)b insetForSectionAtIndex:(long long)c ;
 - (double) collectionView:(id)a layout:(id)b minimumLineSpacingForSectionAtIndex:(long long)c ;
 - (double) collectionView:(id)a layout:(id)b minimumInteritemSpacingForSectionAtIndex:(long long)c ;
 - (double) snappedYOffsetForOffset:(double)a ;


@end
