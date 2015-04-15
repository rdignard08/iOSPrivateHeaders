
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiCollectionInputView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl> {

    @"UIKeyboardEmojiCollectionView" _collectionView;
    @"UICollectionViewFlowLayout" _flowLayout;
    i _category;
    q _currentSection;
    @"NSIndexPath" _tappedSkinToneEmoji;
    @"UIKeyboardEmojiGraphicsTraits" _emojiGraphicsTraits;
    BOOL _isDraggingInputView;
    @? _completionBlock;
    @"UIResponder<UIKBEmojiHitTestResponder>" _hitTestResponder;
}

 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) setContentScaleFactor:(d)a;
 - (void) scrollViewDidScroll:(id)a;
 - (void) scrollViewWillBeginDragging:(id)a;
 - (void) scrollViewWillEndDragging:(id)awithVelocity:({CGPoint=dd})btargetContentOffset:(N^{CGPoint=dd})c;
 - (void) scrollViewDidEndDecelerating:(id)a;
 - (void) setHitTestResponder:(id)a;
 - (id) emojiBaseUnicodeString:(id)a;
 - (void) setTappedSkinToneEmoji:(id)a;
 - (BOOL) skinToneWasUsedForEmoji:(id)a;
 - (q) didInputSubTree:(id)a;
 - (BOOL) _userHasSelectedSkinToneEmoji;
 - (id) selectedChildSkinToneEmoji:(id)a;
 - (id) tappedSkinToneEmoji;
 - (void) _setUserHasSelectedSkinToneEmoji:(BOOL)a;
 - (void) shouldDismissModalDisplayView:(id)a;
 - (id) hitTestResponder;
 - (d) snappedXOffsetForOffset:(d)a;
 - (q) collectionView:(id)anumberOfItemsInSection:(q)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (q) numberOfSectionsInCollectionView:(id)a;
 - (id) collectionView:(id)aviewForSupplementaryElementOfKind:(id)batIndexPath:(id)c;
 - (void) reloadForCategory:(i)a;
 - (q) reloadSectionForOffsetPercentage:(d)a;
 - (void) setCategory:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (id) subTreeHitTest:({CGPoint=dd})a;
 - (void) willDisplayModalActionView:(id)awithSubTreeKeyView:(id)bcompletion:(@?)c;
 - ({UIEdgeInsets=dddd}) collectionView:(id)alayout:(id)binsetForSectionAtIndex:(q)c;
 - (d) collectionView:(id)alayout:(id)bminimumLineSpacingForSectionAtIndex:(q)c;
 - (d) collectionView:(id)alayout:(id)bminimumInteritemSpacingForSectionAtIndex:(q)c;
 - (BOOL) isDraggingInputView;
 - (i) category;


@end
